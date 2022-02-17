/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:42:36 by adidion           #+#    #+#             */
/*   Updated: 2022/02/16 10:40:38 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest span: " <<sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " <<sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(15000);
		for (int i = 0; i < 15000; i++)
		{
			sp.addNumber(i % 2 ? i : -i);
		}
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longestest span: " << sp.longestSpan() << std::endl;
		Span sp2 = Span(15000);
		std::vector<int>::iterator a = sp.getV().begin();
		std::vector<int>::iterator b = sp.getV().end();
		sp2.addNumber(a, b);
		std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
	}
	{
		Span sp = Span(4);
		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
		}
		catch (std::exception &e)
		{
			std::cout << "Error in add number" << std::endl;
		}
	}
	{
		Span sp = Span(1);
		sp.addNumber(-47545);
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "Error : too few numbers!" << std::endl;
		}
		try
		{
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "Error : too few numbers!" << std::endl;
		}
	}
}