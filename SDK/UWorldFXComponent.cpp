#include "FTransform.hpp"
#include "FWorldFXFull.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UWorldFXComponent.hpp"
#include "UWorldFXComponentBase.hpp"
#include "UWorldFXRule.hpp"
UWorldFXComponent* UWorldFXComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXComponent");
    return (UWorldFXComponent*)res;
}
UWorldFXComponent* UWorldFXComponent::CreateWorldFX(USceneComponent* AttachTo, FWorldFXFull WorldFXSetup, FTransform RelativeTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXComponent.CreateWorldFX"));
    struct Params_CreateWorldFX {
        USceneComponent* AttachTo; // 0x0
        FWorldFXFull WorldFXSetup; // 0x8
        char pad_128[0x8];
        FTransform RelativeTransform; // 0x130
        UWorldFXComponent* ReturnValue; // 0x160
    }; // Size: 0x168
    Params_CreateWorldFX params{};
    params.AttachTo = (USceneComponent*)AttachTo;
    params.WorldFXSetup = (FWorldFXFull)WorldFXSetup;
    params.RelativeTransform = (FTransform)RelativeTransform;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UWorldFXComponent*)params.ReturnValue;
}
void UWorldFXComponent::SetSpawnAttached(bool bNewSpawnAttached) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXComponent.SetSpawnAttached"));
    struct Params_SetSpawnAttached {
        bool bNewSpawnAttached; // 0x0
    }; // Size: 0x1
    Params_SetSpawnAttached params{};
    params.bNewSpawnAttached = (bool)bNewSpawnAttached;
    ProcessEvent(func, &params);
}
void UWorldFXComponent::RefreshCascadeParameters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXComponent.RefreshCascadeParameters"));
    struct Params_RefreshCascadeParameters {
    }; // Size: 0x0
    Params_RefreshCascadeParameters params{};
    ProcessEvent(func, &params);
}
void UWorldFXComponent::ResetCascadeParameters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXComponent.ResetCascadeParameters"));
    struct Params_ResetCascadeParameters {
    }; // Size: 0x0
    Params_ResetCascadeParameters params{};
    ProcessEvent(func, &params);
}
void UWorldFXComponent::GetSpawnAttached(bool& bIsSpawnAttached) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXComponent.GetSpawnAttached"));
    struct Params_GetSpawnAttached {
        bool bIsSpawnAttached; // 0x0
    }; // Size: 0x1
    Params_GetSpawnAttached params{};
    params.bIsSpawnAttached = (bool)bIsSpawnAttached;
    ProcessEvent(func, &params);
    bIsSpawnAttached = params.bIsSpawnAttached;
}
