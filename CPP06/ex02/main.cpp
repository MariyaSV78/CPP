/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 02:01:25 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 02:01:28 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    Base* base = generate();
    std::cout << "IDENTIFY BASE PTR" << std::endl;
    identify_ptr(base);
    std::cout << "IDENTIFY BASE REF" << std::endl;
    identify_ref(*base);
    delete base;
    return 0;
}
