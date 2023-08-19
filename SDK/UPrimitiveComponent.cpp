#include "AActor.hpp"
#include "APawn.hpp"
#include "ECanBeCharacterBase.hpp"
#include "ECollisionChannel.hpp"
#include "ECollisionEnabled\Type.hpp"
#include "ECollisionResponse.hpp"
#include "EDOFMode\Type.hpp"
#include "EHasCustomNavigableGeometry\Type.hpp"
#include "EIndirectLightingCacheQuality.hpp"
#include "ELightmapType.hpp"
#include "ERadialImpulseFalloff.hpp"
#include "ERendererStencilMask.hpp"
#include "ERuntimeVirtualTextureMainPassType.hpp"
#include "ESceneDepthPriorityGroup.hpp"
#include "EVisibilityGroupMask.hpp"
#include "FBodyInstance.hpp"
#include "FBox.hpp"
#include "FCustomPrimitiveData.hpp"
#include "FHitResult.hpp"
#include "FLightingChannels.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVector4.hpp"
#include "FWalkableSlopeOverride.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "URuntimeVirtualTexture.hpp"
#include "USceneComponent.hpp"
void UPrimitiveComponent::SetCustomDepthStencilWriteMask(ERendererStencilMask WriteMaskBit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask"));
    struct Params_SetCustomDepthStencilWriteMask {
        ERendererStencilMask WriteMaskBit; // 0x0
    }; // Size: 0x1
    Params_SetCustomDepthStencilWriteMask params{};
    params.WriteMaskBit = (ERendererStencilMask)WriteMaskBit;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetVisibleInProbesSecondBounce(bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetVisibleInProbesSecondBounce"));
    struct Params_SetVisibleInProbesSecondBounce {
        bool bValue; // 0x0
    }; // Size: 0x1
    Params_SetVisibleInProbesSecondBounce params{};
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
bool UPrimitiveComponent::WasRecentlyRendered(float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.WasRecentlyRendered"));
    struct Params_WasRecentlyRendered {
        float Tolerance; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_WasRecentlyRendered params{};
    params.Tolerance = (float)Tolerance;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPrimitiveComponent::SetCustomPrimitiveDataVector4(int32_t DataIndex, FVector4 Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetCustomPrimitiveDataVector4"));
    struct Params_SetCustomPrimitiveDataVector4 {
        int32_t DataIndex; // 0x0
        char pad_4[0xc];
        FVector4 Value; // 0x10
    }; // Size: 0x20
    Params_SetCustomPrimitiveDataVector4 params{};
    params.DataIndex = (int32_t)DataIndex;
    params.Value = (FVector4)Value;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians"));
    struct Params_SetPhysicsMaxAngularVelocityInRadians {
        float NewMaxAngVel; // 0x0
        bool bAddToCurrent; // 0x4
        char pad_5[0x3];
        FName BoneName; // 0x8
    }; // Size: 0x10
    Params_SetPhysicsMaxAngularVelocityInRadians params{};
    params.NewMaxAngVel = (float)NewMaxAngVel;
    params.bAddToCurrent = (bool)bAddToCurrent;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetRenderCustomDepth(bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetRenderCustomDepth"));
    struct Params_SetRenderCustomDepth {
        bool bValue; // 0x0
    }; // Size: 0x1
    Params_SetRenderCustomDepth params{};
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
UPrimitiveComponent* UPrimitiveComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PrimitiveComponent");
    return (UPrimitiveComponent*)res;
}
void UPrimitiveComponent::SetLinearDamping(float InDamping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetLinearDamping"));
    struct Params_SetLinearDamping {
        float InDamping; // 0x0
    }; // Size: 0x4
    Params_SetLinearDamping params{};
    params.InDamping = (float)InDamping;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetVisibleInSceneCaptureOnly(bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetVisibleInSceneCaptureOnly"));
    struct Params_SetVisibleInSceneCaptureOnly {
        bool bValue; // 0x0
    }; // Size: 0x1
    Params_SetVisibleInSceneCaptureOnly params{};
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::WakeRigidBody(FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.WakeRigidBody"));
    struct Params_WakeRigidBody {
        FName BoneName; // 0x0
    }; // Size: 0x8
    Params_WakeRigidBody params{};
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::WakeAllRigidBodies() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.WakeAllRigidBodies"));
    struct Params_WakeAllRigidBodies {
    }; // Size: 0x0
    Params_WakeAllRigidBodies params{};
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetWalkableSlopeOverride(FWalkableSlopeOverride& NewOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetWalkableSlopeOverride"));
    struct Params_SetWalkableSlopeOverride {
        FWalkableSlopeOverride NewOverride; // 0x0
    }; // Size: 0x10
    Params_SetWalkableSlopeOverride params{};
    params.NewOverride = (FWalkableSlopeOverride)NewOverride;
    ProcessEvent(func, &params);
    NewOverride = params.NewOverride;
}
void UPrimitiveComponent::SetMaterial(int32_t ElementIndex, UMaterialInterface* Material) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetMaterial"));
    struct Params_SetMaterial {
        int32_t ElementIndex; // 0x0
        char pad_4[0x4];
        UMaterialInterface* Material; // 0x8
    }; // Size: 0x10
    Params_SetMaterial params{};
    params.ElementIndex = (int32_t)ElementIndex;
    params.Material = (UMaterialInterface*)Material;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::PutRigidBodyToSleep(FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.PutRigidBodyToSleep"));
    struct Params_PutRigidBodyToSleep {
        FName BoneName; // 0x0
    }; // Size: 0x8
    Params_PutRigidBodyToSleep params{};
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetVisibleInProbesFirstBounce(bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetVisibleInProbesFirstBounce"));
    struct Params_SetVisibleInProbesFirstBounce {
        bool bValue; // 0x0
    }; // Size: 0x1
    Params_SetVisibleInProbesFirstBounce params{};
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
ECollisionResponse UPrimitiveComponent::GetCollisionResponseToChannel(ECollisionChannel Channel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetCollisionResponseToChannel"));
    struct Params_GetCollisionResponseToChannel {
        ECollisionChannel Channel; // 0x0
        ECollisionResponse ReturnValue; // 0x1
    }; // Size: 0x2
    Params_GetCollisionResponseToChannel params{};
    params.Channel = (ECollisionChannel)Channel;
    ProcessEvent(func, &params);
    return (ECollisionResponse)params.ReturnValue;
}
void UPrimitiveComponent::SetVisibleInBackfaceCapture(bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetVisibleInBackfaceCapture"));
    struct Params_SetVisibleInBackfaceCapture {
        bool bValue; // 0x0
    }; // Size: 0x1
    Params_SetVisibleInBackfaceCapture params{};
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetUseCCD(bool InUseCCD, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetUseCCD"));
    struct Params_SetUseCCD {
        bool InUseCCD; // 0x0
        char pad_1[0x3];
        FName BoneName; // 0x4
    }; // Size: 0xc
    Params_SetUseCCD params{};
    params.InUseCCD = (bool)InUseCCD;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetTranslucentSortPriority(int32_t NewTranslucentSortPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetTranslucentSortPriority"));
    struct Params_SetTranslucentSortPriority {
        int32_t NewTranslucentSortPriority; // 0x0
    }; // Size: 0x4
    Params_SetTranslucentSortPriority params{};
    params.NewTranslucentSortPriority = (int32_t)NewTranslucentSortPriority;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetCollisionResponseToAllChannels(ECollisionResponse NewResponse, bool bUpdateOverlaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetCollisionResponseToAllChannels"));
    struct Params_SetCollisionResponseToAllChannels {
        ECollisionResponse NewResponse; // 0x0
        bool bUpdateOverlaps; // 0x1
    }; // Size: 0x2
    Params_SetCollisionResponseToAllChannels params{};
    params.NewResponse = (ECollisionResponse)NewResponse;
    params.bUpdateOverlaps = (bool)bUpdateOverlaps;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetTranslucencySortDistanceOffset(float NewTranslucencySortDistanceOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetTranslucencySortDistanceOffset"));
    struct Params_SetTranslucencySortDistanceOffset {
        float NewTranslucencySortDistanceOffset; // 0x0
    }; // Size: 0x4
    Params_SetTranslucencySortDistanceOffset params{};
    params.NewTranslucencySortDistanceOffset = (float)NewTranslucencySortDistanceOffset;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetGenerateOverlapEvents(bool bInGenerateOverlapEvents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetGenerateOverlapEvents"));
    struct Params_SetGenerateOverlapEvents {
        bool bInGenerateOverlapEvents; // 0x0
    }; // Size: 0x1
    Params_SetGenerateOverlapEvents params{};
    params.bInGenerateOverlapEvents = (bool)bInGenerateOverlapEvents;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetIsLightProbesBlocker(bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetIsLightProbesBlocker"));
    struct Params_SetIsLightProbesBlocker {
        bool bValue; // 0x0
    }; // Size: 0x1
    Params_SetIsLightProbesBlocker params{};
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights"));
    struct Params_SetSingleSampleShadowFromStationaryLights {
        bool bNewSingleSampleShadowFromStationaryLights; // 0x0
    }; // Size: 0x1
    Params_SetSingleSampleShadowFromStationaryLights params{};
    params.bNewSingleSampleShadowFromStationaryLights = (bool)bNewSingleSampleShadowFromStationaryLights;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetSimulatePhysics(bool bSimulate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetSimulatePhysics"));
    struct Params_SetSimulatePhysics {
        bool bSimulate; // 0x0
    }; // Size: 0x1
    Params_SetSimulatePhysics params{};
    params.bSimulate = (bool)bSimulate;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetDefaultCustomPrimitiveDataVector4(int32_t DataIndex, FVector4 Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataVector4"));
    struct Params_SetDefaultCustomPrimitiveDataVector4 {
        int32_t DataIndex; // 0x0
        char pad_4[0xc];
        FVector4 Value; // 0x10
    }; // Size: 0x20
    Params_SetDefaultCustomPrimitiveDataVector4 params{};
    params.DataIndex = (int32_t)DataIndex;
    params.Value = (FVector4)Value;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetRenderInMainPass(bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetRenderInMainPass"));
    struct Params_SetRenderInMainPass {
        bool bValue; // 0x0
    }; // Size: 0x1
    Params_SetRenderInMainPass params{};
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
UMaterialInstanceDynamic* UPrimitiveComponent::CreateDynamicMaterialInstance(int32_t ElementIndex, UMaterialInterface* SourceMaterial, FName OptionalName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.CreateDynamicMaterialInstance"));
    struct Params_CreateDynamicMaterialInstance {
        int32_t ElementIndex; // 0x0
        char pad_4[0x4];
        UMaterialInterface* SourceMaterial; // 0x8
        FName OptionalName; // 0x10
        UMaterialInstanceDynamic* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_CreateDynamicMaterialInstance params{};
    params.ElementIndex = (int32_t)ElementIndex;
    params.SourceMaterial = (UMaterialInterface*)SourceMaterial;
    params.OptionalName = (FName)OptionalName;
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
void UPrimitiveComponent::SetDefaultCustomPrimitiveDataVector3(int32_t DataIndex, FVector Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataVector3"));
    struct Params_SetDefaultCustomPrimitiveDataVector3 {
        int32_t DataIndex; // 0x0
        FVector Value; // 0x4
    }; // Size: 0x10
    Params_SetDefaultCustomPrimitiveDataVector3 params{};
    params.DataIndex = (int32_t)DataIndex;
    params.Value = (FVector)Value;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetHiddenInSceneCapture(bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetHiddenInSceneCapture"));
    struct Params_SetHiddenInSceneCapture {
        bool bValue; // 0x0
    }; // Size: 0x1
    Params_SetHiddenInSceneCapture params{};
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetReceivesWeatherDecals(bool bNewReceivesWeatherDecals) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetReceivesWeatherDecals"));
    struct Params_SetReceivesWeatherDecals {
        bool bNewReceivesWeatherDecals; // 0x0
    }; // Size: 0x1
    Params_SetReceivesWeatherDecals params{};
    params.bNewReceivesWeatherDecals = (bool)bNewReceivesWeatherDecals;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetReceivesDecals(bool bNewReceivesDecals) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetReceivesDecals"));
    struct Params_SetReceivesDecals {
        bool bNewReceivesDecals; // 0x0
    }; // Size: 0x1
    Params_SetReceivesDecals params{};
    params.bNewReceivesDecals = (bool)bNewReceivesDecals;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetPhysMaterialOverride(UPhysicalMaterial* NewPhysMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetPhysMaterialOverride"));
    struct Params_SetPhysMaterialOverride {
        UPhysicalMaterial* NewPhysMaterial; // 0x0
    }; // Size: 0x8
    Params_SetPhysMaterialOverride params{};
    params.NewPhysMaterial = (UPhysicalMaterial*)NewPhysMaterial;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetConstraintMode(EDOFMode::Type ConstraintMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetConstraintMode"));
    struct Params_SetConstraintMode {
        EDOFMode::Type ConstraintMode; // 0x0
    }; // Size: 0x1
    Params_SetConstraintMode params{};
    params.ConstraintMode = (EDOFMode::Type)ConstraintMode;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees"));
    struct Params_SetPhysicsMaxAngularVelocityInDegrees {
        float NewMaxAngVel; // 0x0
        bool bAddToCurrent; // 0x4
        char pad_5[0x3];
        FName BoneName; // 0x8
    }; // Size: 0x10
    Params_SetPhysicsMaxAngularVelocityInDegrees params{};
    params.NewMaxAngVel = (float)NewMaxAngVel;
    params.bAddToCurrent = (bool)bAddToCurrent;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetCastInsetShadow(bool bInCastInsetShadow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetCastInsetShadow"));
    struct Params_SetCastInsetShadow {
        bool bInCastInsetShadow; // 0x0
    }; // Size: 0x1
    Params_SetCastInsetShadow params{};
    params.bInCastInsetShadow = (bool)bInCastInsetShadow;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity"));
    struct Params_SetPhysicsMaxAngularVelocity {
        float NewMaxAngVel; // 0x0
        bool bAddToCurrent; // 0x4
        char pad_5[0x3];
        FName BoneName; // 0x8
    }; // Size: 0x10
    Params_SetPhysicsMaxAngularVelocity params{};
    params.NewMaxAngVel = (float)NewMaxAngVel;
    params.bAddToCurrent = (bool)bAddToCurrent;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetCollisionEnabled(ECollisionEnabled::Type NewType, bool bUpdateOverlaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetCollisionEnabled"));
    struct Params_SetCollisionEnabled {
        ECollisionEnabled::Type NewType; // 0x0
        bool bUpdateOverlaps; // 0x1
    }; // Size: 0x2
    Params_SetCollisionEnabled params{};
    params.NewType = (ECollisionEnabled::Type)NewType;
    params.bUpdateOverlaps = (bool)bUpdateOverlaps;
    ProcessEvent(func, &params);
}
FWalkableSlopeOverride UPrimitiveComponent::GetWalkableSlopeOverride() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetWalkableSlopeOverride"));
    struct Params_GetWalkableSlopeOverride {
        FWalkableSlopeOverride ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetWalkableSlopeOverride params{};
    ProcessEvent(func, &params);
    return (FWalkableSlopeOverride)params.ReturnValue;
}
void UPrimitiveComponent::SetPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetPhysicsLinearVelocity"));
    struct Params_SetPhysicsLinearVelocity {
        FVector NewVel; // 0x0
        bool bAddToCurrent; // 0xc
        char pad_d[0x3];
        FName BoneName; // 0x10
    }; // Size: 0x18
    Params_SetPhysicsLinearVelocity params{};
    params.NewVel = (FVector)NewVel;
    params.bAddToCurrent = (bool)bAddToCurrent;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetPhysicsAngularVelocityInRadians(FVector NewAngVel, bool bAddToCurrent, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians"));
    struct Params_SetPhysicsAngularVelocityInRadians {
        FVector NewAngVel; // 0x0
        bool bAddToCurrent; // 0xc
        char pad_d[0x3];
        FName BoneName; // 0x10
    }; // Size: 0x18
    Params_SetPhysicsAngularVelocityInRadians params{};
    params.NewAngVel = (FVector)NewAngVel;
    params.bAddToCurrent = (bool)bAddToCurrent;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetEnableGravity(bool bGravityEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetEnableGravity"));
    struct Params_SetEnableGravity {
        bool bGravityEnabled; // 0x0
    }; // Size: 0x1
    Params_SetEnableGravity params{};
    params.bGravityEnabled = (bool)bGravityEnabled;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetPhysicsAngularVelocityInDegrees(FVector NewAngVel, bool bAddToCurrent, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees"));
    struct Params_SetPhysicsAngularVelocityInDegrees {
        FVector NewAngVel; // 0x0
        bool bAddToCurrent; // 0xc
        char pad_d[0x3];
        FName BoneName; // 0x10
    }; // Size: 0x18
    Params_SetPhysicsAngularVelocityInDegrees params{};
    params.NewAngVel = (FVector)NewAngVel;
    params.bAddToCurrent = (bool)bAddToCurrent;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetDefaultCustomPrimitiveDataVector2(int32_t DataIndex, FVector2D Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataVector2"));
    struct Params_SetDefaultCustomPrimitiveDataVector2 {
        int32_t DataIndex; // 0x0
        FVector2D Value; // 0x4
    }; // Size: 0xc
    Params_SetDefaultCustomPrimitiveDataVector2 params{};
    params.DataIndex = (int32_t)DataIndex;
    params.Value = (FVector2D)Value;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetPhysicsAngularVelocity(FVector NewAngVel, bool bAddToCurrent, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetPhysicsAngularVelocity"));
    struct Params_SetPhysicsAngularVelocity {
        FVector NewAngVel; // 0x0
        bool bAddToCurrent; // 0xc
        char pad_d[0x3];
        FName BoneName; // 0x10
    }; // Size: 0x18
    Params_SetPhysicsAngularVelocity params{};
    params.NewAngVel = (FVector)NewAngVel;
    params.bAddToCurrent = (bool)bAddToCurrent;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetOwnerNoSee(bool bNewOwnerNoSee) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetOwnerNoSee"));
    struct Params_SetOwnerNoSee {
        bool bNewOwnerNoSee; // 0x0
    }; // Size: 0x1
    Params_SetOwnerNoSee params{};
    params.bNewOwnerNoSee = (bool)bNewOwnerNoSee;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetOnlyOwnerSee(bool bNewOnlyOwnerSee) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetOnlyOwnerSee"));
    struct Params_SetOnlyOwnerSee {
        bool bNewOnlyOwnerSee; // 0x0
    }; // Size: 0x1
    Params_SetOnlyOwnerSee params{};
    params.bNewOnlyOwnerSee = (bool)bNewOnlyOwnerSee;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetNotifyRigidBodyCollision"));
    struct Params_SetNotifyRigidBodyCollision {
        bool bNewNotifyRigidBodyCollision; // 0x0
    }; // Size: 0x1
    Params_SetNotifyRigidBodyCollision params{};
    params.bNewNotifyRigidBodyCollision = (bool)bNewNotifyRigidBodyCollision;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetMaterialByName(FName MaterialSlotName, UMaterialInterface* Material) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetMaterialByName"));
    struct Params_SetMaterialByName {
        FName MaterialSlotName; // 0x0
        UMaterialInterface* Material; // 0x8
    }; // Size: 0x10
    Params_SetMaterialByName params{};
    params.MaterialSlotName = (FName)MaterialSlotName;
    params.Material = (UMaterialInterface*)Material;
    ProcessEvent(func, &params);
}
bool UPrimitiveComponent::CanCharacterStepUp(APawn* Pawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.CanCharacterStepUp"));
    struct Params_CanCharacterStepUp {
        APawn* Pawn; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CanCharacterStepUp params{};
    params.Pawn = (APawn*)Pawn;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPrimitiveComponent::SetMassScale(FName BoneName, float InMassScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetMassScale"));
    struct Params_SetMassScale {
        FName BoneName; // 0x0
        float InMassScale; // 0x8
    }; // Size: 0xc
    Params_SetMassScale params{};
    params.BoneName = (FName)BoneName;
    params.InMassScale = (float)InMassScale;
    ProcessEvent(func, &params);
}
float UPrimitiveComponent::GetClosestPointOnCollision(FVector& Point, FVector& OutPointOnBody, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetClosestPointOnCollision"));
    struct Params_GetClosestPointOnCollision {
        FVector Point; // 0x0
        FVector OutPointOnBody; // 0xc
        FName BoneName; // 0x18
        float ReturnValue; // 0x20
    }; // Size: 0x24
    Params_GetClosestPointOnCollision params{};
    params.Point = (FVector)Point;
    params.OutPointOnBody = (FVector)OutPointOnBody;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
    Point = params.Point;
    OutPointOnBody = params.OutPointOnBody;
    return (float)params.ReturnValue;
}
void UPrimitiveComponent::SetMassOverrideInKg(FName BoneName, float MassInKg, bool bOverrideMass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetMassOverrideInKg"));
    struct Params_SetMassOverrideInKg {
        FName BoneName; // 0x0
        float MassInKg; // 0x8
        bool bOverrideMass; // 0xc
    }; // Size: 0xd
    Params_SetMassOverrideInKg params{};
    params.BoneName = (FName)BoneName;
    params.MassInKg = (float)MassInKg;
    params.bOverrideMass = (bool)bOverrideMass;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetLightingChannels"));
    struct Params_SetLightingChannels {
        bool bChannel0; // 0x0
        bool bChannel1; // 0x1
        bool bChannel2; // 0x2
    }; // Size: 0x3
    Params_SetLightingChannels params{};
    params.bChannel0 = (bool)bChannel0;
    params.bChannel1 = (bool)bChannel1;
    params.bChannel2 = (bool)bChannel2;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetLightAttachmentsAsGroup(bool bInLightAttachmentsAsGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetLightAttachmentsAsGroup"));
    struct Params_SetLightAttachmentsAsGroup {
        bool bInLightAttachmentsAsGroup; // 0x0
    }; // Size: 0x1
    Params_SetLightAttachmentsAsGroup params{};
    params.bInLightAttachmentsAsGroup = (bool)bInLightAttachmentsAsGroup;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetHideForOutdoorCaptures(bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetHideForOutdoorCaptures"));
    struct Params_SetHideForOutdoorCaptures {
        bool bValue; // 0x0
    }; // Size: 0x1
    Params_SetHideForOutdoorCaptures params{};
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetHideForIndoorCaptures(bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetHideForIndoorCaptures"));
    struct Params_SetHideForIndoorCaptures {
        bool bValue; // 0x0
    }; // Size: 0x1
    Params_SetHideForIndoorCaptures params{};
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::IgnoreActorWhenMoving(AActor* Actor, bool bShouldIgnore) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.IgnoreActorWhenMoving"));
    struct Params_IgnoreActorWhenMoving {
        AActor* Actor; // 0x0
        bool bShouldIgnore; // 0x8
    }; // Size: 0x9
    Params_IgnoreActorWhenMoving params{};
    params.Actor = (AActor*)Actor;
    params.bShouldIgnore = (bool)bShouldIgnore;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetExcludeFromLightAttachmentGroup(bool bInExcludeFromLightAttachmentGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetExcludeFromLightAttachmentGroup"));
    struct Params_SetExcludeFromLightAttachmentGroup {
        bool bInExcludeFromLightAttachmentGroup; // 0x0
    }; // Size: 0x1
    Params_SetExcludeFromLightAttachmentGroup params{};
    params.bInExcludeFromLightAttachmentGroup = (bool)bInExcludeFromLightAttachmentGroup;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetDefaultCustomPrimitiveDataFloat(int32_t DataIndex, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataFloat"));
    struct Params_SetDefaultCustomPrimitiveDataFloat {
        int32_t DataIndex; // 0x0
        float Value; // 0x4
    }; // Size: 0x8
    Params_SetDefaultCustomPrimitiveDataFloat params{};
    params.DataIndex = (int32_t)DataIndex;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetCustomPrimitiveDataVector3(int32_t DataIndex, FVector Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetCustomPrimitiveDataVector3"));
    struct Params_SetCustomPrimitiveDataVector3 {
        int32_t DataIndex; // 0x0
        FVector Value; // 0x4
    }; // Size: 0x10
    Params_SetCustomPrimitiveDataVector3 params{};
    params.DataIndex = (int32_t)DataIndex;
    params.Value = (FVector)Value;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetCustomPrimitiveDataVector2(int32_t DataIndex, FVector2D Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetCustomPrimitiveDataVector2"));
    struct Params_SetCustomPrimitiveDataVector2 {
        int32_t DataIndex; // 0x0
        FVector2D Value; // 0x4
    }; // Size: 0xc
    Params_SetCustomPrimitiveDataVector2 params{};
    params.DataIndex = (int32_t)DataIndex;
    params.Value = (FVector2D)Value;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetCustomPrimitiveDataFloat(int32_t DataIndex, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetCustomPrimitiveDataFloat"));
    struct Params_SetCustomPrimitiveDataFloat {
        int32_t DataIndex; // 0x0
        float Value; // 0x4
    }; // Size: 0x8
    Params_SetCustomPrimitiveDataFloat params{};
    params.DataIndex = (int32_t)DataIndex;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetCustomDepthStencilValue(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetCustomDepthStencilValue"));
    struct Params_SetCustomDepthStencilValue {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_SetCustomDepthStencilValue params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetCullDistance(float NewCullDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetCullDistance"));
    struct Params_SetCullDistance {
        float NewCullDistance; // 0x0
    }; // Size: 0x4
    Params_SetCullDistance params{};
    params.NewCullDistance = (float)NewCullDistance;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetCollisionResponseToChannel(ECollisionChannel Channel, ECollisionResponse NewResponse, bool bUpdateOverlaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetCollisionResponseToChannel"));
    struct Params_SetCollisionResponseToChannel {
        ECollisionChannel Channel; // 0x0
        ECollisionResponse NewResponse; // 0x1
        bool bUpdateOverlaps; // 0x2
    }; // Size: 0x3
    Params_SetCollisionResponseToChannel params{};
    params.Channel = (ECollisionChannel)Channel;
    params.NewResponse = (ECollisionResponse)NewResponse;
    params.bUpdateOverlaps = (bool)bUpdateOverlaps;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetCollisionProfileName(FName InCollisionProfileName, bool bUpdateOverlaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetCollisionProfileName"));
    struct Params_SetCollisionProfileName {
        FName InCollisionProfileName; // 0x0
        bool bUpdateOverlaps; // 0x8
    }; // Size: 0x9
    Params_SetCollisionProfileName params{};
    params.InCollisionProfileName = (FName)InCollisionProfileName;
    params.bUpdateOverlaps = (bool)bUpdateOverlaps;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetCollisionObjectType(ECollisionChannel Channel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetCollisionObjectType"));
    struct Params_SetCollisionObjectType {
        ECollisionChannel Channel; // 0x0
    }; // Size: 0x1
    Params_SetCollisionObjectType params{};
    params.Channel = (ECollisionChannel)Channel;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetCenterOfMass(FVector CenterOfMassOffset, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetCenterOfMass"));
    struct Params_SetCenterOfMass {
        FVector CenterOfMassOffset; // 0x0
        FName BoneName; // 0xc
    }; // Size: 0x14
    Params_SetCenterOfMass params{};
    params.CenterOfMassOffset = (FVector)CenterOfMassOffset;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetCastShadow(bool NewCastShadow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetCastShadow"));
    struct Params_SetCastShadow {
        bool NewCastShadow; // 0x0
    }; // Size: 0x1
    Params_SetCastShadow params{};
    params.NewCastShadow = (bool)NewCastShadow;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetCastHiddenShadow(bool NewCastHiddenShadow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetCastHiddenShadow"));
    struct Params_SetCastHiddenShadow {
        bool NewCastHiddenShadow; // 0x0
    }; // Size: 0x1
    Params_SetCastHiddenShadow params{};
    params.NewCastHiddenShadow = (bool)NewCastHiddenShadow;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetBoundsScale(float NewBoundsScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetBoundsScale"));
    struct Params_SetBoundsScale {
        float NewBoundsScale; // 0x0
    }; // Size: 0x4
    Params_SetBoundsScale params{};
    params.NewBoundsScale = (float)NewBoundsScale;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetAngularDamping(float InDamping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetAngularDamping"));
    struct Params_SetAngularDamping {
        float InDamping; // 0x0
    }; // Size: 0x4
    Params_SetAngularDamping params{};
    params.InDamping = (float)InDamping;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetAlwaysVisibleInCapture(bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetAlwaysVisibleInCapture"));
    struct Params_SetAlwaysVisibleInCapture {
        bool bValue; // 0x0
    }; // Size: 0x1
    Params_SetAlwaysVisibleInCapture params{};
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetAlwaysInBackfaceCapture(bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetAlwaysInBackfaceCapture"));
    struct Params_SetAlwaysInBackfaceCapture {
        bool bValue; // 0x0
    }; // Size: 0x1
    Params_SetAlwaysInBackfaceCapture params{};
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetAllUseCCD(bool InUseCCD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetAllUseCCD"));
    struct Params_SetAllUseCCD {
        bool InUseCCD; // 0x0
    }; // Size: 0x1
    Params_SetAllUseCCD params{};
    params.InUseCCD = (bool)InUseCCD;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetAllPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity"));
    struct Params_SetAllPhysicsLinearVelocity {
        FVector NewVel; // 0x0
        bool bAddToCurrent; // 0xc
    }; // Size: 0xd
    Params_SetAllPhysicsLinearVelocity params{};
    params.NewVel = (FVector)NewVel;
    params.bAddToCurrent = (bool)bAddToCurrent;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::SetAllPhysicsAngularVelocityInRadians(FVector& NewAngVel, bool bAddToCurrent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians"));
    struct Params_SetAllPhysicsAngularVelocityInRadians {
        FVector NewAngVel; // 0x0
        bool bAddToCurrent; // 0xc
    }; // Size: 0xd
    Params_SetAllPhysicsAngularVelocityInRadians params{};
    params.NewAngVel = (FVector)NewAngVel;
    params.bAddToCurrent = (bool)bAddToCurrent;
    ProcessEvent(func, &params);
    NewAngVel = params.NewAngVel;
}
void UPrimitiveComponent::SetAllPhysicsAngularVelocityInDegrees(FVector& NewAngVel, bool bAddToCurrent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees"));
    struct Params_SetAllPhysicsAngularVelocityInDegrees {
        FVector NewAngVel; // 0x0
        bool bAddToCurrent; // 0xc
    }; // Size: 0xd
    Params_SetAllPhysicsAngularVelocityInDegrees params{};
    params.NewAngVel = (FVector)NewAngVel;
    params.bAddToCurrent = (bool)bAddToCurrent;
    ProcessEvent(func, &params);
    NewAngVel = params.NewAngVel;
}
void UPrimitiveComponent::SetAllMassScale(float InMassScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.SetAllMassScale"));
    struct Params_SetAllMassScale {
        float InMassScale; // 0x0
    }; // Size: 0x4
    Params_SetAllMassScale params{};
    params.InMassScale = (float)InMassScale;
    ProcessEvent(func, &params);
}
FVector UPrimitiveComponent::ScaleByMomentOfInertia(FVector InputVector, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.ScaleByMomentOfInertia"));
    struct Params_ScaleByMomentOfInertia {
        FVector InputVector; // 0x0
        FName BoneName; // 0xc
        FVector ReturnValue; // 0x14
    }; // Size: 0x20
    Params_ScaleByMomentOfInertia params{};
    params.InputVector = (FVector)InputVector;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UPrimitiveComponent::K2_SphereTraceComponent(FVector TraceStart, FVector TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.K2_SphereTraceComponent"));
    struct Params_K2_SphereTraceComponent {
        FVector TraceStart; // 0x0
        FVector TraceEnd; // 0xc
        float SphereRadius; // 0x18
        bool bTraceComplex; // 0x1c
        bool bShowTrace; // 0x1d
        bool bPersistentShowTrace; // 0x1e
        char pad_1f[0x1];
        FVector HitLocation; // 0x20
        FVector HitNormal; // 0x2c
        FName BoneName; // 0x38
        FHitResult OutHit; // 0x40
        bool ReturnValue; // 0xc8
    }; // Size: 0xc9
    Params_K2_SphereTraceComponent params{};
    params.TraceStart = (FVector)TraceStart;
    params.TraceEnd = (FVector)TraceEnd;
    params.SphereRadius = (float)SphereRadius;
    params.bTraceComplex = (bool)bTraceComplex;
    params.bShowTrace = (bool)bShowTrace;
    params.bPersistentShowTrace = (bool)bPersistentShowTrace;
    params.HitLocation = (FVector)HitLocation;
    params.HitNormal = (FVector)HitNormal;
    params.BoneName = (FName)BoneName;
    params.OutHit = (FHitResult)OutHit;
    ProcessEvent(func, &params);
    HitLocation = params.HitLocation;
    HitNormal = params.HitNormal;
    BoneName = params.BoneName;
    OutHit = params.OutHit;
    return (bool)params.ReturnValue;
}
bool UPrimitiveComponent::K2_SphereOverlapComponent(FVector InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.K2_SphereOverlapComponent"));
    struct Params_K2_SphereOverlapComponent {
        FVector InSphereCentre; // 0x0
        float InSphereRadius; // 0xc
        bool bTraceComplex; // 0x10
        bool bShowTrace; // 0x11
        bool bPersistentShowTrace; // 0x12
        char pad_13[0x1];
        FVector HitLocation; // 0x14
        FVector HitNormal; // 0x20
        FName BoneName; // 0x2c
        FHitResult OutHit; // 0x34
        bool ReturnValue; // 0xbc
    }; // Size: 0xbd
    Params_K2_SphereOverlapComponent params{};
    params.InSphereCentre = (FVector)InSphereCentre;
    params.InSphereRadius = (float)InSphereRadius;
    params.bTraceComplex = (bool)bTraceComplex;
    params.bShowTrace = (bool)bShowTrace;
    params.bPersistentShowTrace = (bool)bPersistentShowTrace;
    params.HitLocation = (FVector)HitLocation;
    params.HitNormal = (FVector)HitNormal;
    params.BoneName = (FName)BoneName;
    params.OutHit = (FHitResult)OutHit;
    ProcessEvent(func, &params);
    HitLocation = params.HitLocation;
    HitNormal = params.HitNormal;
    BoneName = params.BoneName;
    OutHit = params.OutHit;
    return (bool)params.ReturnValue;
}
bool UPrimitiveComponent::K2_LineTraceComponent(FVector TraceStart, FVector TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.K2_LineTraceComponent"));
    struct Params_K2_LineTraceComponent {
        FVector TraceStart; // 0x0
        FVector TraceEnd; // 0xc
        bool bTraceComplex; // 0x18
        bool bShowTrace; // 0x19
        bool bPersistentShowTrace; // 0x1a
        char pad_1b[0x1];
        FVector HitLocation; // 0x1c
        FVector HitNormal; // 0x28
        FName BoneName; // 0x34
        FHitResult OutHit; // 0x3c
        bool ReturnValue; // 0xc4
    }; // Size: 0xc5
    Params_K2_LineTraceComponent params{};
    params.TraceStart = (FVector)TraceStart;
    params.TraceEnd = (FVector)TraceEnd;
    params.bTraceComplex = (bool)bTraceComplex;
    params.bShowTrace = (bool)bShowTrace;
    params.bPersistentShowTrace = (bool)bPersistentShowTrace;
    params.HitLocation = (FVector)HitLocation;
    params.HitNormal = (FVector)HitNormal;
    params.BoneName = (FName)BoneName;
    params.OutHit = (FHitResult)OutHit;
    ProcessEvent(func, &params);
    OutHit = params.OutHit;
    HitLocation = params.HitLocation;
    HitNormal = params.HitNormal;
    BoneName = params.BoneName;
    return (bool)params.ReturnValue;
}
bool UPrimitiveComponent::K2_IsQueryCollisionEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled"));
    struct Params_K2_IsQueryCollisionEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_K2_IsQueryCollisionEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPrimitiveComponent::K2_IsPhysicsCollisionEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled"));
    struct Params_K2_IsPhysicsCollisionEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_K2_IsPhysicsCollisionEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPrimitiveComponent::K2_IsCollisionEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.K2_IsCollisionEnabled"));
    struct Params_K2_IsCollisionEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_K2_IsCollisionEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPrimitiveComponent::K2_BoxOverlapComponent(FVector InBoxCentre, FBox InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.K2_BoxOverlapComponent"));
    struct Params_K2_BoxOverlapComponent {
        FVector InBoxCentre; // 0x0
        FBox InBox; // 0xc
        bool bTraceComplex; // 0x28
        bool bShowTrace; // 0x29
        bool bPersistentShowTrace; // 0x2a
        char pad_2b[0x1];
        FVector HitLocation; // 0x2c
        FVector HitNormal; // 0x38
        FName BoneName; // 0x44
        FHitResult OutHit; // 0x4c
        bool ReturnValue; // 0xd4
    }; // Size: 0xd5
    Params_K2_BoxOverlapComponent params{};
    params.InBoxCentre = (FVector)InBoxCentre;
    params.InBox = (FBox)InBox;
    params.bTraceComplex = (bool)bTraceComplex;
    params.bShowTrace = (bool)bShowTrace;
    params.bPersistentShowTrace = (bool)bPersistentShowTrace;
    params.HitLocation = (FVector)HitLocation;
    params.HitNormal = (FVector)HitNormal;
    params.BoneName = (FName)BoneName;
    params.OutHit = (FHitResult)OutHit;
    ProcessEvent(func, &params);
    OutHit = params.OutHit;
    HitLocation = params.HitLocation;
    HitNormal = params.HitNormal;
    BoneName = params.BoneName;
    return (bool)params.ReturnValue;
}
bool UPrimitiveComponent::IsOverlappingComponent(UPrimitiveComponent* OtherComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.IsOverlappingComponent"));
    struct Params_IsOverlappingComponent {
        UPrimitiveComponent* OtherComp; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsOverlappingComponent params{};
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPrimitiveComponent::IsOverlappingActor(AActor* Other) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.IsOverlappingActor"));
    struct Params_IsOverlappingActor {
        AActor* Other; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsOverlappingActor params{};
    params.Other = (AActor*)Other;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPrimitiveComponent::IsGravityEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.IsGravityEnabled"));
    struct Params_IsGravityEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsGravityEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPrimitiveComponent::IsAnyRigidBodyAwake() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.IsAnyRigidBodyAwake"));
    struct Params_IsAnyRigidBodyAwake {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAnyRigidBodyAwake params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPrimitiveComponent::IgnoreComponentWhenMoving(UPrimitiveComponent* Component, bool bShouldIgnore) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.IgnoreComponentWhenMoving"));
    struct Params_IgnoreComponentWhenMoving {
        UPrimitiveComponent* Component; // 0x0
        bool bShouldIgnore; // 0x8
    }; // Size: 0x9
    Params_IgnoreComponentWhenMoving params{};
    params.Component = (UPrimitiveComponent*)Component;
    params.bShouldIgnore = (bool)bShouldIgnore;
    ProcessEvent(func, &params);
}
FVector UPrimitiveComponent::GetPhysicsLinearVelocityAtPoint(FVector Point, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint"));
    struct Params_GetPhysicsLinearVelocityAtPoint {
        FVector Point; // 0x0
        FName BoneName; // 0xc
        FVector ReturnValue; // 0x14
    }; // Size: 0x20
    Params_GetPhysicsLinearVelocityAtPoint params{};
    params.Point = (FVector)Point;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UPrimitiveComponent::GetPhysicsLinearVelocity(FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetPhysicsLinearVelocity"));
    struct Params_GetPhysicsLinearVelocity {
        FName BoneName; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetPhysicsLinearVelocity params{};
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UPrimitiveComponent::GetPhysicsAngularVelocityInRadians(FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians"));
    struct Params_GetPhysicsAngularVelocityInRadians {
        FName BoneName; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetPhysicsAngularVelocityInRadians params{};
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UPrimitiveComponent::GetPhysicsAngularVelocityInDegrees(FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees"));
    struct Params_GetPhysicsAngularVelocityInDegrees {
        FName BoneName; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetPhysicsAngularVelocityInDegrees params{};
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UPrimitiveComponent::GetPhysicsAngularVelocity(FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetPhysicsAngularVelocity"));
    struct Params_GetPhysicsAngularVelocity {
        FName BoneName; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetPhysicsAngularVelocity params{};
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UPrimitiveComponent::GetOverlappingComponents(TArray<UPrimitiveComponent*>& OutOverlappingComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetOverlappingComponents"));
    struct Params_GetOverlappingComponents {
        TArray<UPrimitiveComponent*> OutOverlappingComponents; // 0x0
    }; // Size: 0x10
    Params_GetOverlappingComponents params{};
    params.OutOverlappingComponents = (TArray<UPrimitiveComponent*>)OutOverlappingComponents;
    ProcessEvent(func, &params);
    OutOverlappingComponents = params.OutOverlappingComponents;
}
void UPrimitiveComponent::GetOverlappingActors(TArray<AActor*>& OverlappingActors, UClass* ClassFilter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetOverlappingActors"));
    struct Params_GetOverlappingActors {
        TArray<AActor*> OverlappingActors; // 0x0
        UClass* ClassFilter; // 0x10
    }; // Size: 0x18
    Params_GetOverlappingActors params{};
    params.OverlappingActors = (TArray<AActor*>)OverlappingActors;
    params.ClassFilter = (UClass*)ClassFilter;
    ProcessEvent(func, &params);
    OverlappingActors = params.OverlappingActors;
}
int32_t UPrimitiveComponent::GetNumMaterials() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetNumMaterials"));
    struct Params_GetNumMaterials {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumMaterials params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UMaterialInterface* UPrimitiveComponent::GetMaterialFromCollisionFaceIndex(int32_t FaceIndex, int32_t& SectionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex"));
    struct Params_GetMaterialFromCollisionFaceIndex {
        int32_t FaceIndex; // 0x0
        int32_t SectionIndex; // 0x4
        UMaterialInterface* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetMaterialFromCollisionFaceIndex params{};
    params.FaceIndex = (int32_t)FaceIndex;
    params.SectionIndex = (int32_t)SectionIndex;
    ProcessEvent(func, &params);
    SectionIndex = params.SectionIndex;
    return (UMaterialInterface*)params.ReturnValue;
}
UMaterialInterface* UPrimitiveComponent::GetMaterial(int32_t ElementIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetMaterial"));
    struct Params_GetMaterial {
        int32_t ElementIndex; // 0x0
        char pad_4[0x4];
        UMaterialInterface* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetMaterial params{};
    params.ElementIndex = (int32_t)ElementIndex;
    ProcessEvent(func, &params);
    return (UMaterialInterface*)params.ReturnValue;
}
FVector UPrimitiveComponent::GetInertiaTensor(FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetInertiaTensor"));
    struct Params_GetInertiaTensor {
        FName BoneName; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetInertiaTensor params{};
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UPrimitiveComponent::GetMassScale(FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetMassScale"));
    struct Params_GetMassScale {
        FName BoneName; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMassScale params{};
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPrimitiveComponent::GetMass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetMass"));
    struct Params_GetMass {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMass params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPrimitiveComponent::GetLinearDamping() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetLinearDamping"));
    struct Params_GetLinearDamping {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLinearDamping params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UPrimitiveComponent::GetGenerateOverlapEvents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetGenerateOverlapEvents"));
    struct Params_GetGenerateOverlapEvents {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetGenerateOverlapEvents params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UPrimitiveComponent::GetCollisionProfileName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetCollisionProfileName"));
    struct Params_GetCollisionProfileName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCollisionProfileName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
ECollisionChannel UPrimitiveComponent::GetCollisionObjectType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetCollisionObjectType"));
    struct Params_GetCollisionObjectType {
        ECollisionChannel ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCollisionObjectType params{};
    ProcessEvent(func, &params);
    return (ECollisionChannel)params.ReturnValue;
}
ECollisionEnabled::Type UPrimitiveComponent::GetCollisionEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetCollisionEnabled"));
    struct Params_GetCollisionEnabled {
        ECollisionEnabled::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCollisionEnabled params{};
    ProcessEvent(func, &params);
    return (ECollisionEnabled::Type)params.ReturnValue;
}
FVector UPrimitiveComponent::GetCenterOfMass(FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetCenterOfMass"));
    struct Params_GetCenterOfMass {
        FName BoneName; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetCenterOfMass params{};
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UPrimitiveComponent::GetAngularDamping() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.GetAngularDamping"));
    struct Params_GetAngularDamping {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAngularDamping params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UMaterialInstanceDynamic* UPrimitiveComponent::CreateAndSetMaterialInstanceDynamicFromMaterial(int32_t ElementIndex, UMaterialInterface* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial"));
    struct Params_CreateAndSetMaterialInstanceDynamicFromMaterial {
        int32_t ElementIndex; // 0x0
        char pad_4[0x4];
        UMaterialInterface* Parent; // 0x8
        UMaterialInstanceDynamic* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateAndSetMaterialInstanceDynamicFromMaterial params{};
    params.ElementIndex = (int32_t)ElementIndex;
    params.Parent = (UMaterialInterface*)Parent;
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
UMaterialInstanceDynamic* UPrimitiveComponent::CreateAndSetMaterialInstanceDynamic(int32_t ElementIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic"));
    struct Params_CreateAndSetMaterialInstanceDynamic {
        int32_t ElementIndex; // 0x0
        char pad_4[0x4];
        UMaterialInstanceDynamic* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_CreateAndSetMaterialInstanceDynamic params{};
    params.ElementIndex = (int32_t)ElementIndex;
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
TArray<UPrimitiveComponent*> UPrimitiveComponent::CopyArrayOfMoveIgnoreComponents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents"));
    struct Params_CopyArrayOfMoveIgnoreComponents {
        TArray<UPrimitiveComponent*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_CopyArrayOfMoveIgnoreComponents params{};
    ProcessEvent(func, &params);
    return (TArray<UPrimitiveComponent*>)params.ReturnValue;
}
TArray<AActor*> UPrimitiveComponent::CopyArrayOfMoveIgnoreActors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors"));
    struct Params_CopyArrayOfMoveIgnoreActors {
        TArray<AActor*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_CopyArrayOfMoveIgnoreActors params{};
    ProcessEvent(func, &params);
    return (TArray<AActor*>)params.ReturnValue;
}
void UPrimitiveComponent::ClearMoveIgnoreComponents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.ClearMoveIgnoreComponents"));
    struct Params_ClearMoveIgnoreComponents {
    }; // Size: 0x0
    Params_ClearMoveIgnoreComponents params{};
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::ClearMoveIgnoreActors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.ClearMoveIgnoreActors"));
    struct Params_ClearMoveIgnoreActors {
    }; // Size: 0x0
    Params_ClearMoveIgnoreActors params{};
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::AddTorqueInRadians(FVector Torque, FName BoneName, bool bAccelChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.AddTorqueInRadians"));
    struct Params_AddTorqueInRadians {
        FVector Torque; // 0x0
        FName BoneName; // 0xc
        bool bAccelChange; // 0x14
    }; // Size: 0x15
    Params_AddTorqueInRadians params{};
    params.Torque = (FVector)Torque;
    params.BoneName = (FName)BoneName;
    params.bAccelChange = (bool)bAccelChange;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::AddTorqueInDegrees(FVector Torque, FName BoneName, bool bAccelChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.AddTorqueInDegrees"));
    struct Params_AddTorqueInDegrees {
        FVector Torque; // 0x0
        FName BoneName; // 0xc
        bool bAccelChange; // 0x14
    }; // Size: 0x15
    Params_AddTorqueInDegrees params{};
    params.Torque = (FVector)Torque;
    params.BoneName = (FName)BoneName;
    params.bAccelChange = (bool)bAccelChange;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::AddTorque(FVector Torque, FName BoneName, bool bAccelChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.AddTorque"));
    struct Params_AddTorque {
        FVector Torque; // 0x0
        FName BoneName; // 0xc
        bool bAccelChange; // 0x14
    }; // Size: 0x15
    Params_AddTorque params{};
    params.Torque = (FVector)Torque;
    params.BoneName = (FName)BoneName;
    params.bAccelChange = (bool)bAccelChange;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::AddRadialImpulse(FVector Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bVelChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.AddRadialImpulse"));
    struct Params_AddRadialImpulse {
        FVector Origin; // 0x0
        float Radius; // 0xc
        float Strength; // 0x10
        ERadialImpulseFalloff Falloff; // 0x14
        bool bVelChange; // 0x15
    }; // Size: 0x16
    Params_AddRadialImpulse params{};
    params.Origin = (FVector)Origin;
    params.Radius = (float)Radius;
    params.Strength = (float)Strength;
    params.Falloff = (ERadialImpulseFalloff)Falloff;
    params.bVelChange = (bool)bVelChange;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::AddRadialForce(FVector Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bAccelChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.AddRadialForce"));
    struct Params_AddRadialForce {
        FVector Origin; // 0x0
        float Radius; // 0xc
        float Strength; // 0x10
        ERadialImpulseFalloff Falloff; // 0x14
        bool bAccelChange; // 0x15
    }; // Size: 0x16
    Params_AddRadialForce params{};
    params.Origin = (FVector)Origin;
    params.Radius = (float)Radius;
    params.Strength = (float)Strength;
    params.Falloff = (ERadialImpulseFalloff)Falloff;
    params.bAccelChange = (bool)bAccelChange;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::AddImpulseAtLocation(FVector Impulse, FVector Location, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.AddImpulseAtLocation"));
    struct Params_AddImpulseAtLocation {
        FVector Impulse; // 0x0
        FVector Location; // 0xc
        FName BoneName; // 0x18
    }; // Size: 0x20
    Params_AddImpulseAtLocation params{};
    params.Impulse = (FVector)Impulse;
    params.Location = (FVector)Location;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::AddImpulse(FVector Impulse, FName BoneName, bool bVelChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.AddImpulse"));
    struct Params_AddImpulse {
        FVector Impulse; // 0x0
        FName BoneName; // 0xc
        bool bVelChange; // 0x14
    }; // Size: 0x15
    Params_AddImpulse params{};
    params.Impulse = (FVector)Impulse;
    params.BoneName = (FName)BoneName;
    params.bVelChange = (bool)bVelChange;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::AddForceAtLocationLocal(FVector Force, FVector Location, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.AddForceAtLocationLocal"));
    struct Params_AddForceAtLocationLocal {
        FVector Force; // 0x0
        FVector Location; // 0xc
        FName BoneName; // 0x18
    }; // Size: 0x20
    Params_AddForceAtLocationLocal params{};
    params.Force = (FVector)Force;
    params.Location = (FVector)Location;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::AddForceAtLocation(FVector Force, FVector Location, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.AddForceAtLocation"));
    struct Params_AddForceAtLocation {
        FVector Force; // 0x0
        FVector Location; // 0xc
        FName BoneName; // 0x18
    }; // Size: 0x20
    Params_AddForceAtLocation params{};
    params.Force = (FVector)Force;
    params.Location = (FVector)Location;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::AddForce(FVector Force, FName BoneName, bool bAccelChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.AddForce"));
    struct Params_AddForce {
        FVector Force; // 0x0
        FName BoneName; // 0xc
        bool bAccelChange; // 0x14
    }; // Size: 0x15
    Params_AddForce params{};
    params.Force = (FVector)Force;
    params.BoneName = (FName)BoneName;
    params.bAccelChange = (bool)bAccelChange;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::AddAngularImpulseInRadians(FVector Impulse, FName BoneName, bool bVelChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.AddAngularImpulseInRadians"));
    struct Params_AddAngularImpulseInRadians {
        FVector Impulse; // 0x0
        FName BoneName; // 0xc
        bool bVelChange; // 0x14
    }; // Size: 0x15
    Params_AddAngularImpulseInRadians params{};
    params.Impulse = (FVector)Impulse;
    params.BoneName = (FName)BoneName;
    params.bVelChange = (bool)bVelChange;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::AddAngularImpulseInDegrees(FVector Impulse, FName BoneName, bool bVelChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.AddAngularImpulseInDegrees"));
    struct Params_AddAngularImpulseInDegrees {
        FVector Impulse; // 0x0
        FName BoneName; // 0xc
        bool bVelChange; // 0x14
    }; // Size: 0x15
    Params_AddAngularImpulseInDegrees params{};
    params.Impulse = (FVector)Impulse;
    params.BoneName = (FName)BoneName;
    params.bVelChange = (bool)bVelChange;
    ProcessEvent(func, &params);
}
void UPrimitiveComponent::AddAngularImpulse(FVector Impulse, FName BoneName, bool bVelChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PrimitiveComponent.AddAngularImpulse"));
    struct Params_AddAngularImpulse {
        FVector Impulse; // 0x0
        FName BoneName; // 0xc
        bool bVelChange; // 0x14
    }; // Size: 0x15
    Params_AddAngularImpulse params{};
    params.Impulse = (FVector)Impulse;
    params.BoneName = (FName)BoneName;
    params.bVelChange = (bool)bVelChange;
    ProcessEvent(func, &params);
}
