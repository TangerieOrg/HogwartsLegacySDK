#pragma once
#include <cstdint>
#include "ECameraProjectionMode\Type.hpp"
#include "ESceneCaptureCompositeMode.hpp"
#include "FMatrix.hpp"
#include "FPostProcessSettings.hpp"
#include "FVector.hpp"
#include "USceneCaptureComponent.hpp"
class UTextureRenderTarget2D;
#pragma pack(push, 1)
class USceneCaptureComponent2D : public USceneCaptureComponent {
public:
    float OrthoWidth; // 0x2e0
    char pad_2e4[0x4];
    UTextureRenderTarget2D* TextureTarget; // 0x2e8
    ESceneCaptureCompositeMode CompositeMode; // 0x2f0
    char pad_2f1[0xf];
    FPostProcessSettings PostProcessSettings; // 0x300
    float PostProcessBlendWeight; // 0x8f0
    uint8_t bOverride_CustomNearClippingPlane : 1; // 0x8f4
    uint8_t pad_bitfield_8f4_1 : 7;
    char pad_8f5[0x3];
    float CustomNearClippingPlane; // 0x8f8
    bool bUseCustomProjectionMatrix; // 0x8fc
    char pad_8fd[0x3];
    FMatrix CustomProjectionMatrix; // 0x900
    bool bUseEditorCamera; // 0x940
    bool bEnableClipPlane; // 0x941
    char pad_942[0x2];
    FVector ClipPlaneBase; // 0x944
    FVector ClipPlaneNormal; // 0x950
    uint8_t bCameraCutThisFrame : 1; // 0x95c
    uint8_t bConsiderUnrenderedOpaquePixelAsFullyTranslucent : 1; // 0x95c
    uint8_t pad_bitfield_95c_2 : 6;
    char pad_95d[0x3];
    bool bDisableFlipCopyGLES; // 0x960
    char pad_961[0x1f];
    static USceneCaptureComponent2D* StaticClass();
    void RemoveBlendable();
    void CaptureScene();
    void AddOrUpdateBlendable();
}; // Size: 0x980
#pragma pack(pop)
