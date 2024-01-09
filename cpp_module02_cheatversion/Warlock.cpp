#include "Warlock.hpp"
#include <iostream>



Warlock::Warlock(std::string const& name, std::string const& title): name(name), title(title)
{
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
	spellbook.learnSpell(s);
}

void	 Warlock::forgetSpell(std::string const n)
{
	spellbook.forgetSpell(n);
}

void	 Warlock::launchSpell(std::string const n, ATarget const & t)
{
	ASpell * a = spellbook.createSpell(n);
	if (a)
		a->launch(t);
}
