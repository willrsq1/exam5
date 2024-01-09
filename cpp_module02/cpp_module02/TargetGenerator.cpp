#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator()
{

	target_types = new std::string[5];
	for (size_t i = 0; i < 5; i++)
	{
		target_types[i] = "";
		targets[i] = NULL;
	}
	
}

TargetGenerator::~TargetGenerator()
{
}



void TargetGenerator::learnTargetType( ATarget * t)
{
	if (!t)
		return ;

	for (size_t i = 0; i < 5; i++)
	{
		if (target_types[i] == t->getType())
			return ;
	}
	for( size_t i = 0; i < 5; i++)
	{
		if (target_types[i] == "")
		{
			target_types[i] = t->getType();
			targets[i] = t->clone();
			return ;
		}
	}
}

void TargetGenerator::forgetTargetType (std::string const & n)
{
	for(int i = 0; i < 5; i ++)
	{
		if (target_types[i] == n)
		{
			target_types[i] = "";
			targets[i] = NULL;
		}
	}

}

ATarget * TargetGenerator::createTarget(std::string const & n)
{
	for(int i = 0; i < 5; i ++)
	{
		if (target_types[i] == n)
		{
			return targets[i]->clone();
		}
	}
	return (NULL);
}
