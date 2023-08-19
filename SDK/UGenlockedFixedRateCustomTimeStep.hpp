#pragma once
#include <cstdint>
#include "FFrameRate.hpp"
#include "UGenlockedCustomTimeStep.hpp"
#pragma pack(push, 1)
class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep {
public:
    FFrameRate FrameRate; // 0x28
    char pad_30[0x18];
    static UGenlockedFixedRateCustomTimeStep* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
