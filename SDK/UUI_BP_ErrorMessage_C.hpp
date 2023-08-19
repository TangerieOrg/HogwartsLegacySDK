#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UHUDElementGroup.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
class UPhoenixTextBlock;
class UObject;
#pragma pack(push, 1)
class UUI_BP_ErrorMessage_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* ShowErrorMessage; // 0x2f0
    UImage* ErrorImage; // 0x2f8
    UPhoenixTextBlock* ErrorMessage; // 0x300
    static UUI_BP_ErrorMessage_C* StaticClass();
    void DisplayErrorMessage(FString Key, float DisplayTime, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool K2Node_SwitchString_CmpSuccess, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Construct();
    void HermesDisplayErrorMessage(UObject* Caller, FString String);
    void WidgetAnimationEvt_ShowErrorMessage_K2Node_WidgetAnimationEvent_0();
    void ExecuteUbergraph_UI_BP_ErrorMessage(int32_t EntryPoint);
}; // Size: 0x308
#pragma pack(pop)
