#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_ItemTooltipEffectDescription_C.hpp"
#include "UUserWidget.hpp"
void UUI_BP_ItemTooltipEffectDescription_C::Construct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/UI_BP_ItemTooltipEffectDescription.UI_BP_ItemTooltipEffectDescription_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ItemTooltipEffectDescription_C::PreConstruct0(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/UI_BP_ItemTooltipEffectDescription.UI_BP_ItemTooltipEffectDescription_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
UUI_BP_ItemTooltipEffectDescription_C* UUI_BP_ItemTooltipEffectDescription_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/UI_BP_ItemTooltipEffectDescription.UI_BP_ItemTooltipEffectDescription_C");
    return (UUI_BP_ItemTooltipEffectDescription_C*)res;
}
void UUI_BP_ItemTooltipEffectDescription_C::SetItemInfo(FString EffectTextKey, FString EffectPotionReplacementTextKey, bool PositiveEffect, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, bool Temp_bool_Variable, FSlateColor K2Node_Select_Default) {}
void UUI_BP_ItemTooltipEffectDescription_C::ExecuteUbergraph_UI_BP_ItemTooltipEffectDescription(int32_t EntryPoint, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/UI_BP_ItemTooltipEffectDescription.UI_BP_ItemTooltipEffectDescription_C.ExecuteUbergraph_UI_BP_ItemTooltipEffectDescription"));
    struct Params_ExecuteUbergraph_UI_BP_ItemTooltipEffectDescription {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_UI_BP_ItemTooltipEffectDescription params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
}
