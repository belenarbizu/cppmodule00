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
#include <iomanip>

class   PhoneBook {

private:
    Contact _contacts[8];
    int     index;
    int     is_wrong(int c);
public:
    PhoneBook();
    ~PhoneBook();

    void    add(void);
    void    search(void);
};

#endif
