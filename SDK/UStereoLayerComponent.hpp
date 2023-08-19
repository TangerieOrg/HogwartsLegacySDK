#pragma once
#include <cstdint>
#include "EStereoLayerShape.hpp"
#include "EStereoLayerType.hpp"
#include "FBox2D.hpp"
#include "FEquirectProps.hpp"
#include "FVector2D.hpp"
#include "USceneComponent.hpp"
class UTexture;
class UStereoLayerShape;
#pragma pack(push, 1)
class UStereoLayerComponent : public USceneComponent {
public:
    UTexture* Texture; // 0x220
    UTexture* LeftTexture; // 0x228
    uint8_t bQuadPreserveTextureRatio : 1; // 0x230
    uint8_t pad_bitfield_230_1 : 7;
    char pad_231[0x3];
    FVector2D QuadSize; // 0x234
    FBox2D UVRect; // 0x23c
    float CylinderRadius; // 0x250
    float CylinderOverlayArc; // 0x254
    int32_t CylinderHeight; // 0x258
    FEquirectProps EquirectProps; // 0x25c
    EStereoLayerType StereoLayerType; // 0x2a4
    EStereoLayerShape StereoLayerShape; // 0x2a5
    char pad_2a6[0x2];
    UStereoLayerShape* Shape; // 0x2a8
    int32_t Priority; // 0x2b0
    char pad_2b4[0x4c];
    static UStereoLayerComponent* StaticClass();
    void SetUVRect(FBox2D InUVRect);
    void SetTexture(UTexture* inTexture);
    void SetQuadSize(FVector2D InQuadSize);
    void SetPriority(int32_t InPriority);
    void SetLeftTexture(UTexture* inTexture);
    void SetEquirectProps(FEquirectProps InScaleBiases);
    void MarkTextureForUpdate();
    FBox2D GetUVRect();
    UTexture* GetTexture();
    FVector2D GetQuadSize();
    int32_t GetPriority();
    UTexture* GetLeftTexture();
}; // Size: 0x300
#pragma pack(pop)
