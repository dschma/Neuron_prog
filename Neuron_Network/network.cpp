#include "network.hpp"

Network::Network()
{}


void Network::update(const int& simtime)
{
	for(size_t i(0); i<network.size(); i++)
	{
		bool spike(false);
		spike = network[i].update(I_ext/((int)i+1));
		if(spike)
		{
			pass_spike(simtime, i);
		}
		
		std::cout <<network[i].getPotential() << std::endl;
	}
}

void Network::pass_spike(const int& simtime, size_t i)
{
	for(size_t j(i); j<network.size(); j++)
	{
		network[j].receive_spike(simtime,J);
	}
}

void Network::create_excitatory_neurons()
{
	for(int i(0); i<10000; ++i)
	{
		excitatory_neurons.push_back(new Neuron(/*mettre les valeurs de j et g*/));
	}
}

void Network::create_inhibitory_neurons()
{
	for(int i(0); i<2500; ++i)
	{
		inhibitory_neurons.push_back(new Neuron(/*mettre les valeurs de j et g*/));
	}
}

Network::~Network()
{
	for(auto& neuron : network)
	{
		delete neuron;
		neuron = nullptr;
	}
	network.clear();
}
