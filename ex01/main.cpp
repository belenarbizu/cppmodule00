/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:11:07 by barbizu-          #+#    #+#             */
/*   Updated: 2023/02/06 13:11:09 by barbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook   pb;
    std::string str;

    std::cout << "Enter a new command: ";
    std::getline(std::cin, str);
    while (str != "EXIT")
    {
        if (str == "ADD")
            pb.add();
        else if (str == "SEARCH")
            pb.search();
        else
            std::cout << "Command not found" << std::endl;
	std::cout << "Enter a new command: ";
	std::cin >> str;
    }
    return (0);
}
