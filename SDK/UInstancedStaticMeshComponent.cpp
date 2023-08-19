#include "EWISMCNumCustomDataFloat.hpp"
#include "FBox.hpp"
#include "FInstancedStaticMeshInstanceData.hpp"
#include "FInstancedStaticMeshMappingInfo.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "UStaticMeshComponent.hpp"
bool UInstancedStaticMeshComponent::GetInstanceTransform(int32_t InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InstancedStaticMeshComponent.GetInstanceTransform"));
    struct Params_GetInstanceTransform {
        int32_t InstanceIndex; // 0x0
        char pad_4[0xc];
        FTransform OutInstanceTransform; // 0x10
        bool bWorldSpace; // 0x40
        bool ReturnValue; // 0x41
    }; // Size: 0x42
    Params_GetInstanceTransform params{};
    params.InstanceIndex = (int32_t)InstanceIndex;
    params.OutInstanceTransform = (FTransform)OutInstanceTransform;
    params.bWorldSpace = (bool)bWorldSpace;
    ProcessEvent(func, &params);
    OutInstanceTransform = params.OutInstanceTransform;
    return (bool)params.ReturnValue;
}
UInstancedStaticMeshComponent* UInstancedStaticMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InstancedStaticMeshComponent");
    return (UInstancedStaticMeshComponent*)res;
}
bool UInstancedStaticMeshComponent::BatchUpdateInstancesTransform(int32_t StartInstanceIndex, int32_t NumInstances, FTransform& NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InstancedStaticMeshComponent.BatchUpdateInstancesTransform"));
    struct Params_BatchUpdateInstancesTransform {
        int32_t StartInstanceIndex; // 0x0
        int32_t NumInstances; // 0x4
        char pad_8[0x8];
        FTransform NewInstancesTransform; // 0x10
        bool bWorldSpace; // 0x40
        bool bMarkRenderStateDirty; // 0x41
        bool bTeleport; // 0x42
        bool ReturnValue; // 0x43
    }; // Size: 0x44
    Params_BatchUpdateInstancesTransform params{};
    params.StartInstanceIndex = (int32_t)StartInstanceIndex;
    params.NumInstances = (int32_t)NumInstances;
    params.NewInstancesTransform = (FTransform)NewInstancesTransform;
    params.bWorldSpace = (bool)bWorldSpace;
    params.bMarkRenderStateDirty = (bool)bMarkRenderStateDirty;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    NewInstancesTransform = params.NewInstancesTransform;
    return (bool)params.ReturnValue;
}
bool UInstancedStaticMeshComponent::UpdateInstanceTransform(int32_t InstanceIndex, FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InstancedStaticMeshComponent.UpdateInstanceTransform"));
    struct Params_UpdateInstanceTransform {
        int32_t InstanceIndex; // 0x0
        char pad_4[0xc];
        FTransform NewInstanceTransform; // 0x10
        bool bWorldSpace; // 0x40
        bool bMarkRenderStateDirty; // 0x41
        bool bTeleport; // 0x42
        bool ReturnValue; // 0x43
    }; // Size: 0x44
    Params_UpdateInstanceTransform params{};
    params.InstanceIndex = (int32_t)InstanceIndex;
    params.NewInstanceTransform = (FTransform)NewInstanceTransform;
    params.bWorldSpace = (bool)bWorldSpace;
    params.bMarkRenderStateDirty = (bool)bMarkRenderStateDirty;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    NewInstanceTransform = params.NewInstanceTransform;
    return (bool)params.ReturnValue;
}
bool UInstancedStaticMeshComponent::RemoveInstance(int32_t InstanceIndex, bool bAllowShrink) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InstancedStaticMeshComponent.RemoveInstance"));
    struct Params_RemoveInstance {
        int32_t InstanceIndex; // 0x0
        bool bAllowShrink; // 0x4
        bool ReturnValue; // 0x5
    }; // Size: 0x6
    Params_RemoveInstance params{};
    params.InstanceIndex = (int32_t)InstanceIndex;
    params.bAllowShrink = (bool)bAllowShrink;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UInstancedStaticMeshComponent::SetCullDistances(int32_t StartCullDistance, int32_t EndCullDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InstancedStaticMeshComponent.SetCullDistances"));
    struct Params_SetCullDistances {
        int32_t StartCullDistance; // 0x0
        int32_t EndCullDistance; // 0x4
    }; // Size: 0x8
    Params_SetCullDistances params{};
    params.StartCullDistance = (int32_t)StartCullDistance;
    params.EndCullDistance = (int32_t)EndCullDistance;
    ProcessEvent(func, &params);
}
void UInstancedStaticMeshComponent::ShrinkInstancesMemory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InstancedStaticMeshComponent.ShrinkInstancesMemory"));
    struct Params_ShrinkInstancesMemory {
    }; // Size: 0x0
    Params_ShrinkInstancesMemory params{};
    ProcessEvent(func, &params);
}
bool UInstancedStaticMeshComponent::SetInstanceAlpha(int32_t InstanceIndex, float Alpha, bool bMarkRenderStateDirty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InstancedStaticMeshComponent.SetInstanceAlpha"));
    struct Params_SetInstanceAlpha {
        int32_t InstanceIndex; // 0x0
        float Alpha; // 0x4
        bool bMarkRenderStateDirty; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_SetInstanceAlpha params{};
    params.InstanceIndex = (int32_t)InstanceIndex;
    params.Alpha = (float)Alpha;
    params.bMarkRenderStateDirty = (bool)bMarkRenderStateDirty;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UInstancedStaticMeshComponent::SetCustomDataValue(int32_t InstanceIndex, int32_t CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InstancedStaticMeshComponent.SetCustomDataValue"));
    struct Params_SetCustomDataValue {
        int32_t InstanceIndex; // 0x0
        int32_t CustomDataIndex; // 0x4
        float CustomDataValue; // 0x8
        bool bMarkRenderStateDirty; // 0xc
        bool ReturnValue; // 0xd
    }; // Size: 0xe
    Params_SetCustomDataValue params{};
    params.InstanceIndex = (int32_t)InstanceIndex;
    params.CustomDataIndex = (int32_t)CustomDataIndex;
    params.CustomDataValue = (float)CustomDataValue;
    params.bMarkRenderStateDirty = (bool)bMarkRenderStateDirty;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<int32_t> UInstancedStaticMeshComponent::GetInstancesOverlappingSphere(FVector& Center, float Radius, bool bSphereInWorldSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InstancedStaticMeshComponent.GetInstancesOverlappingSphere"));
    struct Params_GetInstancesOverlappingSphere {
        FVector Center; // 0x0
        float Radius; // 0xc
        bool bSphereInWorldSpace; // 0x10
        char pad_11[0x7];
        TArray<int32_t> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetInstancesOverlappingSphere params{};
    params.Center = (FVector)Center;
    params.Radius = (float)Radius;
    params.bSphereInWorldSpace = (bool)bSphereInWorldSpace;
    ProcessEvent(func, &params);
    Center = params.Center;
    return (TArray<int32_t>)params.ReturnValue;
}
TArray<int32_t> UInstancedStaticMeshComponent::AddInstances(TArray<FTransform>& InstanceTransforms, bool bShouldReturnIndices) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InstancedStaticMeshComponent.AddInstances"));
    struct Params_AddInstances {
        TArray<FTransform> InstanceTransforms; // 0x0
        bool bShouldReturnIndices; // 0x10
        char pad_11[0x7];
        TArray<int32_t> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_AddInstances params{};
    params.InstanceTransforms = (TArray<FTransform>)InstanceTransforms;
    params.bShouldReturnIndices = (bool)bShouldReturnIndices;
    ProcessEvent(func, &params);
    InstanceTransforms = params.InstanceTransforms;
    return (TArray<int32_t>)params.ReturnValue;
}
TArray<int32_t> UInstancedStaticMeshComponent::GetInstancesOverlappingBox(FBox& Box, bool bBoxInWorldSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InstancedStaticMeshComponent.GetInstancesOverlappingBox"));
    struct Params_GetInstancesOverlappingBox {
        FBox Box; // 0x0
        bool bBoxInWorldSpace; // 0x1c
        char pad_1d[0x3];
        TArray<int32_t> ReturnValue; // 0x20
    }; // Size: 0x30
    Params_GetInstancesOverlappingBox params{};
    params.Box = (FBox)Box;
    params.bBoxInWorldSpace = (bool)bBoxInWorldSpace;
    ProcessEvent(func, &params);
    Box = params.Box;
    return (TArray<int32_t>)params.ReturnValue;
}
int32_t UInstancedStaticMeshComponent::GetInstanceCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InstancedStaticMeshComponent.GetInstanceCount"));
    struct Params_GetInstanceCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetInstanceCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UInstancedStaticMeshComponent::ClearInstances() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InstancedStaticMeshComponent.ClearInstances"));
    struct Params_ClearInstances {
    }; // Size: 0x0
    Params_ClearInstances params{};
    ProcessEvent(func, &params);
}
bool UInstancedStaticMeshComponent::BatchUpdateInstancesTransforms(int32_t StartInstanceIndex, TArray<FTransform>& NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InstancedStaticMeshComponent.BatchUpdateInstancesTransforms"));
    struct Params_BatchUpdateInstancesTransforms {
        int32_t StartInstanceIndex; // 0x0
        char pad_4[0x4];
        TArray<FTransform> NewInstancesTransforms; // 0x8
        bool bWorldSpace; // 0x18
        bool bMarkRenderStateDirty; // 0x19
        bool bTeleport; // 0x1a
        bool ReturnValue; // 0x1b
    }; // Size: 0x1c
    Params_BatchUpdateInstancesTransforms params{};
    params.StartInstanceIndex = (int32_t)StartInstanceIndex;
    params.NewInstancesTransforms = (TArray<FTransform>)NewInstancesTransforms;
    params.bWorldSpace = (bool)bWorldSpace;
    params.bMarkRenderStateDirty = (bool)bMarkRenderStateDirty;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    NewInstancesTransforms = params.NewInstancesTransforms;
    return (bool)params.ReturnValue;
}
int32_t UInstancedStaticMeshComponent::AddInstanceWorldSpace(FTransform& WorldTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InstancedStaticMeshComponent.AddInstanceWorldSpace"));
    struct Params_AddInstanceWorldSpace {
        FTransform WorldTransform; // 0x0
        int32_t ReturnValue; // 0x30
    }; // Size: 0x34
    Params_AddInstanceWorldSpace params{};
    params.WorldTransform = (FTransform)WorldTransform;
    ProcessEvent(func, &params);
    WorldTransform = params.WorldTransform;
    return (int32_t)params.ReturnValue;
}
int32_t UInstancedStaticMeshComponent::AddInstance(FTransform& InstanceTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InstancedStaticMeshComponent.AddInstance"));
    struct Params_AddInstance {
        FTransform InstanceTransform; // 0x0
        int32_t ReturnValue; // 0x30
    }; // Size: 0x34
    Params_AddInstance params{};
    params.InstanceTransform = (FTransform)InstanceTransform;
    ProcessEvent(func, &params);
    InstanceTransform = params.InstanceTransform;
    return (int32_t)params.ReturnValue;
}
