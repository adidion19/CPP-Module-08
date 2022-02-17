/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:02:50 by adidion           #+#    #+#             */
/*   Updated: 2022/02/15 15:21:17 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>
#include <array>
#include <vector>

template<typename T>
int easyfind(T const& t, int i)
{
	typename T::const_iterator ite = t.end();
	typename T::const_iterator it = std::find(t.begin(), ite, i);
	if (it == ite)
		throw (std::exception());
	return (*it);
}

#endif