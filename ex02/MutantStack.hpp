/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:56:51 by adidion           #+#    #+#             */
/*   Updated: 2022/02/16 15:13:46 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <iterator>
#include <list>

template <typename T>
class	MutantStack: public std::stack<T>
{
	public:
	typedef T* iterator;
		iterator begin()
		{
			int i = 0;
			iterator ret;
			T tmp;
			std::vector<T> v;
			while (!this->empty())
			{
				i++;
				tmp = this->top();
				v.push_back(tmp);
				this->pop();
			}
			i--;
			this->push(v[i]);
			ret = &(this->top());
			while (i--)
				this->push(v[i]);
			return (ret);
		}
		iterator end()
		{
			return (&this->top() + 1);
		}
};

#endif
