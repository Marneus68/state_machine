#include <iostream>

#include "Machine.h"
#include "AbstractState.h"
#include "IdleState.h"
#include "ChangeOnSayState.h"

int main(int argc, const char *argv[])
{
    sm::Machine * m = new sm::Machine();
    m->changeState(new sm::IdleState(m));
    m->saySomething();
    m->changeState(new sm::AbstractState(m));
    m->saySomething();
    m->changeState(new sm::ChangeOnSayState(m));
    m->saySomething();
    m->saySomething();
    return 0;
}
