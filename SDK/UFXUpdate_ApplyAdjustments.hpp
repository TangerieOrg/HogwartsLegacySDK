#pragma once
#include <cstdint>
#include "UFXUpdate_Tick.hpp"
class UFXAdjustments;
#pragma pack(push, 1)
class UFXUpdate_ApplyAdjustments : public UFXUpdate_Tick {
public:
    bool bUseFXAsSource; // 0x80
    char pad_81[0x7];
    TArray<UFXAdjustments*> Adjustments; // 0x88
    bool bDeactivateIfAdjustmentsFail; // 0x98
    char pad_99[0x7];
    static UFXUpdate_ApplyAdjustments* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
