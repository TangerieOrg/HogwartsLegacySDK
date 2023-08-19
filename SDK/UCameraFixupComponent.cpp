#include "AActor.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UCameraFixupComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UCameraFixupComponent* UCameraFixupComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupComponent");
    return (UCameraFixupComponent*)res;
}
void UCameraFixupComponent::LightRigBlueprintShowDebug(AActor* LightRigActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.CameraFixupComponent.LightRigBlueprintShowDebug"));
    struct Params_LightRigBlueprintShowDebug {
        AActor* LightRigActor; // 0x0
    }; // Size: 0x8
    Params_LightRigBlueprintShowDebug params{};
    params.LightRigActor = (AActor*)LightRigActor;
    ProcessEvent(func, &params);
}
FVector UCameraFixupComponent::GetTarget(bool& bOutHasValidTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.CameraFixupComponent.GetTarget"));
    struct Params_GetTarget {
        bool bOutHasValidTarget; // 0x0
        char pad_1[0x3];
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetTarget params{};
    params.bOutHasValidTarget = (bool)bOutHasValidTarget;
    ProcessEvent(func, &params);
    bOutHasValidTarget = params.bOutHasValidTarget;
    return (FVector)params.ReturnValue;
}
