#pragma once
#include <cstdint>
#include "ERootMotionModifierOrder.hpp"
#include "UObject.hpp"
class URootMotionModifierProperties;
class AActor;
#pragma pack(push, 1)
class URootMotionModifier : public UObject {
public:
    URootMotionModifierProperties* RootMotionModifierProperties; // 0x28
    AActor* Instigator; // 0x30
    ERootMotionModifierOrder RootMotionModifierOrder; // 0x38
    char pad_39[0x3];
    float Duration; // 0x3c
    char pad_40[0x10];
    static URootMotionModifier* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
