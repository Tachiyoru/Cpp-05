/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:44:44 by sleon             #+#    #+#             */
/*   Updated: 2023/05/15 15:00:02 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat &toCopy);
		~Bureaucrat();

		Bureaucrat	operator=(Bureaucrat &toCopy);

		std::string const	getName();
		int					getGrade();
		void				setName(std::string const name);
		int					checkGrade();
		void				IncrementGrade();
		void				DecrementGrade();

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
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat &crat);

#endif
