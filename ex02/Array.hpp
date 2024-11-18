/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:38:20 by belguabd          #+#    #+#             */
/*   Updated: 2024/11/18 13:57:17 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

class Array
{
private:
    T* data;
    size_t length;

public:
    Array() : data(NULL), length(0) {}

    Array(unsigned int n) : length(n)
    {
        if (length)
        {
            data = new T[length];
            for (size_t i = 0; i < length; i++)
            {
                data[i] = T();
            }
        }
    }
    Array(const Array<T> &other) : length(other.length)
    {
        data = new T[length];
        for (size_t i = 0; i < length; i++)
        {
            data[i] = other.data[i];
        }
    }

    Array<T> &operator=(const Array<T> &other)
    {
        if (this != &other)
        {
            delete[] data;
            data = new T[other.length];
            for (size_t i = 0; i < length; i++)
            {
                data[i] = other.data[i];
            }
        }
        return (*this);
    }
    size_t size() { return this->length; }

    T& operator[](size_t index)
    {
        if (index >= length)
            throw (std::exception());
        return data[index];
    }
    const T &operator[](size_t index) const
    {
        if (index >= length)
            throw (std::exception());
        return data[index];
    }
    ~Array()
    {
        delete[] data;
    }
};
