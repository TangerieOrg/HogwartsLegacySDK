#pragma once
#include <cstdint>
#include "UWeatherDecalUpdate.hpp"
#pragma pack(push, 1)
class UWeatherDecalUpdateSingleParameter : public UWeatherDecalUpdate {
public:
    FName Parameter; // 0x28
    static UWeatherDecalUpdateSingleParameter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
