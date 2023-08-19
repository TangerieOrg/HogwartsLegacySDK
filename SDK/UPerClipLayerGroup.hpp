#pragma once
#include <cstdint>
#include "FPerClipLayerGroupLayer.hpp"
#include "UAnimMetaData.hpp"
#pragma pack(push, 1)
class UPerClipLayerGroup : public UAnimMetaData {
public:
    TArray<FPerClipLayerGroupLayer> LayerContent; // 0x28
    static UPerClipLayerGroup* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
