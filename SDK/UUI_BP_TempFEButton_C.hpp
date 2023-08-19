#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UPhoenixTextBlock;
class UButton;
#pragma pack(push, 1)
class UUI_BP_TempFEButton_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UPhoenixTextBlock* ButtonText; // 0x270
    UButton* tempButton; // 0x278
    char pad_280[0x10];
    int32_t listIndex; // 0x290
    char pad_294[0x14];
    static UUI_BP_TempFEButton_C* StaticClass();
    void SetButtonIndex(int32_t CurrentIndex);
    void SetButtonText(FName ButtonText, FString CallFunc_Conv_NameToString_ReturnValue);
    void BndEvt__tempButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__tempButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_TempFEButton(int32_t EntryPoint);
    void OnTempFEButtonHover__DelegateSignature(UUI_BP_TempFEButton_C* Button);
    void OnTempFEButtonClicked__DelegateSignature(UUI_BP_TempFEButton_C* Button);
}; // Size: 0x2a8
#pragma pack(pop)
