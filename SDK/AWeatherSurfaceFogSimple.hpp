#pragma once
#include <cstdint>
#include "AWeatherSurfaceFogBase.hpp"
#pragma pack(push, 1)
class AWeatherSurfaceFogSimple : public AWeatherSurfaceFogBase {
public:
    static AWeatherSurfaceFogSimple* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
