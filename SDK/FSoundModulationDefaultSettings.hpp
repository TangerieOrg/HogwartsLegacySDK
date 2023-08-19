#pragma once
#include <cstdint>
#include "FSoundModulationDestinationSettings.hpp"
#pragma pack(push, 1)
struct FSoundModulationDefaultSettings {
    FSoundModulationDestinationSettings VolumeModulationDestination; // 0x0
    FSoundModulationDestinationSettings PitchModulationDestination; // 0x10
    FSoundModulationDestinationSettings HighpassModulationDestination; // 0x20
    FSoundModulationDestinationSettings LowpassModulationDestination; // 0x30
}; // Size: 0x40
#pragma pack(pop)
