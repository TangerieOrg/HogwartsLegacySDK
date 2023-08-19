#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "FFormatArgumentData.hpp"
#include "FIntPoint.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_FinisherMeterSection_C.hpp"
#include "UUI_BP_FinisherMeter_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_FinisherMeter_C* UUI_BP_FinisherMeter_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeter.UI_BP_FinisherMeter_C");
    return (UUI_BP_FinisherMeter_C*)res;
}
void UUI_BP_FinisherMeter_C::SetComboCountVisibleWithAnim(int32_t InComboCount, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, FVector CallFunc_VLerp_ReturnValue, FVector CallFunc_VLerp_ReturnValue_1, FVector2D CallFunc_Conv_VectorToVector2D_ReturnValue, FVector2D CallFunc_Conv_VectorToVector2D_ReturnValue_1, FLinearColor CallFunc_LinearColorLerpUsingHSV_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.SetComboCountVisibleWithAnim"));
    struct Params_SetComboCountVisibleWithAnim {
        int32_t InComboCount; // 0x0
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x4
        char pad_5[0x3];
        float CallFunc_Conv_IntToFloat_ReturnValue; // 0x8
        float CallFunc_Conv_IntToFloat_ReturnValue_1; // 0xc
        float CallFunc_Conv_IntToFloat_ReturnValue_2; // 0x10
        bool CallFunc_GreaterEqual_IntInt_ReturnValue; // 0x14
        char pad_15[0x3];
        float CallFunc_MapRangeClamped_ReturnValue; // 0x18
        FVector CallFunc_VLerp_ReturnValue; // 0x1c
        FVector CallFunc_VLerp_ReturnValue_1; // 0x28
        FVector2D CallFunc_Conv_VectorToVector2D_ReturnValue; // 0x34
        FVector2D CallFunc_Conv_VectorToVector2D_ReturnValue_1; // 0x3c
        FLinearColor CallFunc_LinearColorLerpUsingHSV_ReturnValue; // 0x44
        float CallFunc_GetRenderOpacity_ReturnValue; // 0x54
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x58
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x60
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x61
        char pad_62[0x6];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x68
        float CallFunc_GetRenderOpacity_ReturnValue_1; // 0x70
        bool CallFunc_Greater_FloatFloat_ReturnValue_1; // 0x74
        char pad_75[0x3];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0x78
    }; // Size: 0x80
    Params_SetComboCountVisibleWithAnim params{};
    params.InComboCount = (int32_t)InComboCount;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Conv_IntToFloat_ReturnValue = (float)CallFunc_Conv_IntToFloat_ReturnValue;
    params.CallFunc_Conv_IntToFloat_ReturnValue_1 = (float)CallFunc_Conv_IntToFloat_ReturnValue_1;
    params.CallFunc_Conv_IntToFloat_ReturnValue_2 = (float)CallFunc_Conv_IntToFloat_ReturnValue_2;
    params.CallFunc_GreaterEqual_IntInt_ReturnValue = (bool)CallFunc_GreaterEqual_IntInt_ReturnValue;
    params.CallFunc_MapRangeClamped_ReturnValue = (float)CallFunc_MapRangeClamped_ReturnValue;
    params.CallFunc_VLerp_ReturnValue = (FVector)CallFunc_VLerp_ReturnValue;
    params.CallFunc_VLerp_ReturnValue_1 = (FVector)CallFunc_VLerp_ReturnValue_1;
    params.CallFunc_Conv_VectorToVector2D_ReturnValue = (FVector2D)CallFunc_Conv_VectorToVector2D_ReturnValue;
    params.CallFunc_Conv_VectorToVector2D_ReturnValue_1 = (FVector2D)CallFunc_Conv_VectorToVector2D_ReturnValue_1;
    params.CallFunc_LinearColorLerpUsingHSV_ReturnValue = (FLinearColor)CallFunc_LinearColorLerpUsingHSV_ReturnValue;
    params.CallFunc_GetRenderOpacity_ReturnValue = (float)CallFunc_GetRenderOpacity_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_GetRenderOpacity_ReturnValue_1 = (float)CallFunc_GetRenderOpacity_ReturnValue_1;
    params.CallFunc_Greater_FloatFloat_ReturnValue_1 = (bool)CallFunc_Greater_FloatFloat_ReturnValue_1;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_FinisherMeter_C::ComboOver() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.ComboOver"));
    struct Params_ComboOver {
    }; // Size: 0x0
    Params_ComboOver params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FinisherMeter_C::UpdateCombo(int32_t NewComboCount, int32_t NewFocusModifier, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue) {}
void UUI_BP_FinisherMeter_C::SetNumMeters(int32_t NumMeters, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, FString CallFunc_Concat_StrStr_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.SetNumMeters"));
    struct Params_SetNumMeters {
        int32_t NumMeters; // 0x0
        char pad_4[0x4];
        FString CallFunc_Conv_IntToString_ReturnValue; // 0x8
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x18
        bool K2Node_SwitchInteger_CmpSuccess; // 0x28
        char pad_29[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x30
    }; // Size: 0x40
    Params_SetNumMeters params{};
    params.NumMeters = (int32_t)NumMeters;
    params.CallFunc_Conv_IntToString_ReturnValue = (FString)CallFunc_Conv_IntToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_FinisherMeter_C::SetMeterData(float MeterPercent, int32_t Temp_int_Variable, UWidget* CallFunc_GetChildAt_ReturnValue, int32_t CallFunc_GetChildrenCount_ReturnValue, UUI_BP_FinisherMeterSection_C* K2Node_DynamicCast_AsUI_BP_Finisher_Meter_Section, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.SetMeterData"));
    struct Params_SetMeterData {
        float MeterPercent; // 0x0
        int32_t Temp_int_Variable; // 0x4
        UWidget* CallFunc_GetChildAt_ReturnValue; // 0x8
        int32_t CallFunc_GetChildrenCount_ReturnValue; // 0x10
        char pad_14[0x4];
        UUI_BP_FinisherMeterSection_C* K2Node_DynamicCast_AsUI_BP_Finisher_Meter_Section; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x3];
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x24
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x28
        char pad_29[0x3];
        int32_t CallFunc_Subtract_IntInt_ReturnValue_1; // 0x2c
        float CallFunc_Conv_IntToFloat_ReturnValue; // 0x30
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x34
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x38
        float CallFunc_FClamp_ReturnValue; // 0x3c
    }; // Size: 0x40
    Params_SetMeterData params{};
    params.MeterPercent = (float)MeterPercent;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_GetChildAt_ReturnValue = (UWidget*)CallFunc_GetChildAt_ReturnValue;
    params.CallFunc_GetChildrenCount_ReturnValue = (int32_t)CallFunc_GetChildrenCount_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Finisher_Meter_Section = (UUI_BP_FinisherMeterSection_C*)K2Node_DynamicCast_AsUI_BP_Finisher_Meter_Section;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue_1 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_1;
    params.CallFunc_Conv_IntToFloat_ReturnValue = (float)CallFunc_Conv_IntToFloat_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_FClamp_ReturnValue = (float)CallFunc_FClamp_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FinisherMeter_C::PlayerFocusChanged(AActor* Target, float InFocusChange, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetFocusPercent_ReturnValue, int32_t CallFunc_GetBonusAncientMagicBars_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.PlayerFocusChanged"));
    struct Params_PlayerFocusChanged {
        AActor* Target; // 0x0
        float InFocusChange; // 0x8
        char pad_c[0x4];
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x3];
        float CallFunc_GetFocusPercent_ReturnValue; // 0x1c
        int32_t CallFunc_GetBonusAncientMagicBars_ReturnValue; // 0x20
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x24
        float CallFunc_Multiply_IntFloat_ReturnValue; // 0x28
    }; // Size: 0x2c
    Params_PlayerFocusChanged params{};
    params.Target = (AActor*)Target;
    params.InFocusChange = (float)InFocusChange;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetFocusPercent_ReturnValue = (float)CallFunc_GetFocusPercent_ReturnValue;
    params.CallFunc_GetBonusAncientMagicBars_ReturnValue = (int32_t)CallFunc_GetBonusAncientMagicBars_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Multiply_IntFloat_ReturnValue = (float)CallFunc_Multiply_IntFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FinisherMeter_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FinisherMeter_C::UpdateAncientMagicBarCount(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.UpdateAncientMagicBarCount"));
    struct Params_UpdateAncientMagicBarCount {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_UpdateAncientMagicBarCount params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_FinisherMeter_C::UpdateComboCount(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.UpdateComboCount"));
    struct Params_UpdateComboCount {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_UpdateComboCount params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_FinisherMeter_C::SpellUnlocked(UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.SpellUnlocked"));
    struct Params_SpellUnlocked {
        UObject* Caller; // 0x0
        FString String; // 0x8
    }; // Size: 0x18
    Params_SpellUnlocked params{};
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ProcessEvent(func, &params);
}
void UUI_BP_FinisherMeter_C::CooldownPickupCollected(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/FinisherMeter/UI_BP_FinisherMeter.UI_BP_FinisherMeter_C.CooldownPickupCollected"));
    struct Params_CooldownPickupCollected {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CooldownPickupCollected params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_FinisherMeter_C::ExecuteUbergraph_UI_BP_FinisherMeter(int32_t EntryPoint) {}
