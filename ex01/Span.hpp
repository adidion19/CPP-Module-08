/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:48:39 by adidion           #+#    #+#             */
/*   Updated: 2022/02/16 10:18:53 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>

class	Span
{
	private:
		std::vector<int> _v;
		unsigned int _n;
		unsigned int _size;
	public:
		Span(unsigned int n);
		Span( Span const &obj );
		Span &operator=( Span const &obj );
		~Span();
		unsigned int getN() const;
		unsigned int getSize() const;
		std::vector<int>	getV( void ) const;
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void addNumber(int n);
		void addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite);
};

#endif