#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <iterator>

class	notfound : public std::exception
{
	public:
		const char * what() const throw()
		{
			return ("Value not found.");
		}
};

template<typeneme T>
int  easyfind(T const& container, int const& n)
{

	
    typename T::const_iterator it;
	it = find(container.begin(), container.end(), i);
	if (it == container.end())
		throw (notfound());
	return (*it);
}


#endif