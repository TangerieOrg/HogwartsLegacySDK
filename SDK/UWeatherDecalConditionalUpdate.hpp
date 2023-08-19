#pragma once
#include <cstdint>
#include "UWeatherDecalUpdate.hpp"
class UWeatherDecalSimpleCondition;
class UWeatherDecalSettings;
#pragma pack(push, 1)
class UWeatherDecalConditionalUpdate : public UWeatherDecalUpdate {
public:
    TArray<UWeatherDecalSimpleCondition*> Conditions; // 0x28
    TArray<UWeatherDecalSettings*> Settings; // 0x38
    bool bIncludeOverallBlend; // 0x48
    char pad_49[0x7];
    static UWeatherDecalConditionalUpdate* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
