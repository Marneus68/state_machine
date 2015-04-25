#ifndef __MACHINE_H__
#define __MACHINE_H__

#include "AbstractState.h"

namespace sm {
    class AbstractState;
    class Machine {
        protected:
            AbstractState * state;
        public:
            Machine ();
            Machine (const Machine & _machine);
            virtual ~Machine ();

            Machine &operator=(Machine & _machine);

            void changeState(AbstractState * _state);
            void saySomething(void);
    };
} /* sm */

#endif /* __MACHINE_H__ */
