#ifndef __IDLESTATE_H__
#define __IDLESTATE_H__

#include "AbstractState.h"

namespace sm {
    class IdleState : public AbstractState {
        public:
            IdleState(Machine * _machine);
            virtual void saySomething(void);
    };
} /* sm */

#endif /* __IDLESTATE_H__ */
