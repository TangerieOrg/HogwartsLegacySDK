#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FSlateFontInfo.hpp"
#include "UPhoenixUserWidget.hpp"
class UObject;
class UButton;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UTextButtonWidget : public UPhoenixUserWidget {
public:
    char pad_328[0x18];
    FString Namespace; // 0x340
    FLinearColor HoveredTextColor; // 0x350
    FLinearColor UnhoveredTextColor; // 0x360
    bool IsButtonPressed; // 0x370
    char pad_371[0x7];
    UObject* UserData; // 0x378
    FSlateFontInfo TextFont; // 0x380
    UButton* TheButton; // 0x3d8
    UPhoenixTextBlock* TheText; // 0x3e0
    static UTextButtonWidget* StaticClass();
    void SetText();
    void OnSynchronizeProperties();
    void GetText();
    void ChangeTextColorOnButtonUnHover();
    void ChangeTextColorOnButtonHover();
}; // Size: 0x3e8
#pragma pack(pop)
