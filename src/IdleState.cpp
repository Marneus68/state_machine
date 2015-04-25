#include "IdleState.h"

#include <iostream>

namespace sm {
    IdleState::IdleState(Machine * _machine) : AbstractState(_machine) {}

    void IdleState::saySomething(void) {
        std::cout << "SOMETHING! from IdleState" << std::endl; 
    }
} /* sm */
