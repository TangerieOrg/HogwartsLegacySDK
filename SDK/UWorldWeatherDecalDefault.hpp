#pragma once
#include <cstdint>
#include "FWeatherDecalSetup.hpp"
#include "UWorldWeatherDecal.hpp"
class UWeatherDecalSettings;
class UWeatherDecalCondition;
class UWeatherDecalUpdate;
#pragma pack(push, 1)
class UWorldWeatherDecalDefault : public UWorldWeatherDecal {
public:
    FWeatherDecalSetup Setup; // 0x28
    TArray<UWeatherDecalSettings*> InitialSettings; // 0x48
    TArray<UWeatherDecalCondition*> ShowConditions; // 0x58
    TArray<UWeatherDecalUpdate*> Updates; // 0x68
    float BlendThreshold; // 0x78
    bool bEditorOnly; // 0x7c
    char pad_7d[0x3];
    static UWorldWeatherDecalDefault* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
