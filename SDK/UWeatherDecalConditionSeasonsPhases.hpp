#pragma once
#include <cstdint>
#include "UWeatherDecalCondition.hpp"
#pragma pack(push, 1)
class UWeatherDecalConditionSeasonsPhases : public UWeatherDecalCondition {
public:
    char pad_28[0x140];
    bool bOnInFall; // 0x168
    bool bOnInWinter; // 0x169
    bool bOnInSpring; // 0x16a
    bool bOnInSummer; // 0x16b
    bool bUseSeasonOverride; // 0x16c
    char pad_16d[0x3];
    static UWeatherDecalConditionSeasonsPhases* StaticClass();
}; // Size: 0x170
#pragma pack(pop)
