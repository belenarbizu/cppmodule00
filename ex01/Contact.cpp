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
#include "Contact.hpp"

Contact::Contact()
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

void    Contact::set_fname(std::string fname)
{
    this->_fname = fname;
}

void    Contact::set_lname(std::string lname)
{
    this->_lname = lname;
}

void    Contact::set_nname(std::string nname)
{
    this->_nname = nname;
}

void    Contact::set_phone(std::string phone)
{
    this->_phone = phone;
}

void    Contact::set_secret(std::string secret)
{
    this->_secret = secret;
}
