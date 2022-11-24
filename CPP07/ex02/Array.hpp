/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 02:06:38 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 02:06:40 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array 
{
    private:
        T*      _array;
        int     _size;
    public:
        Array(): _array(NULL), _size(0) {}

        Array(unsigned int n): _size(n)
        {
            _array = new T[n];
        } 

        Array(Array const& ClassCopy)
        {
            this->_size = ClassCopy._size;
            _array = new T[this->_size];
            for (int i = 0; i < this->_size; i++)
                _array[i] = ClassCopy._array[i];
        }

        Array& operator=(Array const& rhs)
        {
            if (this->_array)
				delete [] this->_array;
			this->_size = rhs._size;
			this->_array = new T[this->_size];
			for (int i=0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
			return *this;
        }

        ~Array()
        {
            if(this->_array)
                delete[] _array;
        }

        int     size() const
        {
            return (_size);
        }

        T&  operator[](int index)
        {
            if (index >= _size || index < 0)
                throw OutOfRange();
            else
            {
                return (_array[index]);
            }
        }

        T const operator[](int index) const
        {
            if (index >= _size || index < 0)
                throw OutOfRange();
            else
            {
                return(_array[index]);
            }
        }

        class OutOfRange: public std::exception
        {
            public:
				virtual const char* what() const throw()
				{
					return ("Invalid index");
				}
        };
};

template<typename T>
std::ostream&      operator<<(std::ostream& o, Array<T> const& A)
{
    o << "{";
    for (int i = 0; i < A.size(); i++)
        o << A[i] << ((i < A.size()-1)? ", " : "");
    o << "}";
    return o;
}

#endif
