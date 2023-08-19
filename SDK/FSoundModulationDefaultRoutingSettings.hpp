#pragma once
#include <cstdint>
#include "EModulationRouting.hpp"
#include "FSoundModulationDefaultSettings.hpp"
#pragma pack(push, 1)
struct FSoundModulationDefaultRoutingSettings : public FSoundModulationDefaultSettings {
    EModulationRouting VolumeRouting; // 0x40
    EModulationRouting PitchRouting; // 0x41
    EModulationRouting HighpassRouting; // 0x42
    EModulationRouting LowpassRouting; // 0x43
    char pad_44[0x4];
}; // Size: 0x48
#pragma pack(pop)
