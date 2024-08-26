/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:01:30 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/25 18:00:48 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

using std::fstream;

std::string ft_replace(std::string line, const std::string &to_replace, const std::string &replace_with)
{
    size_t  start = 0;

    while ((start = line.find(to_replace, start)) != std::string::npos && to_replace != replace_with)
    {
        line.erase(start, to_replace.length());
        line.insert(start, replace_with);
        start += replace_with.length();
    }
    return (line);
}

int check_chars(std::string to_replace, std::string replace_with)
{
    if (to_replace.empty())
    {
        std::cout << "str to replace cant be empty" << std::endl;
        return (1);
    }
    if (replace_with.empty())
    {
        std::cout << "str replace with cant be empty" << std::endl;
        return (1);
    }
    return (0);
}

int main(int ac, char **av)
{
    std::string line;
    fstream     f_in(av[1], fstream::in);

    if (ac != 4)
    {
        std::cout << "Needs 3 arguments 'file to read' 'str to replace' 'str to replace with'" << std::endl;
        return (1);
    }
    if (f_in.is_open())
    {
        if (check_chars(av[2], av[3]))
        {
            f_in.close();
            return (1);
        }
        std::string f_name(av[1]);
        fstream f_out(f_name + ".replace", fstream::out);
        if (!f_out)
        {
            std::cout << "unable to open out file" << std::endl;
            f_in.close();
            return (1);
        }
        while (std::getline(f_in, line))
        {
            f_out << ft_replace(line, av[2], av[3]);
            f_out << std::endl;
        }
        f_out.close();
        f_in.close();
    }
    else
    {
        std::cout << "cannot open infile" << std::endl;
        return (1);
    }
    return (0);
}
