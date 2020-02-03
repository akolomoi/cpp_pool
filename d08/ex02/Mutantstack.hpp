/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 20:24:36 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 20:24:37 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef D08_MUTANTSTACK_HPP
# define D08_MUTANTSTACK_HPP

# include <list>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack(){};

	MutantStack(const MutantStack &ms)
	{
		*this = ms;
	}

	~MutantStack(){};

	MutantStack	&operator=(const MutantStack &rhs)
	{
		this->std::stack<T>::_stack = rhs.std::stack<T>::_stack;
		return *this;
	}

	void	push(const T &val)
	{
		std::stack<T>::push(val);
		this->_list.push_back(val);
	}

	void	pop()
	{
		std::stack<T>::pop();
		this->_list.pop_back();
	}

	typedef typename std::list<T>::iterator iterator;

	iterator	begin()
	{
		return this->_list.begin();
	}

	iterator	end()
	{
		return this->_list.end();
	}

private:
	std::list<T>	_list;
};


#endif //D08_MUTANTSTACK_HPP
