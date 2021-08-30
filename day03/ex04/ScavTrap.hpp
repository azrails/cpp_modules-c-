#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &scavtrap);
    ScavTrap &operator=(ScavTrap const &scavtrap);
    ~ScavTrap();

    void challengeNewcomer(std::string const &target);
};

#endif