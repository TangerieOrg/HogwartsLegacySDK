#pragma once
#include <cstdint>
#include "FCullDistanceSizePair.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UCullDistancePreset : public UDataAsset {
public:
    TArray<FCullDistanceSizePair> CullDistances; // 0x30
    static UCullDistancePreset* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
