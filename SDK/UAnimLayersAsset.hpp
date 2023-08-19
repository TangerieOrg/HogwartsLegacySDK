#pragma once
#include <cstdint>
#include "FAnimationRequestLayer.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UAnimLayersAsset : public UDataAsset {
public:
    TArray<FAnimationRequestLayer> Layers; // 0x30
    static UAnimLayersAsset* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
