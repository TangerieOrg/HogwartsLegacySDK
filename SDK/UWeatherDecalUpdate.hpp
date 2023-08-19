#pragma once
#include <cstdint>
#include "UWeatherDecalModifier.hpp"
#pragma pack(push, 1)
class UWeatherDecalUpdate : public UWeatherDecalModifier {
public:
    static UWeatherDecalUpdate* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
