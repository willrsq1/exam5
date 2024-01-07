#pragma once

#include <string>
#include <iostream>

#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:

		ATarget();
	protected:
		std::string type;

	public:
		ATarget(std::string const &);
		virtual ~ATarget();
		ATarget& operator=(ATarget const &);
		ATarget(ATarget const &);
		std::string const & getType() const;
		virtual ATarget * clone() const = 0;
		void getHitBySpell(ASpell const &) const;


};