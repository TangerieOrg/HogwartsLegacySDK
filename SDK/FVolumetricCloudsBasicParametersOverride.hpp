#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FVolumetricCloudsBasicParametersOverride {
    uint8_t bOverride_Ambient : 1; // 0x0
    uint8_t bOverride_Light : 1; // 0x0
    uint8_t bOverride_Extinction : 1; // 0x0
    uint8_t bOverride_PowderExtinction : 1; // 0x0
    uint8_t bOverride_PowderStrength : 1; // 0x0
    uint8_t bOverride_FinalOutput : 1; // 0x0
    uint8_t pad_bitfield_0_6 : 2;
    char pad_1[0x3];
    float Ambient; // 0x4
    float Light; // 0x8
    float PowderExtinction; // 0xc
    float FinalOutput; // 0x10
}; // Size: 0x14
#pragma pack(pop)
