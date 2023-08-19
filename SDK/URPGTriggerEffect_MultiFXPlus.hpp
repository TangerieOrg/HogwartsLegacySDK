#pragma once
#include <cstdint>
#include "FMultiFXPlus.hpp"
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_MultiFXPlus : public URPGTriggerEffect_Base {
public:
    FMultiFXPlus FXData; // 0x40
    FMultiFXPlus ActivateFx; // 0xb0
    FMultiFXPlus DeactivateFX; // 0x120
    char pad_190[0x20];
    static URPGTriggerEffect_MultiFXPlus* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
