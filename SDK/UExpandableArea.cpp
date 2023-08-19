#include "FExpandableAreaStyle.hpp"
#include "FMargin.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "UExpandableArea.hpp"
#include "UFunction.hpp"
#include "UWidget.hpp"
UExpandableArea* UExpandableArea::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.ExpandableArea");
    return (UExpandableArea*)res;
}
void UExpandableArea::SetIsExpanded_Animated(bool IsExpanded) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ExpandableArea.SetIsExpanded_Animated"));
    struct Params_SetIsExpanded_Animated {
        bool IsExpanded; // 0x0
    }; // Size: 0x1
    Params_SetIsExpanded_Animated params{};
    params.IsExpanded = (bool)IsExpanded;
    ProcessEvent(func, &params);
}
void UExpandableArea::SetIsExpanded(bool IsExpanded) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ExpandableArea.SetIsExpanded"));
    struct Params_SetIsExpanded {
        bool IsExpanded; // 0x0
    }; // Size: 0x1
    Params_SetIsExpanded params{};
    params.IsExpanded = (bool)IsExpanded;
    ProcessEvent(func, &params);
}
bool UExpandableArea::GetIsExpanded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ExpandableArea.GetIsExpanded"));
    struct Params_GetIsExpanded {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsExpanded params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
