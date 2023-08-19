#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UTextButtonWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
class UUI_BP_NewIndicator_C;
#pragma pack(push, 1)
class UUI_BP_NavBarButton_C : public UTextButtonWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3e8
    UWidgetAnimation* ShowHighlight; // 0x3f0
    UImage* highlight; // 0x3f8
    UImage* highlightBack; // 0x400
    UUI_BP_NewIndicator_C* newIndicator; // 0x408
    char pad_410[0x30];
    bool IsSelected; // 0x440
    char pad_441[0x3];
    FName Category; // 0x444
    char pad_44c[0x4];
    static UUI_BP_NavBarButton_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SetItemCount(int32_t NewCount, bool CallFunc_Greater_IntInt_ReturnValue);
    void SetSelectedState(bool isSelectedButton, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void OnSynchronizeProperties0();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_UI_BP_NavBarButton(int32_t EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, FString CallFunc_Conv_TextToString_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1);
    void OnUnhoveredEventDispatcher__DelegateSignature();
    void OnClickedEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me);
    void OnHoveredEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me);
}; // Size: 0x450
#pragma pack(pop)
