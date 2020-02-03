/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 19:21:34 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/02 19:21:34 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

enum	n_field_name
{
	FIRST_NAME,
	LAST_NAME,
	NICKNAME,
	LOGIN,
	POSTAL_ADDRESS,
	EMAIL_ADDRESS,
	PHONE_NUMBER,
	BIRTHDAY_DATE,
	FAVORITE_MEAL,
	UNDERWEAR_COLOR,
	DARKEST_SECRET,
	N_FIELDS
};

class	Contact
{

public:
	Contact(void);
	~Contact(void);

	std::string			get_fld(int n) const;
	std::string			get_fld_name(int n) const;
	void				add_contact();

private:
	std::string			_fields[N_FIELDS];

	void				set_fld(int n);

};

#endif
