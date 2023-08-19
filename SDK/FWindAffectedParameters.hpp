#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FWindAffectedParameters {
    FName WindDirectionParameter; // 0x0
    FName WindSpeedParameter; // 0x8
    FName WindVelocityParameter; // 0x10
    FName InsideParameter; // 0x18
    uint8_t bSet_WindDirectionParameter : 1; // 0x20
    uint8_t bSet_WindSpeedParameter : 1; // 0x20
    uint8_t bSet_WindVelocityParameter : 1; // 0x20
    uint8_t bSet_InsideParameter : 1; // 0x20
    uint8_t pad_bitfield_20_4 : 4;
    char pad_21[0x3];
}; // Size: 0x24
#pragma pack(pop)
