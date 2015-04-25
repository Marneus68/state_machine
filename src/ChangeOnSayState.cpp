#include "ChangeOnSayState.h"

#include "IdleState.h"

#include <iostream>

namespace sm {
    ChangeOnSayState::ChangeOnSayState(Machine * _machine) : AbstractState(_machine) {}

    void ChangeOnSayState::saySomething(void) {
        std::cout << "SOMETHING! from ChangeOnSayState" << std::endl;
        machine->changeState(new IdleState(machine));
    }
} /* sm */
