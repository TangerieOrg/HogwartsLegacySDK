#pragma once
#include <cstdint>
#include "ETextTransformPolicy.hpp"
#include "FLinearColor.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FVector2D.hpp"
#include "UTextLayoutWidget.hpp"
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UTextBlock : public UTextLayoutWidget {
public:
    char pad_128[0x28];
    FSlateColor ColorAndOpacity; // 0x150
    char pad_178[0x10];
    FSlateFontInfo Font; // 0x188
    FSlateBrush StrikeBrush; // 0x1e0
    FVector2D ShadowOffset; // 0x268
    FLinearColor ShadowColorAndOpacity; // 0x270
    char pad_280[0x10];
    float MinDesiredWidth; // 0x290
    bool bWrapWithInvalidationPanel; // 0x294
    bool bAutoWrapText; // 0x295
    ETextTransformPolicy TextTransformPolicy; // 0x296
    bool bSimpleTextMode; // 0x297
    char pad_298[0x10];
    static UTextBlock* StaticClass();
    void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);
    void SetText();
    void SetStrikeBrush(FSlateBrush InStrikeBrush);
    void SetShadowOffset(FVector2D InShadowOffset);
    void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);
    void SetOpacity(float InOpacity);
    void SetMinDesiredWidth(float InMinDesiredWidth);
    void SetFont(FSlateFontInfo InFontInfo);
    void SetColorAndOpacity(FSlateColor InColorAndOpacity);
    void SetAutoWrapText(bool InAutoTextWrap);
    void GetText();
    UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
    UMaterialInstanceDynamic* GetDynamicFontMaterial();
}; // Size: 0x2a8
#pragma pack(pop)
