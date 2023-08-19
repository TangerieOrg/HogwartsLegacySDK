#pragma once
#include <cstdint>
#include "USceneCaptureComponent.hpp"
class UTextureRenderTargetCube;
class UTextureRenderTarget2D;
#pragma pack(push, 1)
class USceneCaptureComponentCube : public USceneCaptureComponent {
public:
    bool bCaptureRotation; // 0x2e0
    char pad_2e1[0x7];
    UTextureRenderTargetCube* TextureTargetLeft; // 0x2e8
    UTextureRenderTargetCube* TextureTargetRight; // 0x2f0
    UTextureRenderTarget2D* TextureTargetODS; // 0x2f8
    float IPD; // 0x300
    char pad_304[0xc];
    static USceneCaptureComponentCube* StaticClass();
    void CaptureScene();
}; // Size: 0x310
#pragma pack(pop)
