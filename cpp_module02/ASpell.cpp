#include "ASpell.hpp"


ASpell::ASpell(std::string const & n, std::string const & e): name(n), effects(e)
{
}

ASpell::~ASpell()
{
}
ASpell::ASpell()
{
}

ASpell::ASpell(ASpell const & rhs)
{
	this->name = rhs.getName();
	this->effects = rhs.getEffects();
}

ASpell & ASpell::operator=(ASpell const & rhs)
{
	this->name = rhs.getName();
	this->effects = rhs.getEffects();
	return (*this);
}



std::string const& ASpell::getEffects() const
{
	return effects;
}
std::string const& ASpell::getName() const
{
	return name;
}

void	ASpell::launch(ATarget const & a) const{
	a.getHitBySpell(*this);
}