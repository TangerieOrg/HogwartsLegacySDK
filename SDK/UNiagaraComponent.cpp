#include "AActor.hpp"
#include "EAttachmentRule.hpp"
#include "ENiagaraAgeUpdateMode.hpp"
#include "ENiagaraTickBehavior.hpp"
#include "FLinearColor.hpp"
#include "FNiagaraMaterialOverride.hpp"
#include "FNiagaraUserRedirectionParameterStore.hpp"
#include "FQuat.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVector4.hpp"
#include "UFXSystemComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraDataInterface.hpp"
#include "UNiagaraSystem.hpp"
#include "UObject.hpp"
#include "UTextureRenderTarget.hpp"
UNiagaraComponent* UNiagaraComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraComponent");
    return (UNiagaraComponent*)res;
}
void UNiagaraComponent::SetVariableVec3(FName InVariableName, FVector InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetVariableVec3"));
    struct Params_SetVariableVec3 {
        FName InVariableName; // 0x0
        FVector InValue; // 0x8
    }; // Size: 0x14
    Params_SetVariableVec3 params{};
    params.InVariableName = (FName)InVariableName;
    params.InValue = (FVector)InValue;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetVariableVec2(FName InVariableName, FVector2D InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetVariableVec2"));
    struct Params_SetVariableVec2 {
        FName InVariableName; // 0x0
        FVector2D InValue; // 0x8
    }; // Size: 0x10
    Params_SetVariableVec2 params{};
    params.InVariableName = (FName)InVariableName;
    params.InValue = (FVector2D)InValue;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetVariableBool(FName InVariableName, bool InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetVariableBool"));
    struct Params_SetVariableBool {
        FName InVariableName; // 0x0
        bool InValue; // 0x8
    }; // Size: 0x9
    Params_SetVariableBool params{};
    params.InVariableName = (FName)InVariableName;
    params.InValue = (bool)InValue;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetVariableVec4(FName InVariableName, FVector4& InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetVariableVec4"));
    struct Params_SetVariableVec4 {
        FName InVariableName; // 0x0
        char pad_8[0x8];
        FVector4 InValue; // 0x10
    }; // Size: 0x20
    Params_SetVariableVec4 params{};
    params.InVariableName = (FName)InVariableName;
    params.InValue = (FVector4)InValue;
    ProcessEvent(func, &params);
    InValue = params.InValue;
}
void UNiagaraComponent::SetForceSolo(bool bInForceSolo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetForceSolo"));
    struct Params_SetForceSolo {
        bool bInForceSolo; // 0x0
    }; // Size: 0x1
    Params_SetForceSolo params{};
    params.bInForceSolo = (bool)bInForceSolo;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetVariableQuat(FName InVariableName, FQuat& InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetVariableQuat"));
    struct Params_SetVariableQuat {
        FName InVariableName; // 0x0
        char pad_8[0x8];
        FQuat InValue; // 0x10
    }; // Size: 0x20
    Params_SetVariableQuat params{};
    params.InVariableName = (FName)InVariableName;
    params.InValue = (FQuat)InValue;
    ProcessEvent(func, &params);
    InValue = params.InValue;
}
void UNiagaraComponent::SetPaused(bool bInPaused, bool bCalledFromVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetPaused"));
    struct Params_SetPaused {
        bool bInPaused; // 0x0
        bool bCalledFromVisibility; // 0x1
    }; // Size: 0x2
    Params_SetPaused params{};
    params.bInPaused = (bool)bInPaused;
    params.bCalledFromVisibility = (bool)bCalledFromVisibility;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetVariableTextureRenderTarget(FName InVariableName, UTextureRenderTarget* TextureRenderTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetVariableTextureRenderTarget"));
    struct Params_SetVariableTextureRenderTarget {
        FName InVariableName; // 0x0
        UTextureRenderTarget* TextureRenderTarget; // 0x8
    }; // Size: 0x10
    Params_SetVariableTextureRenderTarget params{};
    params.InVariableName = (FName)InVariableName;
    params.TextureRenderTarget = (UTextureRenderTarget*)TextureRenderTarget;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetVariableObject(FName InVariableName, UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetVariableObject"));
    struct Params_SetVariableObject {
        FName InVariableName; // 0x0
        UObject* Object; // 0x8
    }; // Size: 0x10
    Params_SetVariableObject params{};
    params.InVariableName = (FName)InVariableName;
    params.Object = (UObject*)Object;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetVariableMaterial(FName InVariableName, UMaterialInterface* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetVariableMaterial"));
    struct Params_SetVariableMaterial {
        FName InVariableName; // 0x0
        UMaterialInterface* Object; // 0x8
    }; // Size: 0x10
    Params_SetVariableMaterial params{};
    params.InVariableName = (FName)InVariableName;
    params.Object = (UMaterialInterface*)Object;
    ProcessEvent(func, &params);
}
bool UNiagaraComponent::GetLockDesiredAgeDeltaTimeToSeekDelta() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta"));
    struct Params_GetLockDesiredAgeDeltaTimeToSeekDelta {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLockDesiredAgeDeltaTimeToSeekDelta params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNiagaraComponent::SetVariableActor(FName InVariableName, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetVariableActor"));
    struct Params_SetVariableActor {
        FName InVariableName; // 0x0
        AActor* Actor; // 0x8
    }; // Size: 0x10
    Params_SetVariableActor params{};
    params.InVariableName = (FName)InVariableName;
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetVariableLinearColor(FName InVariableName, FLinearColor& InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetVariableLinearColor"));
    struct Params_SetVariableLinearColor {
        FName InVariableName; // 0x0
        FLinearColor InValue; // 0x8
    }; // Size: 0x18
    Params_SetVariableLinearColor params{};
    params.InVariableName = (FName)InVariableName;
    params.InValue = (FLinearColor)InValue;
    ProcessEvent(func, &params);
    InValue = params.InValue;
}
void UNiagaraComponent::SetVariableInt(FName InVariableName, int32_t InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetVariableInt"));
    struct Params_SetVariableInt {
        FName InVariableName; // 0x0
        int32_t InValue; // 0x8
    }; // Size: 0xc
    Params_SetVariableInt params{};
    params.InVariableName = (FName)InVariableName;
    params.InValue = (int32_t)InValue;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetVariableFloat(FName InVariableName, float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetVariableFloat"));
    struct Params_SetVariableFloat {
        FName InVariableName; // 0x0
        float InValue; // 0x8
    }; // Size: 0xc
    Params_SetVariableFloat params{};
    params.InVariableName = (FName)InVariableName;
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetTickBehavior(ENiagaraTickBehavior NewTickBehavior) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetTickBehavior"));
    struct Params_SetTickBehavior {
        ENiagaraTickBehavior NewTickBehavior; // 0x0
    }; // Size: 0x1
    Params_SetTickBehavior params{};
    params.NewTickBehavior = (ENiagaraTickBehavior)NewTickBehavior;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetSeekDelta(float InSeekDelta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetSeekDelta"));
    struct Params_SetSeekDelta {
        float InSeekDelta; // 0x0
    }; // Size: 0x4
    Params_SetSeekDelta params{};
    params.InSeekDelta = (float)InSeekDelta;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetRenderingEnabled"));
    struct Params_SetRenderingEnabled {
        bool bInRenderingEnabled; // 0x0
    }; // Size: 0x1
    Params_SetRenderingEnabled params{};
    params.bInRenderingEnabled = (bool)bInRenderingEnabled;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetNiagaraVariableQuat(FString InVariableName, FQuat& InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableQuat"));
    struct Params_SetNiagaraVariableQuat {
        FString InVariableName; // 0x0
        FQuat InValue; // 0x10
    }; // Size: 0x20
    Params_SetNiagaraVariableQuat params{};
    params.InVariableName = (FString)InVariableName;
    params.InValue = (FQuat)InValue;
    ProcessEvent(func, &params);
    InValue = params.InValue;
}
void UNiagaraComponent::SetRandomSeedOffset(int32_t NewRandomSeedOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetRandomSeedOffset"));
    struct Params_SetRandomSeedOffset {
        int32_t NewRandomSeedOffset; // 0x0
    }; // Size: 0x4
    Params_SetRandomSeedOffset params{};
    params.NewRandomSeedOffset = (int32_t)NewRandomSeedOffset;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetPreviewLODDistance"));
    struct Params_SetPreviewLODDistance {
        bool bEnablePreviewLODDistance; // 0x0
        char pad_1[0x3];
        float PreviewLODDistance; // 0x4
    }; // Size: 0x8
    Params_SetPreviewLODDistance params{};
    params.bEnablePreviewLODDistance = (bool)bEnablePreviewLODDistance;
    params.PreviewLODDistance = (float)PreviewLODDistance;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetNiagaraVariableVec3(FString InVariableName, FVector InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec3"));
    struct Params_SetNiagaraVariableVec3 {
        FString InVariableName; // 0x0
        FVector InValue; // 0x10
    }; // Size: 0x1c
    Params_SetNiagaraVariableVec3 params{};
    params.InVariableName = (FString)InVariableName;
    params.InValue = (FVector)InValue;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetNiagaraVariableVec4(FString InVariableName, FVector4& InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec4"));
    struct Params_SetNiagaraVariableVec4 {
        FString InVariableName; // 0x0
        FVector4 InValue; // 0x10
    }; // Size: 0x20
    Params_SetNiagaraVariableVec4 params{};
    params.InVariableName = (FString)InVariableName;
    params.InValue = (FVector4)InValue;
    ProcessEvent(func, &params);
    InValue = params.InValue;
}
void UNiagaraComponent::SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec2"));
    struct Params_SetNiagaraVariableVec2 {
        FString InVariableName; // 0x0
        FVector2D InValue; // 0x10
    }; // Size: 0x18
    Params_SetNiagaraVariableVec2 params{};
    params.InVariableName = (FString)InVariableName;
    params.InValue = (FVector2D)InValue;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetNiagaraVariableObject(FString InVariableName, UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableObject"));
    struct Params_SetNiagaraVariableObject {
        FString InVariableName; // 0x0
        UObject* Object; // 0x10
    }; // Size: 0x18
    Params_SetNiagaraVariableObject params{};
    params.InVariableName = (FString)InVariableName;
    params.Object = (UObject*)Object;
    ProcessEvent(func, &params);
}
TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly"));
    struct Params_GetNiagaraParticleValues_DebugOnly {
        FString InEmitterName; // 0x0
        FString InValueName; // 0x10
        TArray<float> ReturnValue; // 0x20
    }; // Size: 0x30
    Params_GetNiagaraParticleValues_DebugOnly params{};
    params.InEmitterName = (FString)InEmitterName;
    params.InValueName = (FString)InValueName;
    ProcessEvent(func, &params);
    return (TArray<float>)params.ReturnValue;
}
bool UNiagaraComponent::IsPaused() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.IsPaused"));
    struct Params_IsPaused {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPaused params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNiagaraComponent::SetNiagaraVariableLinearColor(FString InVariableName, FLinearColor& InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableLinearColor"));
    struct Params_SetNiagaraVariableLinearColor {
        FString InVariableName; // 0x0
        FLinearColor InValue; // 0x10
    }; // Size: 0x20
    Params_SetNiagaraVariableLinearColor params{};
    params.InVariableName = (FString)InVariableName;
    params.InValue = (FLinearColor)InValue;
    ProcessEvent(func, &params);
    InValue = params.InValue;
}
bool UNiagaraComponent::GetForceSolo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.GetForceSolo"));
    struct Params_GetForceSolo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetForceSolo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UNiagaraComponent::GetSeekDelta() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.GetSeekDelta"));
    struct Params_GetSeekDelta {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSeekDelta params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UNiagaraComponent::SetNiagaraVariableInt(FString InVariableName, int32_t InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableInt"));
    struct Params_SetNiagaraVariableInt {
        FString InVariableName; // 0x0
        int32_t InValue; // 0x10
    }; // Size: 0x14
    Params_SetNiagaraVariableInt params{};
    params.InVariableName = (FString)InVariableName;
    params.InValue = (int32_t)InValue;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetNiagaraVariableFloat(FString InVariableName, float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableFloat"));
    struct Params_SetNiagaraVariableFloat {
        FString InVariableName; // 0x0
        float InValue; // 0x10
    }; // Size: 0x14
    Params_SetNiagaraVariableFloat params{};
    params.InVariableName = (FString)InVariableName;
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetNiagaraVariableBool(FString InVariableName, bool InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableBool"));
    struct Params_SetNiagaraVariableBool {
        FString InVariableName; // 0x0
        bool InValue; // 0x10
    }; // Size: 0x11
    Params_SetNiagaraVariableBool params{};
    params.InVariableName = (FString)InVariableName;
    params.InValue = (bool)InValue;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetAsset(UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetAsset"));
    struct Params_SetAsset {
        UNiagaraSystem* InAsset; // 0x0
        bool bResetExistingOverrideParameters; // 0x8
    }; // Size: 0x9
    Params_SetAsset params{};
    params.InAsset = (UNiagaraSystem*)InAsset;
    params.bResetExistingOverrideParameters = (bool)bResetExistingOverrideParameters;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetNiagaraVariableActor(FString InVariableName, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableActor"));
    struct Params_SetNiagaraVariableActor {
        FString InVariableName; // 0x0
        AActor* Actor; // 0x10
    }; // Size: 0x18
    Params_SetNiagaraVariableActor params{};
    params.InVariableName = (FString)InVariableName;
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
TArray<FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly"));
    struct Params_GetNiagaraParticleValueVec3_DebugOnly {
        FString InEmitterName; // 0x0
        FString InValueName; // 0x10
        TArray<FVector> ReturnValue; // 0x20
    }; // Size: 0x30
    Params_GetNiagaraParticleValueVec3_DebugOnly params{};
    params.InEmitterName = (FString)InEmitterName;
    params.InValueName = (FString)InValueName;
    ProcessEvent(func, &params);
    return (TArray<FVector>)params.ReturnValue;
}
void UNiagaraComponent::SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta"));
    struct Params_SetLockDesiredAgeDeltaTimeToSeekDelta {
        bool bLock; // 0x0
    }; // Size: 0x1
    Params_SetLockDesiredAgeDeltaTimeToSeekDelta params{};
    params.bLock = (bool)bLock;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetMaxSimTime(float InMaxTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetMaxSimTime"));
    struct Params_SetMaxSimTime {
        float InMaxTime; // 0x0
    }; // Size: 0x4
    Params_SetMaxSimTime params{};
    params.InMaxTime = (float)InMaxTime;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetGpuComputeDebug(bool bEnableDebug) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetGpuComputeDebug"));
    struct Params_SetGpuComputeDebug {
        bool bEnableDebug; // 0x0
    }; // Size: 0x1
    Params_SetGpuComputeDebug params{};
    params.bEnableDebug = (bool)bEnableDebug;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetDesiredAge(float InDesiredAge) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetDesiredAge"));
    struct Params_SetDesiredAge {
        float InDesiredAge; // 0x0
    }; // Size: 0x4
    Params_SetDesiredAge params{};
    params.InDesiredAge = (float)InDesiredAge;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetCanRenderWhileSeeking"));
    struct Params_SetCanRenderWhileSeeking {
        bool bInCanRenderWhileSeeking; // 0x0
    }; // Size: 0x1
    Params_SetCanRenderWhileSeeking params{};
    params.bInCanRenderWhileSeeking = (bool)bInCanRenderWhileSeeking;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetAutoDestroy(bool bInAutoDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetAutoDestroy"));
    struct Params_SetAutoDestroy {
        bool bInAutoDestroy; // 0x0
    }; // Size: 0x1
    Params_SetAutoDestroy params{};
    params.bInAutoDestroy = (bool)bInAutoDestroy;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetAllowScalability(bool bAllow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetAllowScalability"));
    struct Params_SetAllowScalability {
        bool bAllow; // 0x0
    }; // Size: 0x1
    Params_SetAllowScalability params{};
    params.bAllow = (bool)bAllow;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SetAgeUpdateMode"));
    struct Params_SetAgeUpdateMode {
        ENiagaraAgeUpdateMode InAgeUpdateMode; // 0x0
    }; // Size: 0x1
    Params_SetAgeUpdateMode params{};
    params.InAgeUpdateMode = (ENiagaraAgeUpdateMode)InAgeUpdateMode;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::SeekToDesiredAge(float InDesiredAge) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.SeekToDesiredAge"));
    struct Params_SeekToDesiredAge {
        float InDesiredAge; // 0x0
    }; // Size: 0x4
    Params_SeekToDesiredAge params{};
    params.InDesiredAge = (float)InDesiredAge;
    ProcessEvent(func, &params);
}
ENiagaraAgeUpdateMode UNiagaraComponent::GetAgeUpdateMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.GetAgeUpdateMode"));
    struct Params_GetAgeUpdateMode {
        ENiagaraAgeUpdateMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAgeUpdateMode params{};
    ProcessEvent(func, &params);
    return (ENiagaraAgeUpdateMode)params.ReturnValue;
}
void UNiagaraComponent::ResetSystem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.ResetSystem"));
    struct Params_ResetSystem {
    }; // Size: 0x0
    Params_ResetSystem params{};
    ProcessEvent(func, &params);
}
void UNiagaraComponent::ReinitializeSystem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.ReinitializeSystem"));
    struct Params_ReinitializeSystem {
    }; // Size: 0x0
    Params_ReinitializeSystem params{};
    ProcessEvent(func, &params);
}
UNiagaraDataInterface* UNiagaraComponent::GetDataInterface(FString Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.GetDataInterface"));
    struct Params_GetDataInterface {
        FString Name; // 0x0
        UNiagaraDataInterface* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetDataInterface params{};
    params.Name = (FString)Name;
    ProcessEvent(func, &params);
    return (UNiagaraDataInterface*)params.ReturnValue;
}
void UNiagaraComponent::InitForPerformanceBaseline() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.InitForPerformanceBaseline"));
    struct Params_InitForPerformanceBaseline {
    }; // Size: 0x0
    Params_InitForPerformanceBaseline params{};
    ProcessEvent(func, &params);
}
ENiagaraTickBehavior UNiagaraComponent::GetTickBehavior() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.GetTickBehavior"));
    struct Params_GetTickBehavior {
        ENiagaraTickBehavior ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTickBehavior params{};
    ProcessEvent(func, &params);
    return (ENiagaraTickBehavior)params.ReturnValue;
}
int32_t UNiagaraComponent::GetRandomSeedOffset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.GetRandomSeedOffset"));
    struct Params_GetRandomSeedOffset {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRandomSeedOffset params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UNiagaraComponent::GetPreviewLODDistanceEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled"));
    struct Params_GetPreviewLODDistanceEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPreviewLODDistanceEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UNiagaraComponent::GetPreviewLODDistance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistance"));
    struct Params_GetPreviewLODDistance {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPreviewLODDistance params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
TArray<FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly(FString InEmitterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly"));
    struct Params_GetNiagaraParticlePositions_DebugOnly {
        FString InEmitterName; // 0x0
        TArray<FVector> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetNiagaraParticlePositions_DebugOnly params{};
    params.InEmitterName = (FString)InEmitterName;
    ProcessEvent(func, &params);
    return (TArray<FVector>)params.ReturnValue;
}
UNiagaraSystem* UNiagaraComponent::GetAsset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.GetAsset"));
    struct Params_GetAsset {
        UNiagaraSystem* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAsset params{};
    ProcessEvent(func, &params);
    return (UNiagaraSystem*)params.ReturnValue;
}
float UNiagaraComponent::GetMaxSimTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.GetMaxSimTime"));
    struct Params_GetMaxSimTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxSimTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UNiagaraComponent::GetDesiredAge() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.GetDesiredAge"));
    struct Params_GetDesiredAge {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDesiredAge params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UNiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.AdvanceSimulationByTime"));
    struct Params_AdvanceSimulationByTime {
        float SimulateTime; // 0x0
        float TickDeltaSeconds; // 0x4
    }; // Size: 0x8
    Params_AdvanceSimulationByTime params{};
    params.SimulateTime = (float)SimulateTime;
    params.TickDeltaSeconds = (float)TickDeltaSeconds;
    ProcessEvent(func, &params);
}
void UNiagaraComponent::AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraComponent.AdvanceSimulation"));
    struct Params_AdvanceSimulation {
        int32_t TickCount; // 0x0
        float TickDeltaSeconds; // 0x4
    }; // Size: 0x8
    Params_AdvanceSimulation params{};
    params.TickCount = (int32_t)TickCount;
    params.TickDeltaSeconds = (float)TickDeltaSeconds;
    ProcessEvent(func, &params);
}
