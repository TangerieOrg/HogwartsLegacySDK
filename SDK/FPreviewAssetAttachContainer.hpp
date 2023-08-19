#pragma once
#include <cstdint>
#include "FPreviewAttachedObjectPair.hpp"
#pragma pack(push, 1)
struct FPreviewAssetAttachContainer {
    TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
}; // Size: 0x10
#pragma pack(pop)
