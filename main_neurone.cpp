#include "neurone.hpp"
#include <iostream> 
#include "constantes.hpp"
#include <fstream>
#include "network.hpp"


int main()
{
	//std::vector<Neurone> Neurones;// = {Neurone n1, Neurone n2};
	Neurone n1;
	Neurone n2;
	Neurones.push_back(n1);
	Neurones.push_back(n2);
	
	//Neurone n1;
	int a(0);
	int b(2000);
	int simtime(t_start);
	double I_ext(0.0);
	
	std::ofstream potentials_2;
	std::ofstream potentials_1;
	potentials_1.open("Potentials_1.txt");
	potentials_2.open("Potentials_2.txt");
	//the_potentials << "When neuron spiked: " << std::endl;
	
	while(simtime < t_stop)
	{	
		if(simtime>=a and simtime<=b and a<b)
		{
			I_ext = 1.01;
		}
		else
			I_ext = 0.0;
	
		
		for(size_t i(0); i<Neurones.size(); i++)
		{
			bool spike(false);
			spike = Neurones[i].update(I_ext/((int)i+1));
			if(spike)
			{
				if(i == 0)
					Neurones[1].setSpikeBuffer(2);
				Neurones[i].affiche();
				
			}
			/*if(i== 0)
				potentials_1 << Neurones[0].getPotential() << std::endl;
			if(i==1)
				potentials_2 << Neurones[1].getPotential() << std::endl;*/
			std::cout << Neurones[i].getPotential() << std::endl;
		}
	
		//n1.update(I_ext);
		
	
		simtime += dt;
		

	};
	
	potentials_1.close();
	potentials_2.close();
	//n1.affiche();
	
	return 0;
}
