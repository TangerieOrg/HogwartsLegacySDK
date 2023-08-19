#pragma once
#include <cstdint>
#include "ELightOnOffFXTargetMode.hpp"
#include "ELightOnOffFXTargetType.hpp"
#pragma pack(push, 1)
struct FLightGroupBoundComponentSettings {
    FName FXName; // 0x0
    ELightOnOffFXTargetType FXType; // 0x8
    ELightOnOffFXTargetMode FXMode; // 0x9
    uint8_t bInvertOnOff : 1; // 0xa
    uint8_t bPropagateToChildren : 1; // 0xa
    uint8_t pad_bitfield_a_2 : 6;
    char pad_b[0x1];
}; // Size: 0xc
#pragma pack(pop)
