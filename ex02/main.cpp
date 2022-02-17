/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:14:38 by adidion           #+#    #+#             */
/*   Updated: 2022/02/16 13:59:33 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	{
		std::cout << "---- MSTACK -> INT -----" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		std::cout << "---------------" << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		std::cout << *it << std::endl;
		++it;
		std::cout << *it << std::endl;
		--it;
		std::cout << *it << std::endl << "---------------" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << "---- LIST -> INT -----" << std::endl;
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::cout << "---------------" << std::endl;
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		std::cout << *it << std::endl;
		++it;
		std::cout << *it << std::endl;
		--it;
		std::cout << *it << std::endl << "---------------" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	{
		std::cout << "---- MSTACK -> CHAR -----" << std::endl;
		MutantStack<char> mstack;
		mstack.push('z');
		mstack.push('c');
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push('a');
		mstack.push('x');
		mstack.push('z');
		mstack.push('#');
		std::cout << "---------------" << std::endl;
		MutantStack<char>::iterator it = mstack.begin();
		MutantStack<char>::iterator ite = mstack.end();
		std::cout << *it << std::endl;
		++it;
		std::cout << *it << std::endl;
		--it;
		std::cout << *it << std::endl << "---------------" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<char> s(mstack);
	}
	{
		std::cout << "---- LIST -> CHAR -----" << std::endl;
		std::list<char> mstack;
		mstack.push_back('z');
		mstack.push_back('c');
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back('a');
		mstack.push_back('x');
		mstack.push_back('z');
		mstack.push_back('#');
		std::cout << "---------------" << std::endl;
		std::list<char>::iterator it = mstack.begin();
		std::list<char>::iterator ite = mstack.end();
		std::cout << *it << std::endl;
		++it;
		std::cout << *it << std::endl;
		--it;
		std::cout << *it << std::endl << "---------------" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		return 0;
	}
}