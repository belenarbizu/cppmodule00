/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:11:18 by barbizu-          #+#    #+#             */
/*   Updated: 2023/01/30 13:11:19 by barbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class   Contact {

private:
	std::string _fname;
    	std::string _lname;
    	std::string _nname;
    	std::string _phone;
    	std::string _secret;
public:
	Contact();
    	~Contact();

    	std::string Contact::get_fname();
    	std::string Contact::get_lname();
    	std::string Contact::get_nname();
    	std::string Contact::get_phone();
    	std::string Contact::get_secret();

    	void    set_fname(std::string fname);
    	void    set_lname(std::string lname);
    	void    set_nname(std::string nname);
    	void    set_phone(std::string phone);
    	void    set_secret(std::string secret);
};

#endif
