#pragma once
#include <cstdint>
#include "UAblCustomEventListenerStartEndTask.hpp"
class URootMotionModifierProperties;
#pragma pack(push, 1)
class UAblRootMotionModifiersEventListenerTask : public UAblCustomEventListenerStartEndTask {
public:
    TArray<URootMotionModifierProperties*> RootMotionModifiers; // 0x80
    static UAblRootMotionModifiersEventListenerTask* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
