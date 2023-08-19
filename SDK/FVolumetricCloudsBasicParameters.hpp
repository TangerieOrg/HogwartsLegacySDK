#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FVolumetricCloudsBasicParameters {
    float Ambient; // 0x0
    float Light; // 0x4
    float Extinction; // 0x8
    float PowderExtinction; // 0xc
    float PowderStrength; // 0x10
    float FinalOutput; // 0x14
}; // Size: 0x18
#pragma pack(pop)
