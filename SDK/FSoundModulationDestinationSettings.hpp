#pragma once
#include <cstdint>
class USoundModulatorBase;
#pragma pack(push, 1)
struct FSoundModulationDestinationSettings {
    float Value; // 0x0
    char pad_4[0x4];
    USoundModulatorBase* Modulator; // 0x8
}; // Size: 0x10
#pragma pack(pop)
