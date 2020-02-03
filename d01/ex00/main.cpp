/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 17:57:49 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/03 17:57:50 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Pony.hpp"

void	ponyOnTheHeap(Pony *heap_pony)
{
	Pony	*heap = new Pony("heap");

	heap_pony->Eat(15);
	heap_pony->Grow();
	heap_pony->Hit(25);
	heap_pony->Eat(35);
	heap_pony->Grow();
	heap_pony->Hit(51);
	heap_pony->Eat(55);
	heap_pony->Grow();
	heap_pony->Hit(10);
	heap_pony->Grow();
	delete(heap);
}

void	ponyOnTheStack(Pony stack_pony)
{
	Pony	stack = Pony("stack");

	stack_pony.Eat(15);
	stack_pony.Grow();
	stack_pony.Hit(25);
	stack_pony.Eat(35);
	stack_pony.Grow();
	stack_pony.Hit(51);
	stack_pony.Eat(55);
	stack_pony.Grow();
	stack_pony.Hit(10);
	stack_pony.Grow();

	stack_pony.Hit(999);
}

int			main()
{
	Pony	stack = Pony("obama");
	Pony	*heap = new Pony("cool dude");

	std::cout << std::endl;
	ponyOnTheStack(stack);
	std::cout << std::endl;
	ponyOnTheHeap(heap);
	std::cout << std::endl;

	heap->Eat(10);
	heap->Grow();
	heap->Grow();
	heap->Eat(10);
	std::cout << std::endl;
	delete (heap);
	std::cout << std::endl;

	stack.Eat(10);
	stack.Grow();
	stack.Grow();
	stack.Eat(10);
	std::cout << std::endl;

	return (0);
}
