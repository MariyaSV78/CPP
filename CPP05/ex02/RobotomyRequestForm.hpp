/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:48:58 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:49:00 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>

# include "Form.hpp"

class	Bureaucrat;
class	Form;

class RobotomyRequestForm: public Form
{
    private:
        std::string     _target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const& ClassCopy);
        virtual ~RobotomyRequestForm();

        RobotomyRequestForm& operator=(RobotomyRequestForm const& rhs);

        virtual void    execute(Bureaucrat const& executor) const;
};

#endif
