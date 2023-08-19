#pragma once
#include <cstdint>
#include "EInstallFeatures.hpp"
#pragma pack(push, 1)
struct FInstallFeature {
    EInstallFeatures FeatureId; // 0x0
    bool bIsLanguagePack; // 0x1
    char pad_2[0x6];
    FString FeatureTag; // 0x8
    TArray<int32_t> ChunkIds; // 0x18
}; // Size: 0x28
#pragma pack(pop)
