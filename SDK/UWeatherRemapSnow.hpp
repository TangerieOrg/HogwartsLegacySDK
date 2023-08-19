#pragma once
#include <cstdint>
#include "UWeatherRemapBase.hpp"
#pragma pack(push, 1)
class UWeatherRemapSnow : public UWeatherRemapBase {
public:
    static UWeatherRemapSnow* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
