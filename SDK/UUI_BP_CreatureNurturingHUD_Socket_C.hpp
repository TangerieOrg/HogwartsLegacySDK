#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UHUDElementGroup.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UUMGSequencePlayer;
class UPhoenixRichTextBlock;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_CreatureNurturingHUD_Socket_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* SlideOut; // 0x2f0
    UWidgetAnimation* SlideIn; // 0x2f8
    UCanvasPanel* beastManagement; // 0x300
    UPhoenixRichTextBlock* ButtonCallout; // 0x308
    UPhoenixTextBlock* manageText; // 0x310
    static UUI_BP_CreatureNurturingHUD_Socket_C* StaticClass();
    void ForceHide(bool Hide, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void Construct();
    void ExecuteUbergraph_UI_BP_CreatureNurturingHUD_Socket(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}; // Size: 0x318
#pragma pack(pop)
