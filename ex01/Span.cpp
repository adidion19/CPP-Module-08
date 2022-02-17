/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:09:15 by adidion           #+#    #+#             */
/*   Updated: 2022/02/16 10:48:33 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int const n) : _n(n), _size(0)
{
	return ;
}

Span::Span( const Span &obj ): _n(obj.getN()), _size(obj.getSize())
{
	_v = obj._v;
}

Span	&Span::operator=( const Span &obj )
{
	_n = obj._n;
	_v = obj._v;
	_size = obj._v.size();
	return (*this);
}

Span::~Span()
{
	return ;
}

unsigned int Span::getN() const
{
	return (_n);
}

unsigned int Span::getSize() const
{
	return (_size);
}

std::vector<int>	Span::getV( void ) const
{
	return (_v);
}

unsigned int Span::shortestSpan()
{
	if (!_size || _size == 1)
		throw (std::exception());
	std::vector<int> v = _v;
	std::sort(v.begin(), v.end());
	int j;
	for (unsigned int i = 0; i < v.size(); i++)
	{
		if (i && std::abs(v[i] - v[i - 1]) < static_cast<int>(v.size()))
			j = std::abs(v[i] - v[i - 1]);
	}
	return (j);
}

unsigned int Span::longestSpan()
{
	if (_size == 1 || !_size)
		throw (std::exception());
	std::vector<int>::iterator max = std::max_element(_v.begin(), _v.end());
	std::vector<int>::iterator min = std::min_element(_v.begin(), _v.end());
	int i = *max - *min;
	return (i);
}

void Span::addNumber(int i)
{
	if (_v.size() >= _n || _size >= _n)
		throw (std::exception());
	_size++;
	_v.push_back(i);
}

void Span::addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{
	if (it > ite)
		return ;
	for (std::vector<int>::iterator it2 = it; it2 != ite; it2++)
	{
		if (_v.size() >= _n || _size >= _n)
			throw (std::exception());
		_size++;
		_v.push_back(*it2);
	}
}
