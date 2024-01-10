
#ifndef WARLOCK_HPP

#define WARLOCK_HPP

# include <iostream>

class ASpell;
class ATarget;

class Warlock
{

	private:

	std::string name;
	std::string title;
	int f_count;

	Warlock();
	Warlock (const Warlock &);
	Warlock & operator=(const Warlock &);




	public:

	Warlock (std::string const &, std::string const &);
	~Warlock();


	std::string const & getName() const;
	std::string const & getTitle() const;

	void setTitle(std::string const &);
	void introduce() const;



	void learnSpell (ASpell *);
	void forgetSpell (std::string const);
	void launchSpell(std::string const, ATarget const &);







};


#include "Fwoosh.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"




#endif