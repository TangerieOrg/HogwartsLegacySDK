#pragma once
#include <cstdint>
#include "UFixedFrameRateCustomTimeStep.hpp"
#pragma pack(push, 1)
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep {
public:
    static UGenlockedCustomTimeStep* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
