#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(TargetGenerator const & rhs)
{
	(void)rhs;
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const & rhs)
{
	(void)rhs;
	return (*this);
}

TargetGenerator::TargetGenerator()
{
	Dummy_count = 0;
	BrickWall_count = 0;
}

TargetGenerator::~TargetGenerator()
{
}



void TargetGenerator::learnTargetType( ATarget * t)
{
	if (!t)
		return ;
	if (t->getType() == "Target Practice Dummy")
	{
		Dummy_count = 1;
	}
	if (t->getType() == "Inconspicuous Red-brick Wall")
	{
		BrickWall_count = 1;
	}

}

void TargetGenerator::forgetTargetType (std::string const & n)
{
	
	if (n == "Target Practice Dummy")
	{
		Dummy_count = 0;
	}
	if (n == "Inconspicuous Red-brick Wall")
	{
		BrickWall_count = 0;
	}

}

ATarget * TargetGenerator::createTarget(std::string const & n)
{
	if (n == "Target Practice Dummy")
	{
		return new Dummy;
	}
	if (n == "Inconspicuous Red-brick Wall")
	{
		return new BrickWall;
	}
	return (NULL);
}
