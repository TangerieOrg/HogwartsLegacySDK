#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class ULevelTransformsDataAsset : public UDataAsset {
public:
    char pad_30[0x50];
    TArray<FTransform> Transform; // 0x80
    char pad_90[0x190];
    static ULevelTransformsDataAsset* StaticClass();
}; // Size: 0x220
#pragma pack(pop)
