#include "neurone.hpp"
#include "constantes.hpp"
#include <cmath>
#include <iostream>
#include <cassert>

Neurone::Neurone()
:potential(0.0), 
nb_spikes(0.0), 
time(0), 
spike_buffer({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0})
{}

Neurone::~Neurone()
{
	for( auto& neurone : post)
	{
		delete neurone;
		neurone = nullptr;
	}
	post.clear();
}

double Neurone::getPotential() const
{
	return potential;
}

unsigned int Neurone::getNbSpikes() const
{
	return nb_spikes;
}

void Neurone::setPotential(double p) 
{
	potential = p;
}

int Neurone::getLastSpikeTime() const
{
	int spike_size(times_spikes.size());
	return times_spikes[spike_size-1];
}

bool Neurone::isRefractory(/*int simtime*/)
{
	if(times_spikes.size() == 0)
		return false;
	if(time - getLastSpikeTime() < refractory_time)
		return true;
	return false;
}

void Neurone::addSpikeTime(int simtime)
{
	times_spikes.push_back(simtime);
}

bool Neurone::update(/*int dt*/ double I_ext)
{
	bool spike(false);
	double S(spike_buffer[time%(spike_buffer.size())]);
	if(potential >= Vth)
	{
		addSpikeTime(time);
		spike = true;
	}
	
	if(isRefractory(/*time*/))
	{
		setPotential(0.0);
		std::cout << "refrac " << std::endl;
	}
	else
		potential = c1*potential + I_ext*c2 + S;
	
	//std::cout << potential << std::endl;
	spike_buffer[time%(spike_buffer.size()+1)] = 0;
	time = time+dt;
	return spike;
}

/*
void Neurone::setSpikeBuffer(int a)
{
	spike_buffer=a;
}*/

void Neurone::receive_spike(int t, double j)
{
	unsigned int idx(t%spike_buffer.size());
	assert(idx<spike_buffer.size());
	spike_buffer[idx] += j;
}

void Neurone::addConnection(Neurone* n)
{
	post.push_back(n);
}

void Neurone::pass_spike(int& t)
{
	for(auto& neuron_connect : post)
	{
		neuron_connect->receive_spike(t+delay, J);
	}
}

void Neurone::affiche()
{
	std::cout << "Neurone informations " << std::endl;
	std::cout << "Membrane resistance = " << membrane_resistance << std::endl;
	std::cout << "Times of spike " << std::endl;
	if( times_spikes.empty())
		std::cout << " non spike " << std::endl;
	else
	{
		for(size_t i(0); i<times_spikes.size(); i++)
		{
			std::cout << times_spikes[i] << ", ";
		}
	}
}


