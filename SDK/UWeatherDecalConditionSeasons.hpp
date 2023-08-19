#pragma once
#include <cstdint>
#include "UWeatherDecalSimpleCondition.hpp"
#pragma pack(push, 1)
class UWeatherDecalConditionSeasons : public UWeatherDecalSimpleCondition {
public:
    float Fall; // 0x28
    float Winter; // 0x2c
    float Spring; // 0x30
    float Summer; // 0x34
    bool bUseSeasonOverride; // 0x38
    char pad_39[0x7];
    static UWeatherDecalConditionSeasons* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
