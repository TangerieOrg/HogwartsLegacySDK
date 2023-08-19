#pragma once
#include <cstdint>
#include "FDataTableRowHandle.hpp"
#include "FLinearColor.hpp"
#include "FSlateBrush.hpp"
#include "URichTextBlock.hpp"
class UTexture2D;
class UFont;
#pragma pack(push, 1)
class UPhoenixRichTextBlock : public URichTextBlock {
public:
    FString LocalizationKey; // 0x678
    bool Translatable; // 0x688
    bool ScaleFontSize; // 0x689
    bool ForceDisplayGamepadGraphics; // 0x68a
    char pad_68b[0x5];
    FSlateBrush TextBackground; // 0x690
    FLinearColor BackgroundBrushColor; // 0x718
    char pad_728[0x30];
    FDataTableRowHandle ColorTag; // 0x758
    char pad_768[0x48];
    TArray<UTexture2D*> ReferencedTextures; // 0x7b0
    char pad_7c0[0x18];
    static UPhoenixRichTextBlock* StaticClass();
    void SetTextKey(FString Key);
    void SetPhoenixText(FString InText);
    FString ReplaceInputActions(FString KeyText);
    bool PreValidateLocalizationKey(FString RequestedKey);
    void FontLoadCallback(UFont* Font);
}; // Size: 0x7d8
#pragma pack(pop)
