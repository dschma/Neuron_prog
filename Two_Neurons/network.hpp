#ifndef NETWORK_H
#define NETWORK_H

#include "neurone.hpp"

class Network 
{
	public:
		Network();
		void update();
		void pass_spike(const int& simtime, size_t i);

	private:
		std::vector<Neurone> network;
		
	
};


#endif
