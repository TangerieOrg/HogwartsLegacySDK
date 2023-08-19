#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UMultiFX2_Base;
#pragma pack(push, 1)
class UPopulationConfigData : public UDataAsset {
public:
    char pad_30[0x50];
    TArray<UMultiFX2_Base*> Effects; // 0x80
    static UPopulationConfigData* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
