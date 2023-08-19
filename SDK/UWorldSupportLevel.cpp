#include "UFunction.hpp"
#include "UObject.hpp"
#include "UWorldSupportLevel.hpp"
UWorldSupportLevel* UWorldSupportLevel::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldSupportLevel");
    return (UWorldSupportLevel*)res;
}
void UWorldSupportLevel::OnHidden() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldSupportLevel.OnHidden"));
    struct Params_OnHidden {
    }; // Size: 0x0
    Params_OnHidden params{};
    ProcessEvent(func, &params);
}
void UWorldSupportLevel::OnUnload() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldSupportLevel.OnUnload"));
    struct Params_OnUnload {
    }; // Size: 0x0
    Params_OnUnload params{};
    ProcessEvent(func, &params);
}
void UWorldSupportLevel::OnShow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldSupportLevel.OnShow"));
    struct Params_OnShow {
    }; // Size: 0x0
    Params_OnShow params{};
    ProcessEvent(func, &params);
}
void UWorldSupportLevel::OnLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldSupportLevel.OnLoad"));
    struct Params_OnLoad {
    }; // Size: 0x0
    Params_OnLoad params{};
    ProcessEvent(func, &params);
}
