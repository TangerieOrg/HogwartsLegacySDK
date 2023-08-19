#include "AActor.hpp"
#include "FMaterialSwapRules.hpp"
#include "UFunction.hpp"
#include "UMaterialSwapMeshState.hpp"
#include "UMaterialSwapMeshStatesBaseComponent.hpp"
#include "UMaterialSwapMeshStatesFireAndForgetComponent.hpp"
UMaterialSwapMeshStatesFireAndForgetComponent* UMaterialSwapMeshStatesFireAndForgetComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStatesFireAndForgetComponent");
    return (UMaterialSwapMeshStatesFireAndForgetComponent*)res;
}
void UMaterialSwapMeshStatesFireAndForgetComponent::RestartMeshStates(TArray<UMaterialSwapMeshState*>& MeshStates) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapMeshStatesFireAndForgetComponent.RestartMeshStates"));
    struct Params_RestartMeshStates {
        TArray<UMaterialSwapMeshState*> MeshStates; // 0x0
    }; // Size: 0x10
    Params_RestartMeshStates params{};
    params.MeshStates = (TArray<UMaterialSwapMeshState*>)MeshStates;
    ProcessEvent(func, &params);
    MeshStates = params.MeshStates;
}
UMaterialSwapMeshStatesFireAndForgetComponent* UMaterialSwapMeshStatesFireAndForgetComponent::CreateMeshStatesFireAndForgetComponentRules(AActor* Owner, AActor* Target, TArray<UMaterialSwapMeshState*>& MeshStates, FMaterialSwapRules UseRules, bool bAutoUpdate, FName Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapMeshStatesFireAndForgetComponent.CreateMeshStatesFireAndForgetComponentRules"));
    struct Params_CreateMeshStatesFireAndForgetComponentRules {
        AActor* Owner; // 0x0
        AActor* Target; // 0x8
        TArray<UMaterialSwapMeshState*> MeshStates; // 0x10
        FMaterialSwapRules UseRules; // 0x20
        bool bAutoUpdate; // 0x100
        char pad_101[0x3];
        FName Tag; // 0x104
        char pad_10c[0x4];
        UMaterialSwapMeshStatesFireAndForgetComponent* ReturnValue; // 0x110
    }; // Size: 0x118
    Params_CreateMeshStatesFireAndForgetComponentRules params{};
    params.Owner = (AActor*)Owner;
    params.Target = (AActor*)Target;
    params.MeshStates = (TArray<UMaterialSwapMeshState*>)MeshStates;
    params.UseRules = (FMaterialSwapRules)UseRules;
    params.bAutoUpdate = (bool)bAutoUpdate;
    params.Tag = (FName)Tag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MeshStates = params.MeshStates;
    return (UMaterialSwapMeshStatesFireAndForgetComponent*)params.ReturnValue;
}
UMaterialSwapMeshStatesFireAndForgetComponent* UMaterialSwapMeshStatesFireAndForgetComponent::CreateMeshStatesFireAndForgetComponent(AActor* Owner, AActor* Target, TArray<UMaterialSwapMeshState*>& MeshStates, bool bShouldIncludeChildren, bool bAutoUpdate, FName Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwapMeshStatesFireAndForgetComponent.CreateMeshStatesFireAndForgetComponent"));
    struct Params_CreateMeshStatesFireAndForgetComponent {
        AActor* Owner; // 0x0
        AActor* Target; // 0x8
        TArray<UMaterialSwapMeshState*> MeshStates; // 0x10
        bool bShouldIncludeChildren; // 0x20
        bool bAutoUpdate; // 0x21
        char pad_22[0x2];
        FName Tag; // 0x24
        char pad_2c[0x4];
        UMaterialSwapMeshStatesFireAndForgetComponent* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_CreateMeshStatesFireAndForgetComponent params{};
    params.Owner = (AActor*)Owner;
    params.Target = (AActor*)Target;
    params.MeshStates = (TArray<UMaterialSwapMeshState*>)MeshStates;
    params.bShouldIncludeChildren = (bool)bShouldIncludeChildren;
    params.bAutoUpdate = (bool)bAutoUpdate;
    params.Tag = (FName)Tag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MeshStates = params.MeshStates;
    return (UMaterialSwapMeshStatesFireAndForgetComponent*)params.ReturnValue;
}
