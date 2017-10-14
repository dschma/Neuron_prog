#include "neurone.hpp"
#include <iostream> 
#include "constantes.hpp"
#include <fstream>


int main()
{
	//std::vector<Neurone> Neurones = {Neurone n1, Neurone n2};
	Neurone n1;
	int a(200);
	int b(1000);
	int simtime(t_start);
	double I_ext(0.0);
	
	std::ofstream the_potentials;
	the_potentials.open("Membrane_potentials.txt");
	//the_potentials << "When neuron spiked: " << std::endl;
	
	while(simtime < t_stop)
	{	
		if(simtime>=a and simtime<=b and a<b)
		{
			I_ext = 1.1;
		}
		else
			I_ext = 0.0;
		
		
		//std:: cout << I_ext << "  ";
		//bool spike(false);
		//spike = n1.update();
		
		n1.update(I_ext);
		the_potentials << n1.getPotential() << std::endl;
		simtime += dt;
		
		/*
		if(n1.isRefractory(simtime))
			n1.setPotential(0.0);
		else if( n1.getPotential() > Vth)
			n1.addSpikeTime(simtime);
	
		n1.update(dt, I_ext);
		simtime += dt;*/
		

	};
	
	the_potentials.close();
	n1.affiche();
	
	return 0;
}
