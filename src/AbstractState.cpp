#include "AbstractState.h"

#include <iostream>

namespace sm {
    AbstractState::AbstractState(Machine * _machine) {
        machine = _machine;
    }
    
    void AbstractState::saySomething(void) {
        std::cout << "SOMETHING! from AbstractState" << std::endl; 
    }
} /* sm */

