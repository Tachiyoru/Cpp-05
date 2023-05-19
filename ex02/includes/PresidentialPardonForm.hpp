/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:18:54 by sleon             #+#    #+#             */
/*   Updated: 2023/05/19 13:48:30 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string	_target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(PresidentialPardonForm &toCopy);
	~PresidentialPardonForm();

	PresidentialPardonForm	&operator=(PresidentialPardonForm &toCopy);

	void	execute(Bureaucrat &executor);

};

#endif
