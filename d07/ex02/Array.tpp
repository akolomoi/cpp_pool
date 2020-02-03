/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 15:14:51 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/13 15:14:52 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef D07_ARRAY_TPP
# define D07_ARRAY_TPP

# include <iostream>

template <typename T>
class Array
{
public:
	Array() : _size(0), _arr(NULL)
	{}

	Array(unsigned int n) : _size(n), _arr(new T[n]())
	{}

	Array(const Array &array) : _size(0), _arr(NULL)
	{
		*this = array;
	}

	~Array()
	{
		if (this->_arr)
			delete [] _arr;
	}

	Array	&operator=(const Array &rhs)
	{
		if (this->_size != rhs.size())
		{
			if (this->_arr != NULL)
				delete [] this->_arr;
			this->_size = rhs.size();
			this->_arr = new T[this->_size];
		}
		for (unsigned int i = 0; i < rhs.size(); i++)
			this->_arr[i] = rhs._arr[i];
		return *this;
	}

	T		&operator[](long long int index)
	{
		if (index < 0 || index >= this->_size)
			throw std::exception();
		return this->_arr[index];
	}

	unsigned int	size(void) const
	{
		return this->_size;
	}

private:
	unsigned int	_size;
	T				*_arr;
};


#endif //D07_ARRAY_TPP
