/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:25:02 by sleon             #+#    #+#             */
/*   Updated: 2023/05/19 12:47:28 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

Form::Form() : _name("Random form"), _signed(false), _gradeSign(50), _gradeExec (75){
	std::cout<<"Form default constructor called"<<std::endl;
}

Form::Form(std::string name, int toSign, int toExec) :
_name(name), _signed(false), _gradeSign(toSign), _gradeExec (toExec){
	if (this->_gradeSign < 1 || this->_gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw Form::GradeTooLowException();
	std::cout<<"Form constructor called"<<std::endl;
}

Form::Form(Form &toCopy) : _name(toCopy._name), _signed(false), _gradeSign(toCopy._gradeSign), _gradeExec(toCopy._gradeExec) {
	std::cout<<"Copy Form consructor called"<<std::endl;
}

Form::~Form(){
}

Form	&Form::operator=(Form &toCopy){
	(void)toCopy;
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, Form &form)
{
	o << form.getName() << ", Form of grade " << form.getSignGrade() << " to be signed and ";
	o << form.getExecGrade() << " to be executed " << std::endl;
	if (form.getSigned())
		o<<"The form is signed"<<std::endl;
	else
		o<<"The form isn't signed"<<std::endl;
	return(o);
}

void	Form::beSigned(Bureaucrat& crat)
{
	if (this->_signed == true)
		throw Form::AlreadySignedExecption();
	else if (crat.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
	return ;
}

const std::string&	Form::getName() const
{
	return(this->_name);
}

const int&	Form::getSignGrade() const
{
	return(this->_gradeSign);
}

const int&	Form::getExecGrade() const
{
	return(this->_gradeExec);
}

bool	Form::getSigned() const
{
	return(this->_signed);
}
