#pragma once
#include <cstdint>
#include "AWeatherVolume.hpp"
#pragma pack(push, 1)
class AWeatherVolumeSortable : public AWeatherVolume {
public:
    float Priority; // 0x280
    bool bUnbounded; // 0x284
    bool bEnabled; // 0x285
    char pad_286[0x2];
    static AWeatherVolumeSortable* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
