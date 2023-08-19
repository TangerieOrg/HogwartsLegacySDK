#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FInteriorSettings {
    bool bIsWorldSettings; // 0x0
    char pad_1[0x3];
    float ExteriorVolume; // 0x4
    float ExteriorTime; // 0x8
    float ExteriorLPF; // 0xc
    float ExteriorLPFTime; // 0x10
    float InteriorVolume; // 0x14
    float InteriorTime; // 0x18
    float InteriorLPF; // 0x1c
    float InteriorLPFTime; // 0x20
}; // Size: 0x24
#pragma pack(pop)
