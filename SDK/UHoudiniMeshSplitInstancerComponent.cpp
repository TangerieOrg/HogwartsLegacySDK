#include "UHoudiniMeshSplitInstancerComponent.hpp"
#include "UMaterialInterface.hpp"
#include "USceneComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
UHoudiniMeshSplitInstancerComponent* UHoudiniMeshSplitInstancerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent");
    return (UHoudiniMeshSplitInstancerComponent*)res;
}
