#include "UFunction.hpp"
#include "UPanelSlot.hpp"
#include "UPanelWidget.hpp"
#include "UWidget.hpp"
bool UPanelWidget::HasAnyChildren() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.PanelWidget.HasAnyChildren"));
    struct Params_HasAnyChildren {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasAnyChildren params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UPanelWidget* UPanelWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.PanelWidget");
    return (UPanelWidget*)res;
}
int32_t UPanelWidget::GetChildrenCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.PanelWidget.GetChildrenCount"));
    struct Params_GetChildrenCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetChildrenCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UPanelWidget::HasChild(UWidget* Content) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.PanelWidget.HasChild"));
    struct Params_HasChild {
        UWidget* Content; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasChild params{};
    params.Content = (UWidget*)Content;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPanelWidget::RemoveChildAt(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.PanelWidget.RemoveChildAt"));
    struct Params_RemoveChildAt {
        int32_t Index; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_RemoveChildAt params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UPanelWidget::GetChildIndex(UWidget* Content) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.PanelWidget.GetChildIndex"));
    struct Params_GetChildIndex {
        UWidget* Content; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetChildIndex params{};
    params.Content = (UWidget*)Content;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UPanelWidget::RemoveChild(UWidget* Content) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.PanelWidget.RemoveChild"));
    struct Params_RemoveChild {
        UWidget* Content; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveChild params{};
    params.Content = (UWidget*)Content;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UWidget* UPanelWidget::GetChildAt(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.PanelWidget.GetChildAt"));
    struct Params_GetChildAt {
        int32_t Index; // 0x0
        char pad_4[0x4];
        UWidget* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetChildAt params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
    return (UWidget*)params.ReturnValue;
}
TArray<UWidget*> UPanelWidget::GetAllChildren() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.PanelWidget.GetAllChildren"));
    struct Params_GetAllChildren {
        TArray<UWidget*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllChildren params{};
    ProcessEvent(func, &params);
    return (TArray<UWidget*>)params.ReturnValue;
}
void UPanelWidget::ClearChildren() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.PanelWidget.ClearChildren"));
    struct Params_ClearChildren {
    }; // Size: 0x0
    Params_ClearChildren params{};
    ProcessEvent(func, &params);
}
UPanelSlot* UPanelWidget::AddChild(UWidget* Content) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.PanelWidget.AddChild"));
    struct Params_AddChild {
        UWidget* Content; // 0x0
        UPanelSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_AddChild params{};
    params.Content = (UWidget*)Content;
    ProcessEvent(func, &params);
    return (UPanelSlot*)params.ReturnValue;
}
