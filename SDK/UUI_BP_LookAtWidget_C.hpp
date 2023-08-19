#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UHUDElementGroup.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
class UPhoenixRichTextBlock;
#pragma pack(push, 1)
class UUI_BP_LookAtWidget_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* Intro; // 0x2f0
    UImage* Image_98; // 0x2f8
    UPhoenixRichTextBlock* PhoenixRichTextBlock_145; // 0x300
    static UUI_BP_LookAtWidget_C* StaticClass();
    void HideCallout();
    void ShowCallout(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Construct();
    void ExecuteUbergraph_UI_BP_LookAtWidget(int32_t EntryPoint);
}; // Size: 0x308
#pragma pack(pop)
