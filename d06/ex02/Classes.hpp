/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 17:49:04 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/12 17:49:05 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef D06_CLASSES_HPP
# define D06_CLASSES_HPP

class Base
{
public:
	virtual ~Base();
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

#endif //D06_CLASSES_HPP
