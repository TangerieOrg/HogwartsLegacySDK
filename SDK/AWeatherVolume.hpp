#pragma once
#include <cstdint>
#include "AVolume.hpp"
#pragma pack(push, 1)
class AWeatherVolume : public AVolume {
public:
    static AWeatherVolume* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
