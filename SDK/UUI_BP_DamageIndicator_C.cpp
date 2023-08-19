#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_DamageIndicator_C.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_DamageIndicator_C::ExecuteUbergraph_UI_BP_DamageIndicator(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_DamageIndicator.UI_BP_DamageIndicator_C.ExecuteUbergraph_UI_BP_DamageIndicator"));
    struct Params_ExecuteUbergraph_UI_BP_DamageIndicator {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_UI_BP_DamageIndicator params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
void UUI_BP_DamageIndicator_C::SetAmount(int32_t Amount, bool IsVulnerableDamage, FLinearColor DamageColor, int32_t CallFunc_Abs_Int_ReturnValue) {}
UUI_BP_DamageIndicator_C* UUI_BP_DamageIndicator_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Actor/UI_BP_DamageIndicator.UI_BP_DamageIndicator_C");
    return (UUI_BP_DamageIndicator_C*)res;
}
void UUI_BP_DamageIndicator_C::WidgetAnimationEvt_Damage_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_DamageIndicator.UI_BP_DamageIndicator_C.WidgetAnimationEvt_Damage_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_Damage_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_Damage_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
