#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <iterator>
# include <algorithm>

class	notfound : public std::exception
{
	public:
		const char * what() const throw()
		{
			return ("Value not found.");
		}
};

template<typename T>
int  easyfind(T const& container, int const& n)
{

	
    typename T::const_iterator it;

	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw notfound();
	return *it;
}


#endif