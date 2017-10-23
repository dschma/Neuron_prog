#include "neurone.hpp"
#include <iostream> 
#include "constantes.hpp"
#include <fstream>
#include "network.hpp"
#include <cassert>


int main()
{
	std::vector<Neurone> neurones;  // = {Neurone n1, Neurone n2};
	Neurone n1;
	Neurone n2;
	neurones.push_back(n1);
	neurones.push_back(n2);
	
	n1.addConnection(&n2);
	
	std::vector<Neurone*> ext_connec;
	ext_connec.push_back(&n1);
	
	//Neurone n1;
	int a(0);
	int b(1000);
	//Network network;
	int simtime(t_start);
	double I_ext(0.0);

	while(simtime < t_stop)
	{
		/*	
		if(simtime>=a and simtime<=b and a<b)
		{
			I_ext = 1.01;
		}
		else
			I_ext = 0.0;
	*/
		//network.update(simtime);
		
		for(size_t i(0); i<neurones.size(); i++)
		{
			bool spike(false);
			assert(!ext_connec.empty());
			if(!ext_connec.empty())
			{
				for(auto& neu_ext : ext_connec)
				{
					if(neu_ext != nullptr and neu_ext == &neurones[i])
						I_ext = 1.01;
					else
						I_ext = 0.0;
				}
				//std::cout << "I_ext " << I_ext << std::endl;
			}
			spike = neurones[i].update(I_ext);
			if(spike)
			{
				std::cout << "Spiked at " << neurones[i].getLastSpikeTime()*h << std::endl;
				/*for(size_t j(i+1); j<neurones.size(); j++)
				{
					std::cout<< "j = " << j << std::endl;
					neurones[j].receive_spike(simtime,J);
				}*/
				neurones[i].pass_spike(simtime);
			}
			
			//std::cout <<neurones[i].getPotential() << std::endl;
		}
		
		//n1.update(I_ext);
		
	
		simtime += dt;
		

	};
	
	
	/*potentials_1.close();
	potentials_2.close();*/
	//n1.affiche();
	
	return 0;
}




/*
	std::ofstream potentials_2;
	std::ofstream potentials_1;
	potentials_1.open("Potentials_1.txt");
	potentials_2.open("Potentials_2.txt");
	//the_potentials << "When neuron spiked: " << std::endl;*/
	
