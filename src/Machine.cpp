#include "Machine.h"

#include "IdleState.h"

namespace sm {
    Machine::Machine() {
        state = new IdleState(this);
    }
    
    Machine::Machine(const Machine & _machine) {
        state = _machine.state;
    }

    Machine::~Machine() {
        delete state;
    }

    Machine & Machine::operator=(Machine & _machine) {
        state = _machine.state;
        return *this;
    }

    void Machine::changeState(sm::AbstractState * _state) {
        state = _state;
    }

    void Machine::saySomething(void) {
        state->saySomething();
    }
} /* sm */

