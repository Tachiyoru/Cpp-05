/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:25:42 by sleon             #+#    #+#             */
/*   Updated: 2023/05/19 12:45:00 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const	_name;
		bool				_signed;
		int	const			_gradeSign;
		int	const			_gradeExec;
	public:

	AForm();
	AForm(std::string name, int toSign, int toExec);
	AForm(AForm &toCopy);
	~AForm();

	AForm	&operator=(AForm &toCopy);

	void				beSigned(Bureaucrat& crat);
	std::string const	&getName() const;
	int const			&getSignGrade()const;
	int const			&getExecGrade()const;
	bool				getSigned() const;

	virtual	void	execute(Bureaucrat &crat) = 0;

	public:
		class GradeTooHighException : public std::exception
		{
			public:
			virtual const char* what() const throw(){
				return ("The grade set is too high");
			}
		};

		class GradeTooLowException : public std::exception
		{
			public:
			virtual const char* what() const throw(){
				return ("The grade set is too low");
			}
		};

		class AlreadySignedExecption : public std::exception
		{
			public:
			virtual const char* what() const throw(){
				return ("The Aform has already been signed");
			}
		};
};

std::ostream&	operator<<(std::ostream& o, AForm &crat);


#endif
