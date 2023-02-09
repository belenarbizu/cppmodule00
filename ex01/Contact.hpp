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

	std::string get_fname();
	std::string get_lname();
	std::string get_nname();
	std::string get_phone();
	std::string get_secret();

	void    set_fname(std::string fname);
	void    set_lname(std::string lname);
	void    set_nname(std::string nname);
	void    set_phone(std::string phone);
	void    set_secret(std::string secret);
};

#endif
