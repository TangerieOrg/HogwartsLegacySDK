#pragma once
#include <cstdint>
#include "FModulatorContinuousParams.hpp"
#include "USoundNode.hpp"
#pragma pack(push, 1)
class USoundNodeModulatorContinuous : public USoundNode {
public:
    FModulatorContinuousParams PitchModulationParams; // 0x48
    FModulatorContinuousParams VolumeModulationParams; // 0x68
    static USoundNodeModulatorContinuous* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
