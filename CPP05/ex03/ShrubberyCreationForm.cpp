/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:09:28 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/25 17:11:04 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string str) : Form(str, 145, 137)
{
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	if (getGrade_Exec() < executor.getGrade())
		throw Form::GradeTooLowException();
	if (this->get_signed() == false)
		throw Form::NoSignException();
    
    this->executeAction();
}

void ShrubberyCreationForm::executeAction(void)
{
    std::string test = this->getName()+"_shrubbery" ;
    std::ofstream newfile( test.c_str() );
    newfile <<"              * *    "<<std::endl;
    newfile <<"           *    *  *"<<std::endl;
    newfile <<"      *  *    *     *  *"<<std::endl;
    newfile <<"     *     *    *  *    *"<<std::endl;
    newfile <<" * *   *    *    *    *   *"<<std::endl;
    newfile <<" *     *  *    * * .#  *   *"<<std::endl;
    newfile <<" *   *     * #.  .# *   *"<<std::endl;
    newfile <<"  *     \"#.  #: #\" * *    *"<<std::endl;
    newfile <<" *   * * \"#. ##\"       *"<<std::endl;
    newfile <<"   *       \"###"<<std::endl;
    newfile <<"             \"##"<<std::endl;
    newfile <<"             ##."<<std::endl;
    newfile <<"              .##:"<<std::endl;
    newfile <<"              :###"<<std::endl;
    newfile <<"              ;###"<<std::endl;
    newfile <<"            ,####."<<std::endl;
    newfile <<"___________.######._________"<<std::endl;
	newfile.close();
    std::cout << "File -> "<< test << " created sucessfully check the directory" << std::endl;	
}
