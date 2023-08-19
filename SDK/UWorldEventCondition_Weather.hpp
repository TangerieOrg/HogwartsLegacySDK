#pragma once
#include <cstdint>
#include "FWeatherDefinitionName.hpp"
#include "UWorldEventCondition.hpp"
#pragma pack(push, 1)
class UWorldEventCondition_Weather : public UWorldEventCondition {
public:
    TArray<FWeatherDefinitionName> WeatherToCheck; // 0x38
    static UWorldEventCondition_Weather* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
