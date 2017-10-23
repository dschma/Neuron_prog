#ifndef NEURONE_H
#define NEURONE_H

//include <Time.hpp>
//#include <SFML>
#include <vector> 
#include <cmath>
#include "constantes.hpp"

constexpr double tau(20.0);
constexpr int refractory_time(2);
constexpr double membrane_resistance(tau);
constexpr double c1(exp(-h/tau));
constexpr double c2(membrane_resistance*(1-exp(-h/tau)));

class Neurone
{
	public:
		//Constructor
		Neurone();
		
		//Getters
		double getPotential() const;
		unsigned int getNbSpikes() const;
		int getLastSpikeTime() const;
		
		//Setters
		void setPotential(double);
		
		//Change etat du neurone
		bool update(/* int dt*/ double I_ext);
		
		bool isRefractory();
		
		void addSpikeTime(int);
		
		void affiche();
		
		void receive_spike(int t, double j);
		void pass_spike(int& t);
		
		void addConnection(Neurone* n);
		
		~Neurone();
	
	private:
		double potential;
		unsigned int nb_spikes;
		std::vector<int> times_spikes;
		int time;
		//std::array<int,delay> spike_buffer; 		//change for array?
		std::vector<int> spike_buffer; 		//change for array?
		std::vector<Neurone*> post;
};

#endif
