/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:10:43 by barbizu-          #+#    #+#             */
/*   Updated: 2023/01/30 13:10:46 by barbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>

class   PhoneBook {

private:
    Contact _contacts[8];
    int     index;
public:
    Phonebook();
    ~PhoneBook();

    void    add(std::string str);
    void    search();
};

#endif
