#include "Warlock.hpp"
#include <iostream>



Warlock::Warlock(std::string const& name, std::string const& title): name(name), title(title)
{
	Fwoosh_count = 0;
	std::cout << name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}


std::string const & Warlock::getName() const
{
	return (name);
}


std::string const & Warlock::getTitle() const
{
	return (title);
}

void	Warlock::setTitle(std::string const& title)
{
	this->title = title;
}

void	Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

Warlock::Warlock()
{

}
Warlock::Warlock(const Warlock& l)
{
	*this = l;
}
Warlock& Warlock::operator=(const Warlock& l)
{
	l.getName();
	return (*this);
}


void	 Warlock::learnSpell(ASpell * s)
{
		if (s && s->getName() == "Fwoosh")
			Fwoosh_count = 1;
	
}

void	 Warlock::forgetSpell(std::string const n)
{
	if (n == "Fwoosh")
		Fwoosh_count = 0;
}

void	 Warlock::launchSpell(std::string const n, ATarget const & t)
{
	if (n == "Fwoosh" && Fwoosh_count != 0)
	{
		Fwoosh a;
		a.launch(t);
	}
}