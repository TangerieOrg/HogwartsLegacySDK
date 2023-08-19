#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_GenerateFocus : public URPGTriggerEffect_Base {
public:
    float FocusAmount; // 0x40
    bool AmountIsFullFocusBars; // 0x44
    char pad_45[0x3];
    static URPGTriggerEffect_GenerateFocus* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
