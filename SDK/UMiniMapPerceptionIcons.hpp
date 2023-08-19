#pragma once
#include <cstdint>
#include "UObject.hpp"
class UPerceptionIconData;
class UTextureUtil;
class UPerceptionTextureCacheItem;
class UPerceptionDrawQueueItem;
class UTexture2D;
class UMapSubSystem;
class UMinimapManager;
class UMinimapBase;
#pragma pack(push, 1)
class UMiniMapPerceptionIcons : public UObject {
public:
    TArray<UPerceptionIconData*> PerceptionIcons; // 0x28
    TArray<UPerceptionTextureCacheItem*> PerceptionTextureCache; // 0x38
    TArray<UPerceptionDrawQueueItem*> DrawQueue; // 0x48
    UTextureUtil* TextureBlitter; // 0x58
    UTexture2D* OverlayTexture; // 0x60
    UMapSubSystem* MapSubSystem; // 0x68
    UMinimapManager* MinimapManager; // 0x70
    UMinimapBase* Minimap; // 0x78
    char pad_80[0x68];
    static UMiniMapPerceptionIcons* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
