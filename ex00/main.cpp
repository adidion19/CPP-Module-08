/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:29:20 by adidion           #+#    #+#             */
/*   Updated: 2022/02/15 15:48:35 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	{
		std::cout << "------------- ARRAY ---------------" << std::endl;
		std::array<int, 5> a;
		for (int i = 0 ; i < 5 ; i++)
		{
			a[i] = i;
			std::cout << a[i] << std::endl;
		}
		try
		{
			std::cout << easyfind(a, 67) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Element not found" << std::endl;
		}
		try
		{
			std::cout << easyfind(a, 1) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Element not found" << std::endl;
		}
	}
	{
		std::cout << "------------- VECTORS ---------------" << std::endl;
		std::vector<int> a;
		for (int i = 0 ; i < 5 ; i++)
		{
			a.push_back(i);
			std::cout << a[i] << std::endl;
		}
		try
		{
			std::cout << easyfind(a, 67) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Element not found" << std::endl;
		}
		try
		{
			std::cout << easyfind(a, 1) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Element not found" << std::endl;
		}
	}
	{
		std::cout << "------------- LIST ---------------" << std::endl;
		std::list<int> a;
		std::list<int>::iterator it;
		for (int i = 0; i < 5; ++i)
		{
			a.push_back(i);
		}
		for (it = a.begin() ; it != a.end(); ++it)
		{
			std::cout << *it << std::endl;
		}
		try
		{
			std::cout << easyfind(a, 67) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Element not found" << std::endl;
		}
		try
		{
			std::cout << easyfind(a, 1) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Element not found" << std::endl;
		}
	}
}