/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:44:59 by tmichel-          #+#    #+#             */
/*   Updated: 2023/07/21 12:25:22 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact		contacts[8];

	int	read_index(void) const;

public:
	PhoneBook();
	~PhoneBook();
	void	display_notice(void) const;
	void	add_contact(void);
	void	display_all(void);
	void	search_cmd(void) const;
};

#endif