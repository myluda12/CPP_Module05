

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Form* Intern::makeForm(std::string name, std::string target)
{
    Form* objects[3] = {
        new ShrubberyCreationForm(target),
        new PresidentialPardonForm(target),
        new RobotomyRequestForm(target)
    };
    
    std::string names[3] = {
        std::string("ShrubberyCreationForm"),
        std::string("PresidentialPardonForm"),
        std::string("RobotomyRequestForm")
    };

    for (int i = 0; i < 3; i++)
    {
        if (names[i] == name)
            return objects[i];
    }
    return NULL;
}
