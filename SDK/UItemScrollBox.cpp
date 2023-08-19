#include "EDescendantScrollDestination.hpp"
#include "UFunction.hpp"
#include "UItemScrollBox.hpp"
#include "UScrollBox.hpp"
void UItemScrollBox::SetNavigationDestination(EDescendantScrollDestination NewNavigationDestination) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ItemScrollBox.SetNavigationDestination"));
    struct Params_SetNavigationDestination {
        EDescendantScrollDestination NewNavigationDestination; // 0x0
    }; // Size: 0x1
    Params_SetNavigationDestination params{};
    params.NewNavigationDestination = (EDescendantScrollDestination)NewNavigationDestination;
    ProcessEvent(func, &params);
}
UItemScrollBox* UItemScrollBox::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ItemScrollBox");
    return (UItemScrollBox*)res;
}
void UItemScrollBox::SetNavigationScrollPadding(float NewNavigationScrollPadding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ItemScrollBox.SetNavigationScrollPadding"));
    struct Params_SetNavigationScrollPadding {
        float NewNavigationScrollPadding; // 0x0
    }; // Size: 0x4
    Params_SetNavigationScrollPadding params{};
    params.NewNavigationScrollPadding = (float)NewNavigationScrollPadding;
    ProcessEvent(func, &params);
}
void UItemScrollBox::SetAlwaysShowScrollbarTrack(bool NewAlwaysShowScrollbarTrack) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ItemScrollBox.SetAlwaysShowScrollbarTrack"));
    struct Params_SetAlwaysShowScrollbarTrack {
        bool NewAlwaysShowScrollbarTrack; // 0x0
    }; // Size: 0x1
    Params_SetAlwaysShowScrollbarTrack params{};
    params.NewAlwaysShowScrollbarTrack = (bool)NewAlwaysShowScrollbarTrack;
    ProcessEvent(func, &params);
}
void UItemScrollBox::OnStickScroll(float AnalogVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ItemScrollBox.OnStickScroll"));
    struct Params_OnStickScroll {
        float AnalogVal; // 0x0
    }; // Size: 0x4
    Params_OnStickScroll params{};
    params.AnalogVal = (float)AnalogVal;
    ProcessEvent(func, &params);
}
