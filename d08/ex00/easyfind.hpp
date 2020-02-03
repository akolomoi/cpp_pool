/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 18:12:02 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 18:12:03 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef D08_EASYFIND_HPP
# define D08_EASYFIND_HPP

# include <algorithm>

template <typename T>
typename T::iterator	easyfind(T &container, int n)
{
	return std::find(container.begin(), container.end(), n);
}

#endif //D08_EASYFIND_HPP
