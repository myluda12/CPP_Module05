
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{    
    try 
    {
        Bureaucrat b("B", 1);
        Intern wld13;
        Form *f;

        f = wld13.makeForm("robotomy request", "Bender");
        if (f)
        {
            f->beSigned(b);
            f->execute(b);
        }
    }
    catch (std::exception & e)
    {
        std::cout<< e.what() <<std::endl;
    }

    return 0;
}
