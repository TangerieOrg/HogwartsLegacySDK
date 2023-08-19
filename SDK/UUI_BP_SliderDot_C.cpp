#include "EHorizontalAlignment.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UScaleBoxSlot.hpp"
#include "UUI_BP_SliderDot_C.hpp"
#include "UUserWidget.hpp"
void UUI_BP_SliderDot_C::PreConstruct0(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SliderDot.UI_BP_SliderDot_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
UUI_BP_SliderDot_C* UUI_BP_SliderDot_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_SliderDot.UI_BP_SliderDot_C");
    return (UUI_BP_SliderDot_C*)res;
}
void UUI_BP_SliderDot_C::Construct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SliderDot.UI_BP_SliderDot_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SliderDot_C::ExecuteUbergraph_UI_BP_SliderDot(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, UScaleBoxSlot* CallFunc_SlotAsScaleBoxSlot_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SliderDot.UI_BP_SliderDot_C.ExecuteUbergraph_UI_BP_SliderDot"));
    struct Params_ExecuteUbergraph_UI_BP_SliderDot {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
        char pad_5[0x3];
        UScaleBoxSlot* CallFunc_SlotAsScaleBoxSlot_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_UI_BP_SliderDot params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.CallFunc_SlotAsScaleBoxSlot_ReturnValue = (UScaleBoxSlot*)CallFunc_SlotAsScaleBoxSlot_ReturnValue;
    ProcessEvent(func, &params);
}
