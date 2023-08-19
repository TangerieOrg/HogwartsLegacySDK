#pragma once
#include <cstdint>
#include "UEngineCustomTimeStep.hpp"
#pragma pack(push, 1)
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep {
public:
    static UFixedFrameRateCustomTimeStep* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
