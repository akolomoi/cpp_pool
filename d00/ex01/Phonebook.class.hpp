/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 19:17:48 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/02 19:18:21 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "./Contact.class.hpp"

# define MAX_CONTACTS 8

class Phonebook
{

public:
	Phonebook();
	~Phonebook();

	void		add_contact();
	int			display_contacts() const;
	void		display_contact_param(int param) const;

private:
	int			_n_contacts;
	Contact		_contacts[MAX_CONTACTS];

	void		display_contact_data(int n) const;
	void		print_contact_header() const;
	std::string	normalize_str(std::string str) const;
};

#endif