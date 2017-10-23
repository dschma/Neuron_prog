#include "network.hpp"

Network::Network()
{
	Neurone n1;
	Neurone n2;
	Neurones.push_back(n1);
	Neurones.push_back(n2);
}


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
