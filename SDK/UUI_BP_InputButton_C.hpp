#pragma once
#include <cstdint>
#include "EGamepadTextInputResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UImage;
class UEditableTextBox;
class UButton;
#pragma pack(push, 1)
class UUI_BP_InputButton_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* OnInputButtonHovered; // 0x330
    UImage* FlareBack; // 0x338
    UImage* Frame; // 0x340
    UButton* inputButton; // 0x348
    UEditableTextBox* InputText; // 0x350
    char pad_358[0x38];
    int32_t MaxCharacters; // 0x390
    char pad_394[0x14];
    bool IsPassword; // 0x3a8
    bool TempDisableClick; // 0x3a9
    char pad_3aa[0x1e];
    bool InitialTextChanged; // 0x3c8
    char pad_3c9[0x7];
    static UUI_BP_InputButton_C* StaticClass();
    void Pre_Filter_Input();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SetInitialText();
    void GetInputText();
    void SetInputHint();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__inputButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__inputButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__inputButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__inputText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature();
    void BndEvt__inputText_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature();
    void FloatingKeyboardClosed(EGamepadTextInputResult InputResult);
    void ExecuteUbergraph_UI_BP_InputButton(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1);
    void OnTextChanged__DelegateSignature(FString newText);
    void OnInputUnhovered__DelegateSignature(UUI_BP_InputButton_C* Button);
    void OnInputHovered__DelegateSignature(UUI_BP_InputButton_C* Button);
}; // Size: 0x3d0
#pragma pack(pop)
