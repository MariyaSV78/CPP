/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 02:06:47 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 02:06:50 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    {
        std::cout << "--INT--" << std::endl;

        Array   <int>array;
        Array   <int>array_1(5);
    
        for(int i = 0; i < array_1.size(); i++){
            array_1[i] = i;
        }


        std::cout << std::endl;
        std::cout << array << " with size: "<< array.size() << std::endl;
        std::cout << array_1 << " with size: "<< array_1.size() << std::endl;

        Array   <int>array_2 = array_1;
        std::cout << array_2 << " with size: "<< array_2.size() << std::endl; 
        
        array = array_2;
        std::cout << array << " with size: "<< array.size() << std::endl; 

        try {std::cout << array[3] << std::endl;}
        catch (std::exception & e) {std::cout << e.what() << std::endl;}
        try {std::cout << array[-1] << std::endl;}
        catch (std::exception & e) {std::cout << e.what() << std::endl;}
        try {std::cout << array[20] << std::endl;}
        catch (std::exception & e) {std::cout << e.what() << std::endl;}
        std::cout << std::endl;
        std::cout << std::endl;
    }
    
    
    {
        std::cout << "--DOUBLE--" << std::endl;
        Array   <double>array;
        Array   <double>array_1(10);
    
        for(int i = 0; i < array_1.size(); i++)
            array_1[i] = i*0.764;
        
        std::cout << array << " with size: "<< array.size() << std::endl;
        std::cout << array_1 << " with size: "<< array_1.size() << std::endl;

        Array   <double>array_2 = array_1;
        std::cout << array_2 << " with size: "<< array_2.size() << std::endl; 
        
        array = array_2;
        std::cout << array << " with size: "<< array.size() << std::endl; 

        try {std::cout << array[3] << std::endl;}
        catch (std::exception & e) {std::cout << e.what() << std::endl;}
        try {std::cout << array[-1] << std::endl;}
        catch (std::exception & e) {std::cout << e.what() << std::endl;}
        try {std::cout << array[20] << std::endl;}
        catch (std::exception & e) {std::cout << e.what() << std::endl;}
        std::cout << std::endl;
    }

    {
        std::cout << "--CHAR--" << std::endl;
        Array   <char>array;
        Array   <char>array_1(10);
    
        for(int i = 0; i < array_1.size(); i++)
            array_1[i] = i + 97;
        
        std::cout << array << " with size: "<< array.size() << std::endl;
        std::cout << array_1 << " with size: "<< array_1.size() << std::endl;

        Array   <char>array_2 = array_1;
        std::cout << array_2 << " with size: "<< array_2.size() << std::endl; 
        
        array = array_2;
        std::cout << array << " with size: "<< array.size() << std::endl; 

        try {std::cout << array[3] << std::endl;}
        catch (std::exception & e) {std::cout << e.what() << std::endl;}
        try {std::cout << array[-1] << std::endl;}
        catch (std::exception & e) {std::cout << e.what() << std::endl;}
        try {std::cout << array[20] << std::endl;}
        catch (std::exception & e) {std::cout << e.what() << std::endl;}
        std::cout << std::endl;
    }
    return 0;
}
