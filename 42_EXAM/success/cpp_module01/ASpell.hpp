#pragma once
#include "Warlock.hpp"
#include "ATarget.hpp"

class ATarget;

class ASpell
{
private:
	/* data */
protected:
	ASpell();
	std::string name;
	std::string effects;
public:
	ASpell(std::string const &, std::string const &);
	ASpell(ASpell const&);
	ASpell & operator=(ASpell const &);
	virtual ~ASpell();
	std::string const& getName() const;
	std::string const& getEffects() const;
	virtual ASpell *clone() const = 0;
	void	launch(ATarget const &) const;
};
