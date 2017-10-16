#include "neurone.hpp"
#include "constantes.hpp"
#include <cmath>
#include <iostream>

Neurone::Neurone()
:potential(0.0), nb_spikes(0.0), time(0), spike_buffer(0)
{}

double Neurone::getPotential() const
{
	return potential;
}

unsigned int Neurone::getNbSpikes() const
{
	return nb_spikes;
}
/*
int Neurone::getSpikeTime() const
{
	return times_spikes;
}
*/
void Neurone::setPotential(double p) 
{
	potential = p;
}

int Neurone::getLastSpikeTime() const
{
	return times_spikes[times_spikes.size()-1];
}

bool Neurone::isRefractory(/*int simtime*/)
{
	if(times_spikes.size() == 0)
		return false;
	if(time - getLastSpikeTime() < refractory_time)
		return true;
	return false;
}
/*
void Neurone::setRefractory(bool a)
{
	refractory = a;
}
*/
void Neurone::addSpikeTime(int simtime)
{
	times_spikes.push_back(simtime);
}

bool Neurone::update(/*int dt*/ double I_ext)
{
	bool spike(false);
	if(potential >= Vth)
	{
		addSpikeTime(time);
		spike = true;
	}
	
	if(isRefractory(/*time*/))
		setPotential(0.0);
	else
		potential = exp(-h/tau)*potential + I_ext*membrane_resistance*(1-exp(-h/tau)) + spike_buffer;
	
	time = time+dt;
	spike_buffer=0;  //????
	return spike;
}


void Neurone::setSpikeBuffer(int a)
{
	spike_buffer=a;
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
