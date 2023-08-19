#pragma once
#include <cstdint>
#include "EHorizTextAligment.hpp"
#include "EVerticalTextAligment.hpp"
#include "FColor.hpp"
#include "FVector.hpp"
#include "UPrimitiveComponent.hpp"
class UMaterialInterface;
class UFont;
#pragma pack(push, 1)
class UTextRenderComponent : public UPrimitiveComponent {
public:
    char pad_480[0x18];
    UMaterialInterface* TextMaterial; // 0x498
    UFont* Font; // 0x4a0
    EHorizTextAligment HorizontalAlignment; // 0x4a8
    EVerticalTextAligment VerticalAlignment; // 0x4a9
    char pad_4aa[0x2];
    FColor TextRenderColor; // 0x4ac
    float XScale; // 0x4b0
    float YScale; // 0x4b4
    float WorldSize; // 0x4b8
    float InvDefaultSize; // 0x4bc
    float HorizSpacingAdjust; // 0x4c0
    float VertSpacingAdjust; // 0x4c4
    uint8_t bAlwaysRenderAsText : 1; // 0x4c8
    uint8_t pad_bitfield_4c8_1 : 7;
    char pad_4c9[0x7];
    static UTextRenderComponent* StaticClass();
    void SetYScale(float Value);
    void SetXScale(float Value);
    void SetWorldSize(float Value);
    void SetVertSpacingAdjust(float Value);
    void SetVerticalAlignment(EVerticalTextAligment Value);
    void SetTextRenderColor(FColor Value);
    void SetTextMaterial(UMaterialInterface* Material);
    void SetText(FString Value);
    void SetHorizSpacingAdjust(float Value);
    void SetHorizontalAlignment(EHorizTextAligment Value);
    void SetFont(UFont* Value);
    void K2_SetText();
    FVector GetTextWorldSize();
    FVector GetTextLocalSize();
}; // Size: 0x4d0
#pragma pack(pop)
