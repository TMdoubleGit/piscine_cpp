/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:22:54 by tmichel-          #+#    #+#             */
/*   Updated: 2023/07/21 16:12:10 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <limits>

class	Contact
{
private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkestsecret;
	int			index;
	
	std::string get_data(std::string str) const;
	std::string max_len(std::string str) const;

public:
	Contact();
	~Contact();
	void	fill_data(void);
	void    get_index(int index) ;
	void    clean_data(int index);
	void    print_contact(int index) const;
};

#endif