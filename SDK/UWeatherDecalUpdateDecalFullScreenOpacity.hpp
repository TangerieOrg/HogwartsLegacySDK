#pragma once
#include <cstdint>
#include "UWeatherDecalUpdateSingleParameterFlex.hpp"
#pragma pack(push, 1)
class UWeatherDecalUpdateDecalFullScreenOpacity : public UWeatherDecalUpdateSingleParameterFlex {
public:
    bool bIncludeWeatherblendDomainOpacity; // 0x48
    bool bToggleVisibilityBasedOnOpacity; // 0x49
    char pad_4a[0x6];
    static UWeatherDecalUpdateDecalFullScreenOpacity* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
