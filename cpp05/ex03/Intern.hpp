#pragma once

#include "Bureaucrat.hpp"

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


class Intern
{
private:
    /* data */
public:
    Intern(/* args */);
    ~Intern();
    Form* makeForm(std::string name, std::string target);
};

