#pragma once
#include <cstdint>
#include "FDataTableRowHandle.hpp"
#include "FLinearColor.hpp"
#include "FSlateBrush.hpp"
#include "FSlateFontInfo.hpp"
#include "FSoftObjectPath.hpp"
#include "UTextBlock.hpp"
class UFont;
#pragma pack(push, 1)
class UPhoenixTextBlock : public UTextBlock {
public:
    FString LocalizationKey; // 0x2a8
    bool Translatable; // 0x2b8
    bool ScaleFontSize; // 0x2b9
    char pad_2ba[0x6];
    FSlateBrush TextBackground; // 0x2c0
    FLinearColor BackgroundBrushColor; // 0x348
    char pad_358[0x30];
    FDataTableRowHandle ColorTag; // 0x388
    char pad_398[0x8];
    FSoftObjectPath AsianFontPath; // 0x3a0
    char pad_3b8[0x60];
    static UPhoenixTextBlock* StaticClass();
    void SetTextKey(FString Key);
    void SetColorTag(FDataTableRowHandle NewColorTag);
    bool PreValidateLocalizationKey(FString RequestedKey);
    FString GetPhoenixText();
    FSlateFontInfo GetFontInfo();
    float GetCurrentFontScale();
    FDataTableRowHandle GetColorTag();
    void FontLoadCallback(UFont* LoadedFont);
}; // Size: 0x418
#pragma pack(pop)
