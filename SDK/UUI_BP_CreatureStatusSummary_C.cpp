#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimespan.hpp"
#include "UCreatureState.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_CreatureByproduct_C.hpp"
#include "UUI_BP_CreatureNeedWidget_C.hpp"
#include "UUI_BP_CreatureStatusSummary_C.hpp"
#include "UUI_BP_NurtureProgressDiamond_C.hpp"
#include "UWidgetSwitcher.hpp"
UUI_BP_CreatureStatusSummary_C* UUI_BP_CreatureStatusSummary_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Creatures/UI_BP_CreatureStatusSummary.UI_BP_CreatureStatusSummary_C");
    return (UUI_BP_CreatureStatusSummary_C*)res;
}
void UUI_BP_CreatureStatusSummary_C::Setup(UCreatureState* InCreatureState, bool ShouldBeMinimized, bool CallFunc_IsValid_ReturnValue) {}
void UUI_BP_CreatureStatusSummary_C::Update(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_GetIsByproductReady_ReturnValue, bool CallFunc_AreAllNeedsMet_ReturnValue, bool CallFunc_IsIncubating_ReturnValue, bool CallFunc_IsByproductOnCooldown_ReturnValue, bool CallFunc_IsPregnant_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureStatusSummary.UI_BP_CreatureStatusSummary_C.Update"));
    struct Params_Update {
        bool Temp_bool_Variable; // 0x0
        ESlateVisibility Temp_byte_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable_1; // 0x2
        bool CallFunc_GetIsByproductReady_ReturnValue; // 0x3
        bool CallFunc_AreAllNeedsMet_ReturnValue; // 0x4
        bool CallFunc_IsIncubating_ReturnValue; // 0x5
        bool CallFunc_IsByproductOnCooldown_ReturnValue; // 0x6
        bool CallFunc_IsPregnant_ReturnValue; // 0x7
        bool CallFunc_BooleanOR_ReturnValue; // 0x8
        ESlateVisibility K2Node_Select_Default; // 0x9
        bool CallFunc_Not_PreBool_ReturnValue; // 0xa
    }; // Size: 0xb
    Params_Update params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.CallFunc_GetIsByproductReady_ReturnValue = (bool)CallFunc_GetIsByproductReady_ReturnValue;
    params.CallFunc_AreAllNeedsMet_ReturnValue = (bool)CallFunc_AreAllNeedsMet_ReturnValue;
    params.CallFunc_IsIncubating_ReturnValue = (bool)CallFunc_IsIncubating_ReturnValue;
    params.CallFunc_IsByproductOnCooldown_ReturnValue = (bool)CallFunc_IsByproductOnCooldown_ReturnValue;
    params.CallFunc_IsPregnant_ReturnValue = (bool)CallFunc_IsPregnant_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_CreatureStatusSummary_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_CreatureStatusSummary_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureStatusSummary.UI_BP_CreatureStatusSummary_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureStatusSummary_C::UpdateCooldownTimer(float CallFunc_GetByproductCooldownProgress_ReturnValue, FTimespan CallFunc_GetByproductCooldownTimeLeft_ReturnValue) {}
void UUI_BP_CreatureStatusSummary_C::SetNeedsMinimized(bool ShouldBeMinimized, bool Temp_bool_Variable, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, int32_t K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureStatusSummary.UI_BP_CreatureStatusSummary_C.SetNeedsMinimized"));
    struct Params_SetNeedsMinimized {
        bool ShouldBeMinimized; // 0x0
        bool Temp_bool_Variable; // 0x1
        char pad_2[0x2];
        int32_t Temp_int_Variable; // 0x4
        int32_t Temp_int_Variable_1; // 0x8
        bool CallFunc_NotEqual_BoolBool_ReturnValue; // 0xc
        char pad_d[0x3];
        int32_t K2Node_Select_Default; // 0x10
    }; // Size: 0x14
    Params_SetNeedsMinimized params{};
    params.ShouldBeMinimized = (bool)ShouldBeMinimized;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.CallFunc_NotEqual_BoolBool_ReturnValue = (bool)CallFunc_NotEqual_BoolBool_ReturnValue;
    params.K2Node_Select_Default = (int32_t)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureStatusSummary_C::OnSomethingChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureStatusSummary.UI_BP_CreatureStatusSummary_C.OnSomethingChanged"));
    struct Params_OnSomethingChanged {
    }; // Size: 0x0
    Params_OnSomethingChanged params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureStatusSummary_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureStatusSummary.UI_BP_CreatureStatusSummary_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureStatusSummary_C::ExecuteUbergraph_UI_BP_CreatureStatusSummary(int32_t EntryPoint, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsValid_ReturnValue, FTimespan CallFunc_MakeTimespan_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {}
