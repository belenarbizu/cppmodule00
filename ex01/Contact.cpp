/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:11:11 by barbizu-          #+#    #+#             */
/*   Updated: 2023/01/30 13:11:13 by barbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

std::string Contact::get_fname()
{
    return (this->_fname);
}

std::string Contact::get_lname()
{
    return (this->_lname);
}

std::string Contact::get_nname()
{
    return (this->_nname);
}

std::string Contact::get_phone()
{
    return (this->_phone);
}

std::string Contact::get_secret()
{
    return (this->_secret);
}

