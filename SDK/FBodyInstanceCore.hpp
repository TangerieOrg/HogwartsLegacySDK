#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBodyInstanceCore {
    char pad_0[0x10];
    uint8_t bSimulatePhysics : 1; // 0x10
    uint8_t bOverrideMass : 1; // 0x10
    uint8_t bEnableGravity : 1; // 0x10
    uint8_t bAutoWeld : 1; // 0x10
    uint8_t bStartAwake : 1; // 0x10
    uint8_t bGenerateWakeEvents : 1; // 0x10
    uint8_t bUpdateMassWhenScaleChanges : 1; // 0x10
    uint8_t pad_bitfield_10_7 : 1;
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
