#include "FBox.hpp"
#include "FBoxSphereBounds.hpp"
#include "UFunction.hpp"
#include "UHierarchicalInstancedStaticMeshComponent.hpp"
#include "UInstancedStaticMeshComponent.hpp"
UHierarchicalInstancedStaticMeshComponent* UHierarchicalInstancedStaticMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.HierarchicalInstancedStaticMeshComponent");
    return (UHierarchicalInstancedStaticMeshComponent*)res;
}
bool UHierarchicalInstancedStaticMeshComponent::RemoveInstances(TArray<int32_t>& InstancesToRemove) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HierarchicalInstancedStaticMeshComponent.RemoveInstances"));
    struct Params_RemoveInstances {
        TArray<int32_t> InstancesToRemove; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_RemoveInstances params{};
    params.InstancesToRemove = (TArray<int32_t>)InstancesToRemove;
    ProcessEvent(func, &params);
    InstancesToRemove = params.InstancesToRemove;
    return (bool)params.ReturnValue;
}
