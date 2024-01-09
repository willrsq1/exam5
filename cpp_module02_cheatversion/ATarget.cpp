#include "ATarget.hpp"

ATarget::ATarget()
{

}
ATarget::~ATarget()
{

}


ATarget::ATarget(std::string const & a)
{
	type =a ;
}

ATarget & ATarget::operator=(ATarget const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

ATarget::ATarget(ATarget const & rhs)
{
	this->type = rhs.type;
}

std::string const & ATarget::getType() const
{
	return type;
}

void	ATarget::getHitBySpell(ASpell const & a) const{
	std::cout << this->type << " has been " << a.getEffects() << "!" << std::endl;
}