/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:24:50 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/17 18:21:15 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void fun(int a)
{
    std::cout << a ;
}




int main()
{
    
    int arr_i[] = {1, 2, 3, 4};
    size_t size_i = sizeof(arr_i) / sizeof(int);
    ::iter(arr_i, size_i, fun);
}