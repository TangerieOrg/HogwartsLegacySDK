#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UScaleBox.hpp"
#include "UUI_BP_NavBarBracket_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_NavBarBracket_C* UUI_BP_NavBarBracket_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/NavigationBars/UI_BP_NavBarBracket.UI_BP_NavBarBracket_C");
    return (UUI_BP_NavBarBracket_C*)res;
}
void UUI_BP_NavBarBracket_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_NavBarBracket.UI_BP_NavBarBracket_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_NavBarBracket_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_NavBarBracket.UI_BP_NavBarBracket_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NavBarBracket_C::ExecuteUbergraph_UI_BP_NavBarBracket(int32_t EntryPoint, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/NavigationBars/UI_BP_NavBarBracket.UI_BP_NavBarBracket_C.ExecuteUbergraph_UI_BP_NavBarBracket"));
    struct Params_ExecuteUbergraph_UI_BP_NavBarBracket {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_UI_BP_NavBarBracket params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
}
