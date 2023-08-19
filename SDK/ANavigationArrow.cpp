#include "AActor.hpp"
#include "ANavigationArrow.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
void ANavigationArrow::HideEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NavigationArrow.HideEvent"));
    struct Params_HideEvent {
    }; // Size: 0x0
    Params_HideEvent params{};
    ProcessEvent(func, &params);
}
ANavigationArrow* ANavigationArrow::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NavigationArrow");
    return (ANavigationArrow*)res;
}
void ANavigationArrow::ShowEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NavigationArrow.ShowEvent"));
    struct Params_ShowEvent {
    }; // Size: 0x0
    Params_ShowEvent params{};
    ProcessEvent(func, &params);
}
void ANavigationArrow::Show() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NavigationArrow.Show"));
    struct Params_Show {
    }; // Size: 0x0
    Params_Show params{};
    ProcessEvent(func, &params);
}
bool ANavigationArrow::IsListVisible() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NavigationArrow.IsListVisible"));
    struct Params_IsListVisible {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsListVisible params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ANavigationArrow::Hide() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NavigationArrow.Hide"));
    struct Params_Hide {
    }; // Size: 0x0
    Params_Hide params{};
    ProcessEvent(func, &params);
}
UMaterialInstanceDynamic* ANavigationArrow::GetMaterial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NavigationArrow.GetMaterial"));
    struct Params_GetMaterial {
        UMaterialInstanceDynamic* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMaterial params{};
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
