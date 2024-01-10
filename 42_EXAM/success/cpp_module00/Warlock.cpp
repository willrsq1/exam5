# include "Warlock.hpp"


Warlock::Warlock()
{

}

Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}



Warlock::Warlock(const Warlock &jsp)
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

void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}


void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}








