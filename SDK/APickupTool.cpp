#include "AItemTool.hpp"
#include "APickupTool.hpp"
#include "UFunction.hpp"
void APickupTool::OnDeactivateReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PickupTool.OnDeactivateReleased"));
    struct Params_OnDeactivateReleased {
    }; // Size: 0x0
    Params_OnDeactivateReleased params{};
    ProcessEvent(func, &params);
}
void APickupTool::OnUsePressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PickupTool.OnUsePressed"));
    struct Params_OnUsePressed {
    }; // Size: 0x0
    Params_OnUsePressed params{};
    ProcessEvent(func, &params);
}
APickupTool* APickupTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PickupTool");
    return (APickupTool*)res;
}
void APickupTool::OnUseReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PickupTool.OnUseReleased"));
    struct Params_OnUseReleased {
    }; // Size: 0x0
    Params_OnUseReleased params{};
    ProcessEvent(func, &params);
}
void APickupTool::OnDeactivatePressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PickupTool.OnDeactivatePressed"));
    struct Params_OnDeactivatePressed {
    }; // Size: 0x0
    Params_OnDeactivatePressed params{};
    ProcessEvent(func, &params);
}
void APickupTool::DeactivateTool() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PickupTool.DeactivateTool"));
    struct Params_DeactivateTool {
    }; // Size: 0x0
    Params_DeactivateTool params{};
    ProcessEvent(func, &params);
}
