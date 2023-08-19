#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UAnimatedLightPluginSettings : public UDataAsset {
public:
    TArray<FName> InOrderBuckets; // 0x30
    static UAnimatedLightPluginSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
