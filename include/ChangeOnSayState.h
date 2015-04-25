#ifndef __CHANGEONSAYSTATE_H__
#define __CHANGEONSAYSTATE_H__

#include "AbstractState.h"

namespace sm {
    class ChangeOnSayState : public AbstractState {
        public:
            ChangeOnSayState(Machine * _machine);
            virtual void saySomething(void);
    };
} /* sm */

#endif /* __CHANGEONSAYSTATE_H__ */
