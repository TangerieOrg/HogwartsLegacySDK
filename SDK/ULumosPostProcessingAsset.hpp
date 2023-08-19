#pragma once
#include <cstdint>
#include "FPostProcessSettings.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class ULumosPostProcessingAsset : public UDataAsset {
public:
    FPostProcessSettings PostProcessSettings; // 0x30
    static ULumosPostProcessingAsset* StaticClass();
}; // Size: 0x620
#pragma pack(pop)
