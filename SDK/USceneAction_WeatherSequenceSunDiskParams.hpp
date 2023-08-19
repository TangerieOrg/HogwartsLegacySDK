#pragma once
#include <cstdint>
#include "FSunDiskOverrides.hpp"
#include "USceneAction_WeatherSequenceSunDisk.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceSunDiskParams : public USceneAction_WeatherSequenceSunDisk {
public:
    FSunDiskOverrides SunDisk; // 0x88
    char pad_9c[0x4];
    static USceneAction_WeatherSequenceSunDiskParams* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
