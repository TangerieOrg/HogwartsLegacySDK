#pragma once
#include <cstdint>
#include "EAblNpcReactEventAction.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNpcFeetIkTask : public UAblAbilityTask {
public:
    EAblNpcReactEventAction IkOnTaskStartEvent; // 0x70
    EAblNpcReactEventAction IkOnTaskEndEvent; // 0x71
    char pad_72[0x6];
    static UAblNpcFeetIkTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
