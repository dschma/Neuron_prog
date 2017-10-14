#ifndef NEURONE_H
#define NEURONE_H

//include <Time.hpp>
//#include <SFML>
#include <vector> 

constexpr double tau(20.0);
constexpr int refractory_time(2);
constexpr double membrane_resistance(tau);

class Neurone
{
	public:
		//Constructor
		Neurone();
		
		//Getters
		double getPotential() const;
		unsigned int getNbSpikes() const;
		int getSpikeTime() const;
		int getLastSpikeTime() const;
		
		//Setters
		void setPotential(double);
		//void setRefractory(bool);
		
		//Change etat du neurone
		void update(/* int dt*/ double I_ext);
		
		bool isRefractory();
		
		void addSpikeTime(int);
		
		void affiche();
		
		//~Neurone();
	
	private:
		double potential;
		unsigned int nb_spikes;
		std::vector<int> times_spikes;
		//bool refractory;
		double time;
};

#endif
