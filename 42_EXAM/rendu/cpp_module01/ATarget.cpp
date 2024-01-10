# include "ATarget.hpp"


ATarget::ATarget()
{

}


ATarget::ATarget (std::string const & type) : type(type)
{

}



ATarget::ATarget (const ATarget & jsp)
{
	*this = jsp;
}

ATarget & ATarget::operator=(const ATarget &other)
{
	this->type = other.type;

	return (*this);
}

ATarget::~ATarget()
{

}

std::string const & ATarget::getType() const
{
	return (type);
}

void ATarget::getHitBySpell(ASpell const & jspp) const
{
	std::cout << type << " has been " << jspp.getEffects() << "!" << std::endl;
}




