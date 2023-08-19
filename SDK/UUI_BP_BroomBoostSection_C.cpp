#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UProgressBar.hpp"
#include "UUI_BP_BroomBoostSection_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_BroomBoostSection_C::PreConstruct0(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
UUI_BP_BroomBoostSection_C* UUI_BP_BroomBoostSection_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C");
    return (UUI_BP_BroomBoostSection_C*)res;
}
void UUI_BP_BroomBoostSection_C::ToggleCloseToGroundEffect(bool ShouldShow, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.ToggleCloseToGroundEffect"));
    struct Params_ToggleCloseToGroundEffect {
        bool ShouldShow; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
        bool CallFunc_NotEqual_BoolBool_ReturnValue; // 0x10
        char pad_11[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x18
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0x20
    }; // Size: 0x28
    Params_ToggleCloseToGroundEffect params{};
    params.ShouldShow = (bool)ShouldShow;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_NotEqual_BoolBool_ReturnValue = (bool)CallFunc_NotEqual_BoolBool_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomBoostSection_C::ToggleBoostingEffect(bool ShouldShow, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.ToggleBoostingEffect"));
    struct Params_ToggleBoostingEffect {
        bool ShouldShow; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x10
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0x18
        bool CallFunc_NotEqual_BoolBool_ReturnValue; // 0x20
        char pad_21[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2; // 0x28
    }; // Size: 0x30
    Params_ToggleBoostingEffect params{};
    params.ShouldShow = (bool)ShouldShow;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    params.CallFunc_NotEqual_BoolBool_ReturnValue = (bool)CallFunc_NotEqual_BoolBool_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue_2 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_2;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomBoostSection_C::SetMeterFillColor(FLinearColor NewColor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.SetMeterFillColor"));
    struct Params_SetMeterFillColor {
        FLinearColor NewColor; // 0x0
    }; // Size: 0x10
    Params_SetMeterFillColor params{};
    params.NewColor = (FLinearColor)NewColor;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomBoostSection_C::SetMeterPosition(int32_t Index, int32_t MaxIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.SetMeterPosition"));
    struct Params_SetMeterPosition {
        int32_t Index; // 0x0
        int32_t MaxIndex; // 0x4
    }; // Size: 0x8
    Params_SetMeterPosition params{};
    params.Index = (int32_t)Index;
    params.MaxIndex = (int32_t)MaxIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomBoostSection_C::SetMeterPercent(float NewPercent, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.SetMeterPercent"));
    struct Params_SetMeterPercent {
        float NewPercent; // 0x0
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x4
        char pad_5[0x3];
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SetMeterPercent params{};
    params.NewPercent = (float)NewPercent;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomBoostSection_C::ExecuteUbergraph_UI_BP_BroomBoostSection(int32_t EntryPoint, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.ExecuteUbergraph_UI_BP_BroomBoostSection"));
    struct Params_ExecuteUbergraph_UI_BP_BroomBoostSection {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_UI_BP_BroomBoostSection params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomBoostSection_C::MeterIsNotFull__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.MeterIsNotFull__DelegateSignature"));
    struct Params_MeterIsNotFull__DelegateSignature {
    }; // Size: 0x0
    Params_MeterIsNotFull__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomBoostSection_C::MeterIsFull__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomBoostSection.UI_BP_BroomBoostSection_C.MeterIsFull__DelegateSignature"));
    struct Params_MeterIsFull__DelegateSignature {
    }; // Size: 0x0
    Params_MeterIsFull__DelegateSignature params{};
    ProcessEvent(func, &params);
}
