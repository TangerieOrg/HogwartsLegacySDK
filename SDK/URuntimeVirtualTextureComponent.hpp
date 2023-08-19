#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
class URuntimeVirtualTexture;
struct FBoxSphereBounds;
class UVirtualTextureBuilder;
#pragma pack(push, 1)
class URuntimeVirtualTextureComponent : public USceneComponent {
public:
    char pad_220[0x20];
    bool bSetBoundsButton; // 0x240
    bool bSnapBoundsToLandscape; // 0x241
    char pad_242[0x6];
    URuntimeVirtualTexture* VirtualTexture; // 0x248
    bool bEnableScalability; // 0x250
    char pad_251[0x3];
    uint32_t ScalabilityGroup; // 0x254
    bool bHidePrimitives; // 0x258
    char pad_259[0x7];
    UVirtualTextureBuilder* StreamingTexture; // 0x260
    UVirtualTextureBuilder* StreamingTextureWinter; // 0x268
    UVirtualTextureBuilder* StreamingTextureSummer; // 0x270
    UVirtualTextureBuilder* StreamingTextureFall; // 0x278
    int32_t StreamLowMips; // 0x280
    bool bBuildStreamingMipsButton; // 0x284
    bool bEnableCompressCrunch; // 0x285
    bool bUseStreamingLowMipsInEditor; // 0x286
    bool bBuildDebugStreamingMips; // 0x287
    char pad_288[0x28];
    static URuntimeVirtualTextureComponent* StaticClass();
    void Invalidate(FBoxSphereBounds& WorldBounds);
}; // Size: 0x2b0
#pragma pack(pop)
