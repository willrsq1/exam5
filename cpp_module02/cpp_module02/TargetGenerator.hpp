#pragma once

#include <string>
#include <iostream>

#include "ATarget.hpp"

class TargetGenerator
{
	private:
	

	std::string* target_types;
	ATarget * targets[5];
	protected:

	public:
	TargetGenerator();
	~TargetGenerator();

	
	void learnTargetType( ATarget *);
	void forgetTargetType (std::string const &);
	// ATarget* createTarget(std::string const &) const;
	ATarget* createTarget(std::string const &);


};