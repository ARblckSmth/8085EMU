#include "RegisterSet.h"

RegisterSet* RegisterSet::Instance()
{
    static RegisterSet* instance = new RegisterSet();
    return instance;
}