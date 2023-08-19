#include "ESlateVisibility.hpp"
#include "FUserWidgetPool.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UListViewBase.hpp"
#include "UUserWidget.hpp"
#include "UWidget.hpp"
void UListViewBase::ScrollToTop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListViewBase.ScrollToTop"));
    struct Params_ScrollToTop {
    }; // Size: 0x0
    Params_ScrollToTop params{};
    ProcessEvent(func, &params);
}
UListViewBase* UListViewBase::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.ListViewBase");
    return (UListViewBase*)res;
}
void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListViewBase.SetWheelScrollMultiplier"));
    struct Params_SetWheelScrollMultiplier {
        float NewWheelScrollMultiplier; // 0x0
    }; // Size: 0x4
    Params_SetWheelScrollMultiplier params{};
    params.NewWheelScrollMultiplier = (float)NewWheelScrollMultiplier;
    ProcessEvent(func, &params);
}
void UListViewBase::RegenerateAllEntries() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListViewBase.RegenerateAllEntries"));
    struct Params_RegenerateAllEntries {
    }; // Size: 0x0
    Params_RegenerateAllEntries params{};
    ProcessEvent(func, &params);
}
void UListViewBase::SetScrollOffset(float InScrollOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListViewBase.SetScrollOffset"));
    struct Params_SetScrollOffset {
        float InScrollOffset; // 0x0
    }; // Size: 0x4
    Params_SetScrollOffset params{};
    params.InScrollOffset = (float)InScrollOffset;
    ProcessEvent(func, &params);
}
void UListViewBase::ScrollToBottom() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListViewBase.ScrollToBottom"));
    struct Params_ScrollToBottom {
    }; // Size: 0x0
    Params_ScrollToBottom params{};
    ProcessEvent(func, &params);
}
void UListViewBase::SetScrollBarVisibility(ESlateVisibility InVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListViewBase.SetScrollBarVisibility"));
    struct Params_SetScrollBarVisibility {
        ESlateVisibility InVisibility; // 0x0
    }; // Size: 0x1
    Params_SetScrollBarVisibility params{};
    params.InVisibility = (ESlateVisibility)InVisibility;
    ProcessEvent(func, &params);
}
TArray<UUserWidget*> UListViewBase::GetDisplayedEntryWidgets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListViewBase.GetDisplayedEntryWidgets"));
    struct Params_GetDisplayedEntryWidgets {
        TArray<UUserWidget*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetDisplayedEntryWidgets params{};
    ProcessEvent(func, &params);
    return (TArray<UUserWidget*>)params.ReturnValue;
}
void UListViewBase::RequestRefresh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ListViewBase.RequestRefresh"));
    struct Params_RequestRefresh {
    }; // Size: 0x0
    Params_RequestRefresh params{};
    ProcessEvent(func, &params);
}
