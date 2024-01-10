#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock
{
private:
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
};

#endif