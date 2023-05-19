/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:44:41 by sleon             #+#    #+#             */
/*   Updated: 2023/05/15 15:00:29 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Random Bureaucrat"), _grade(150){
	std::cout<<"Random Bureaucrat consructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name),  _grade(grade){
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout<<this->_name<<" consructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &toCopy){
	if (this != &toCopy)
		*this = toCopy;
	std::cout<<"Copy Bureaucrat consructor called"<<std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout<<this->_name<<" destructor called"<<std::endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat &toCopy){
	this->_grade = toCopy._grade;
	std::cout<<"operator = called"<<std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat &crat)
{
	o << crat.getName() << ", bureaucrat of grade " << crat.getGrade() << ".";
	return(o);
}

std::string const	Bureaucrat::getName(){
	return (_name);
}

int	Bureaucrat::getGrade(){
	return (_grade);
}

int	Bureaucrat::checkGrade(){
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
	return(0);
}

void	Bureaucrat::IncrementGrade(){
	if (_grade > 1)
		_grade--;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::DecrementGrade(){
	if (_grade < 150)
		_grade++;
	else
		throw GradeTooLowException();
}

void	Bureaucrat::SignForm(Form &form){
{
	try
	{
		form.beSigned(*this);
		std::cout<<this->_name<<" signed "<<form.getName()<<std::endl;
	}
	catch (std::exception const & e)
	{
		std::cout<<this->_name<<" couldn't sign "<<form.getName();
		std::cout<<" because "<<e.what()<<std::endl;
	}
	return ;
}

}
