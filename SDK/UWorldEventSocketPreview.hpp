#pragma once
#include <cstdint>
#include "FSocketPreview.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UWorldEventSocketPreview : public UDataAsset {
public:
    TArray<FSocketPreview> WorldPreviewData; // 0x30
    static UWorldEventSocketPreview* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
