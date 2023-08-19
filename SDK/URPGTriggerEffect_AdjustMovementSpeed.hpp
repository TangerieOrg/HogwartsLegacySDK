#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_AdjustMovementSpeed : public URPGTriggerEffect_Base {
public:
    float MovementSpeedScale; // 0x40
    float Duration; // 0x44
    static URPGTriggerEffect_AdjustMovementSpeed* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
