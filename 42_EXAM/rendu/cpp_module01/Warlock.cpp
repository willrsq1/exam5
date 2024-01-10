# include "Warlock.hpp"




Warlock::Warlock()
{

}


Warlock::Warlock (std::string const & name, std::string const &title) : name(name), title(title)
{
	f_count = 0;
	std::cout << name << ": This looks like another boring day." << std::endl;
}



Warlock::Warlock (const Warlock & jsp)
{
	*this = jsp;
}

Warlock & Warlock::operator=(const Warlock &jsp2)
{
	jsp2.getName();
	return (*this);
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done !" << std::endl;
}

std::string const & Warlock::getName() const
{
	return (name);
}

std::string const & Warlock::getTitle() const
{
	return (title);
}


void Warlock::setTitle(std::string const & title)
{
	this->title = title;
}


void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}


void Warlock:: learnSpell(ASpell * s)
{
	if (s && s->getName() == "Fwoosh")
		f_count = 1;
}


void Warlock::forgetSpell (std::string const j)
{
	if (j == "Fwoosh")
		f_count = 0;
}


void Warlock::launchSpell(std::string const a, ATarget const & b)
{
	if (a == "Fwoosh" && f_count == 1)
	{
		Fwoosh c;
		c.launch(b);
	}
}








