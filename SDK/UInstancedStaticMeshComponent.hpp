#pragma once
#include <cstdint>
#include "EWISMCNumCustomDataFloat.hpp"
#include "FInstancedStaticMeshInstanceData.hpp"
#include "FInstancedStaticMeshMappingInfo.hpp"
#include "FTransform.hpp"
#include "UStaticMeshComponent.hpp"
struct FVector;
struct FBox;
#pragma pack(push, 1)
class UInstancedStaticMeshComponent : public UStaticMeshComponent {
public:
    TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x510
    EWISMCNumCustomDataFloat wNumPerInstanceCustomDataFloats; // 0x520
    char pad_521[0x3];
    int32_t NumCustomDataFloats; // 0x524
    TArray<float> PerInstanceSMCustomData; // 0x528
    int32_t InstancingRandomSeed; // 0x538
    int32_t InstanceStartCullDistance; // 0x53c
    int32_t InstanceEndCullDistance; // 0x540
    char pad_544[0x4];
    TArray<int32_t> InstanceReorderTable; // 0x548
    char pad_558[0x3c];
    int32_t NumPendingLightmaps; // 0x594
    TArray<FInstancedStaticMeshMappingInfo> CachedMappings; // 0x598
    char pad_5a8[0x10];
    bool bwForceUseGpuCulling; // 0x5b8
    char pad_5b9[0x7];
    static UInstancedStaticMeshComponent* StaticClass();
    bool UpdateInstanceTransform(int32_t InstanceIndex, FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    void ShrinkInstancesMemory();
    bool SetInstanceAlpha(int32_t InstanceIndex, float Alpha, bool bMarkRenderStateDirty);
    bool SetCustomDataValue(int32_t InstanceIndex, int32_t CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty);
    void SetCullDistances(int32_t StartCullDistance, int32_t EndCullDistance);
    bool RemoveInstance(int32_t InstanceIndex, bool bAllowShrink);
    bool GetInstanceTransform(int32_t InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace);
    TArray<int32_t> GetInstancesOverlappingSphere(FVector& Center, float Radius, bool bSphereInWorldSpace);
    TArray<int32_t> GetInstancesOverlappingBox(FBox& Box, bool bBoxInWorldSpace);
    int32_t GetInstanceCount();
    void ClearInstances();
    bool BatchUpdateInstancesTransforms(int32_t StartInstanceIndex, TArray<FTransform>& NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    bool BatchUpdateInstancesTransform(int32_t StartInstanceIndex, int32_t NumInstances, FTransform& NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    int32_t AddInstanceWorldSpace(FTransform& WorldTransform);
    TArray<int32_t> AddInstances(TArray<FTransform>& InstanceTransforms, bool bShouldReturnIndices);
    int32_t AddInstance(FTransform& InstanceTransform);
}; // Size: 0x5c0
#pragma pack(pop)
