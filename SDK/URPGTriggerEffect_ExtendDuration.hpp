#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_ExtendDuration : public URPGTriggerEffect_Base {
public:
    float ExtendedTime; // 0x40
    char pad_44[0x4];
    static URPGTriggerEffect_ExtendDuration* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
