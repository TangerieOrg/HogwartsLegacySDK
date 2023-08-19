#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UCreatureGrowthHandlerConfiguration : public UDataAsset {
public:
    char pad_30[0x78];
    static UCreatureGrowthHandlerConfiguration* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
