#pragma once
#include <cstdint>
#include "USkinFXEventTriggerFilteredWithDistance.hpp"
class UMultiFX2_Base;
#pragma pack(push, 1)
class USkinFXEventTriggerFilteredMultiFX2 : public USkinFXEventTriggerFilteredWithDistance {
public:
    UMultiFX2_Base* FX; // 0x38
    FName AttachPointName; // 0x40
    static USkinFXEventTriggerFilteredMultiFX2* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
