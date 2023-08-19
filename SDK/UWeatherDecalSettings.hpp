#pragma once
#include <cstdint>
#include "UWeatherDecalModifier.hpp"
#pragma pack(push, 1)
class UWeatherDecalSettings : public UWeatherDecalModifier {
public:
    static UWeatherDecalSettings* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
