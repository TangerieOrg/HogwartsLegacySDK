#pragma once
#include <cstdint>
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FLinearColor.hpp"
#include "FMargin.hpp"
#include "FSlateBrush.hpp"
#include "FVector2D.hpp"
#include "UContentWidget.hpp"
class UTexture2D;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USlateBrushAsset;
#pragma pack(push, 1)
class UBorder : public UContentWidget {
public:
    EHorizontalAlignment HorizontalAlignment; // 0x120
    EVerticalAlignment VerticalAlignment; // 0x121
    uint8_t bShowEffectWhenDisabled : 1; // 0x122
    uint8_t pad_bitfield_122_1 : 7;
    char pad_123[0x1];
    FLinearColor ContentColorAndOpacity; // 0x124
    char pad_134[0x10];
    FMargin Padding; // 0x144
    char pad_154[0x4];
    FSlateBrush Background; // 0x158
    char pad_1e0[0x10];
    FLinearColor BrushColor; // 0x1f0
    char pad_200[0x10];
    FVector2D DesiredSizeScale; // 0x210
    bool bFlipForRightToLeftFlowDirection; // 0x218
    char pad_219[0x57];
    static UBorder* StaticClass();
    void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
    void SetDesiredSizeScale(FVector2D InScale);
    void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);
    void SetBrushFromTexture(UTexture2D* Texture);
    void SetBrushFromMaterial(UMaterialInterface* Material);
    void SetBrushFromAsset(USlateBrushAsset* Asset);
    void SetBrushColor(FLinearColor InBrushColor);
    void SetBrush(FSlateBrush& InBrush);
    UMaterialInstanceDynamic* GetDynamicMaterial();
}; // Size: 0x270
#pragma pack(pop)
