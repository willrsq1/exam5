#pragma once

#include <string>
#include <iostream>

#include "ATarget.hpp"

class BrickWall;
class Dummy;

class TargetGenerator
{
	private:

	int		Dummy_count;
	int		BrickWall_count;	


	TargetGenerator(TargetGenerator const&);
	TargetGenerator & operator=(TargetGenerator const &);
	protected:

	public:
	TargetGenerator();
	~TargetGenerator();

	
	void learnTargetType( ATarget *);
	void forgetTargetType (std::string const &);
	ATarget* createTarget(std::string const &); //can be const, required by 42exam to NOT be, why ? idk.


};

#include "Dummy.hpp"
#include "BrickWall.hpp"