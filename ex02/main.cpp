/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:52:51 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/25 14:54:31 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Address of the string: " << &str << std::endl;
    std::cout << "Address of the string using pointer: " << stringPTR << std::endl;
    std::cout << "Address of the string using reference: " << &stringREF << std::endl;
    std::cout << "value of str: " << str << std::endl;
    std::cout << "value of str using pointer: " << *stringPTR << std::endl;
    std::cout << "value of str using reference: " << stringREF << std::endl;
    return 0;
}
