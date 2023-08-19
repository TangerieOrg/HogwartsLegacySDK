#include "AActor.hpp"
#include "ATool.hpp"
#include "FBTCustomAction.hpp"
#include "UAkAudioEvent.hpp"
#include "UFunction.hpp"
#include "UToolEffectData.hpp"
#include "UToolRecord.hpp"
#include "UToolSetComponent.hpp"
void ATool::BlueprintDeactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.Tool.BlueprintDeactivate"));
    struct Params_BlueprintDeactivate {
    }; // Size: 0x0
    Params_BlueprintDeactivate params{};
    ProcessEvent(func, &params);
}
ATool* ATool::StaticClass() {
    static auto res = find_uobject("Class /Script/Toolset.Tool");
    return (ATool*)res;
}
AActor* ATool::GetUltimateOwner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.Tool.GetUltimateOwner"));
    struct Params_GetUltimateOwner {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetUltimateOwner params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
UToolRecord* ATool::GetToolRecord() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.Tool.GetToolRecord"));
    struct Params_GetToolRecord {
        UToolRecord* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetToolRecord params{};
    ProcessEvent(func, &params);
    return (UToolRecord*)params.ReturnValue;
}
void ATool::DeactivationComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.Tool.DeactivationComplete"));
    struct Params_DeactivationComplete {
    }; // Size: 0x0
    Params_DeactivationComplete params{};
    ProcessEvent(func, &params);
}
UToolSetComponent* ATool::GetOurToolSetComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.Tool.GetOurToolSetComponent"));
    struct Params_GetOurToolSetComponent {
        UToolSetComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOurToolSetComponent params{};
    ProcessEvent(func, &params);
    return (UToolSetComponent*)params.ReturnValue;
}
void ATool::DeactivationFx() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.Tool.DeactivationFx"));
    struct Params_DeactivationFx {
    }; // Size: 0x0
    Params_DeactivationFx params{};
    ProcessEvent(func, &params);
}
void ATool::BlueprintActivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.Tool.BlueprintActivate"));
    struct Params_BlueprintActivate {
    }; // Size: 0x0
    Params_BlueprintActivate params{};
    ProcessEvent(func, &params);
}
void ATool::ActivateFx() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.Tool.ActivateFx"));
    struct Params_ActivateFx {
    }; // Size: 0x0
    Params_ActivateFx params{};
    ProcessEvent(func, &params);
}
