#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <string>
#include <iostream>

class ASpell;
class ATarget;

class Warlock
{
private:

	std::string		spells_name[5];
	ASpell *		spells_tab[5];


	
	std::string name;
	std::string title;
	Warlock();
	Warlock(const Warlock&);
	Warlock& operator=(const Warlock&);
public:
	Warlock(std::string const&, std::string const&);
	~Warlock();
	std::string const & getName() const;
	std::string const& getTitle() const;
	void				setTitle(const std::string&);
	void		introduce() const;

	void	learnSpell(ASpell *);
	void	forgetSpell(std::string const );
	void	launchSpell(std::string const , ATarget const &);
};
#include "ASpell.hpp"
#include "ATarget.hpp"
#endif