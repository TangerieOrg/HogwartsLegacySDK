#pragma once
#include <cstdint>
#include "AActor.hpp"
class UTextureRenderTargetCube;
class UTextureCube;
class ASanctuaryPortalCaptureExit;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class ASanctuaryPortalCaptureEntrance : public AActor {
public:
    FName EntranceZone; // 0x248
    UTextureRenderTargetCube* RenderTarget; // 0x250
    UTextureCube* PreRenderedTexture; // 0x258
    ASanctuaryPortalCaptureExit* Exit; // 0x260
    bool bReCaptureAtRuntime; // 0x268
    bool bHasRuntimeCapture; // 0x269
    char pad_26a[0x6];
    static ASanctuaryPortalCaptureEntrance* StaticClass();
    void RuntimeReCapture();
    void Capture();
    void ApplyMaterialParameters(UMaterialInstanceDynamic* InMaterialInstanceDynamic);
}; // Size: 0x270
#pragma pack(pop)
