/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:25:42 by sleon             #+#    #+#             */
/*   Updated: 2023/05/19 12:32:15 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int	const			_gradeSign;
		int	const			_gradeExec;
	public:

	Form();
	Form(std::string name, int toSign, int toExec);
	Form(Form &toCopy);
	~Form();

	Form	&operator=(Form &toCopy);

	void				beSigned(Bureaucrat& crat);
	std::string const	&getName() const;
	int const			&getSignGrade()const;
	int const			&getExecGrade()const;
	bool				getSigned() const;




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
				return ("The form has already been signed");
			}
		};
};

std::ostream&	operator<<(std::ostream& o, Form &crat);


#endif
