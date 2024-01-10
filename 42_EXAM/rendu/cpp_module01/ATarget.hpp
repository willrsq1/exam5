
#ifndef ATARGET_HPP

#define ATARGET_HPP

# include <iostream>
#include "Warlock.hpp"

#include "ASpell.hpp"



class ATarget
{

	private :

	protected:
	ATarget();

	std::string type;

	ATarget (const ATarget &);
	ATarget & operator=(const ATarget &);




	public:

	ATarget (std::string const &);
	~ATarget();


	std::string const & getType() const;

	void getHitBySpell(ASpell const &) const ;

	virtual ATarget * clone() const = 0;






};

#endif