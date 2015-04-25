#ifndef __ABSTRACTSTATE_H__
#define __ABSTRACTSTATE_H__

#include "Machine.h"

namespace sm {
    class Machine;
    class AbstractState {
        protected:
            Machine * machine;
        public:
            AbstractState(Machine * _machine);
            virtual void saySomething(void);
    };
} /* sm */

#endif /* __ABSTRACTSTATE_H__ */
