#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBorder.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UPhoenixImage.hpp"
#include "UProgressBar.hpp"
#include "UUI_BP_FinisherMeterSection_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_FinisherMeterSection_C* UUI_BP_FinisherMeterSection_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C");
    return (UUI_BP_FinisherMeterSection_C*)res;
}
void UUI_BP_FinisherMeterSection_C::Set_Meter_Glint(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C.Set Meter Glint"));
    struct Params_Set_Meter_Glint {
        float CallFunc_RandomFloatInRange_ReturnValue; // 0x0
        float CallFunc_RandomFloatInRange_ReturnValue_1; // 0x4
        float CallFunc_RandomFloatInRange_ReturnValue_2; // 0x8
        char pad_c[0x4];
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x10
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x18
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0x19
        char pad_1a[0x2];
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x1c
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x20
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1; // 0x28
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1; // 0x30
    }; // Size: 0x38
    Params_Set_Meter_Glint params{};
    params.CallFunc_RandomFloatInRange_ReturnValue = (float)CallFunc_RandomFloatInRange_ReturnValue;
    params.CallFunc_RandomFloatInRange_ReturnValue_1 = (float)CallFunc_RandomFloatInRange_ReturnValue_1;
    params.CallFunc_RandomFloatInRange_ReturnValue_2 = (float)CallFunc_RandomFloatInRange_ReturnValue_2;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_1;
    params.CallFunc_GetDynamicMaterial_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_FinisherMeterSection_C::Construct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FinisherMeterSection_C::SetMeterPosition(int32_t Index, int32_t Temp_int_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, int32_t Temp_int_Variable_1, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, int32_t Temp_int_Variable_2, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, ESlateVisibility K2Node_Select_Default_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C.SetMeterPosition"));
    struct Params_SetMeterPosition {
        int32_t Index; // 0x0
        int32_t Temp_int_Variable; // 0x4
        ESlateVisibility Temp_byte_Variable; // 0x8
        ESlateVisibility Temp_byte_Variable_1; // 0x9
        ESlateVisibility Temp_byte_Variable_2; // 0xa
        char pad_b[0x1];
        int32_t Temp_int_Variable_1; // 0xc
        ESlateVisibility Temp_byte_Variable_3; // 0x10
        ESlateVisibility Temp_byte_Variable_4; // 0x11
        ESlateVisibility Temp_byte_Variable_5; // 0x12
        char pad_13[0x1];
        int32_t Temp_int_Variable_2; // 0x14
        ESlateVisibility Temp_byte_Variable_6; // 0x18
        ESlateVisibility Temp_byte_Variable_7; // 0x19
        ESlateVisibility Temp_byte_Variable_8; // 0x1a
        ESlateVisibility K2Node_Select_Default; // 0x1b
        ESlateVisibility K2Node_Select_Default_1; // 0x1c
        ESlateVisibility K2Node_Select_Default_2; // 0x1d
    }; // Size: 0x1e
    Params_SetMeterPosition params{};
    params.Index = (int32_t)Index;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.Temp_byte_Variable_4 = (ESlateVisibility)Temp_byte_Variable_4;
    params.Temp_byte_Variable_5 = (ESlateVisibility)Temp_byte_Variable_5;
    params.Temp_int_Variable_2 = (int32_t)Temp_int_Variable_2;
    params.Temp_byte_Variable_6 = (ESlateVisibility)Temp_byte_Variable_6;
    params.Temp_byte_Variable_7 = (ESlateVisibility)Temp_byte_Variable_7;
    params.Temp_byte_Variable_8 = (ESlateVisibility)Temp_byte_Variable_8;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    params.K2Node_Select_Default_2 = (ESlateVisibility)K2Node_Select_Default_2;
    ProcessEvent(func, &params);
}
void UUI_BP_FinisherMeterSection_C::SetMeterPercent(float NewPercent, float OldPercent, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C.SetMeterPercent"));
    struct Params_SetMeterPercent {
        float NewPercent; // 0x0
        float OldPercent; // 0x4
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x8
        char pad_9[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x10
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x18
        char pad_19[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x20
    }; // Size: 0x28
    Params_SetMeterPercent params{};
    params.NewPercent = (float)NewPercent;
    params.OldPercent = (float)OldPercent;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FinisherMeterSection_C::PreConstruct0(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_FinisherMeterSection_C::ExecuteUbergraph_UI_BP_FinisherMeterSection(int32_t EntryPoint, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C.ExecuteUbergraph_UI_BP_FinisherMeterSection"));
    struct Params_ExecuteUbergraph_UI_BP_FinisherMeterSection {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_UI_BP_FinisherMeterSection params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_FinisherMeterSection_C::MeterIsNotFull__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C.MeterIsNotFull__DelegateSignature"));
    struct Params_MeterIsNotFull__DelegateSignature {
    }; // Size: 0x0
    Params_MeterIsNotFull__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FinisherMeterSection_C::MeterIsFull__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeterSection.UI_BP_FinisherMeterSection_C.MeterIsFull__DelegateSignature"));
    struct Params_MeterIsFull__DelegateSignature {
    }; // Size: 0x0
    Params_MeterIsFull__DelegateSignature params{};
    ProcessEvent(func, &params);
}
