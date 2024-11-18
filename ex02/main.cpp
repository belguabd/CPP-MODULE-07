/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:22:58 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/18 14:02:19 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
        Array<int> arr(10);
        arr[11] = 42; // Modify the first element
        std::cout << arr[0] << "\n"
                  << "the size is " << arr.size() << std::endl; // Access and print the first element
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}