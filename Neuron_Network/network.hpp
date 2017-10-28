#ifndef NETWORK_H
#define NETWORK_H

#include "neurone.hpp"

class Network 
{

public:
////////////////////////////Constructor////////////////////////////
Network();
void update();
void pass_spike(const int& simtime, size_t i);
		
////////////////////////////Destructor////////////////////////////	
~Network();

private:
std::vector<Neurone*> network;

/**
 * Create excitatory neurons in Network constructor
 */
void create_excitatory_neurons();

/**
 * Create inhibitory neurons in Network constructor
 */
void create_inhibitory_neurons();
	
};


#endif
