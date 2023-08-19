#pragma once
#include <cstdint>
#include "ERootMotionModifierOrder.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties : public UObject {
public:
    ERootMotionModifierOrder RootMotionModifierOrder; // 0x28
    char pad_29[0x7];
    static URootMotionModifierProperties* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
