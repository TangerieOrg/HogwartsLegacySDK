#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FVector2D.hpp"
#include "UWidget.hpp"
class UObject;
class UTexture2D;
class UMaterialInstanceDynamic;
class UTexture2DDynamic;
class UMaterialInterface;
class USlateBrushAsset;
#pragma pack(push, 1)
class UImage : public UWidget {
public:
    FSlateBrush Brush; // 0x108
    char pad_190[0x10];
    FLinearColor ColorAndOpacity; // 0x1a0
    char pad_1b0[0x10];
    bool bFlipForRightToLeftFlowDirection; // 0x1c0
    char pad_1c1[0x4f];
    static UImage* StaticClass();
    void SetOpacity(float InOpacity);
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    void SetBrushTintColor(FSlateColor TintColor);
    void SetBrushSize(FVector2D DesiredSize);
    void SetBrushResourceObject(UObject* ResourceObject);
    void SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize);
    void SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize);
    void SetBrushFromSoftTexture();
    void SetBrushFromSoftMaterial();
    void SetBrushFromMaterial(UMaterialInterface* Material);
    void SetBrushFromAtlasInterface();
    void SetBrushFromAsset(USlateBrushAsset* Asset);
    void SetBrush(FSlateBrush& InBrush);
    UMaterialInstanceDynamic* GetDynamicMaterial();
}; // Size: 0x210
#pragma pack(pop)
