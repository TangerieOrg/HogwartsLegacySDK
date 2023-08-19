#include "AActor.hpp"
#include "AWorldFXSingleton.hpp"
#include "FCameraFXRoot.hpp"
#include "FVector.hpp"
#include "FWorldFXGenericManageSettings.hpp"
#include "FWorldFXOctreeStack.hpp"
#include "FWorldFXPerWorldSettings.hpp"
#include "FWorldFXPresetRuleName.hpp"
#include "FWorldFXSpawnOverrides.hpp"
#include "UActorComponent.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UObject.hpp"
#include "UParticleSystemComponent.hpp"
#include "UWorldFXOctreeFXDummy.hpp"
#include "UWorldFXRule.hpp"
void AWorldFXSingleton::AutoManageAudioComponent(UAkComponent* AudioComponent, float CullDistanceMeters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXSingleton.AutoManageAudioComponent"));
    struct Params_AutoManageAudioComponent {
        UAkComponent* AudioComponent; // 0x0
        float CullDistanceMeters; // 0x8
    }; // Size: 0xc
    Params_AutoManageAudioComponent params{};
    params.AudioComponent = (UAkComponent*)AudioComponent;
    params.CullDistanceMeters = (float)CullDistanceMeters;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AWorldFXSingleton::IsWorldFXInterfaceRegistered() {}
void AWorldFXSingleton::RegisterWorldFXInterface() {}
void AWorldFXSingleton::PresetRuleExists(FWorldFXPresetRuleName PresetName, bool& bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXSingleton.PresetRuleExists"));
    struct Params_PresetRuleExists {
        FWorldFXPresetRuleName PresetName; // 0x0
        bool bResult; // 0x8
    }; // Size: 0x9
    Params_PresetRuleExists params{};
    params.PresetName = (FWorldFXPresetRuleName)PresetName;
    params.bResult = (bool)bResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bResult = params.bResult;
}
AWorldFXSingleton* AWorldFXSingleton::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXSingleton");
    return (AWorldFXSingleton*)res;
}
void AWorldFXSingleton::UnregisterWorldFXInterface() {}
void AWorldFXSingleton::PresetRuleEvaluateWithSpawnParameters(UObject* WorldContextObject, FWorldFXPresetRuleName PresetName, FVector FXSpawnPosition, FWorldFXSpawnOverrides& SpawnOverrides, bool& bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXSingleton.PresetRuleEvaluateWithSpawnParameters"));
    struct Params_PresetRuleEvaluateWithSpawnParameters {
        UObject* WorldContextObject; // 0x0
        FWorldFXPresetRuleName PresetName; // 0x8
        FVector FXSpawnPosition; // 0x10
        FWorldFXSpawnOverrides SpawnOverrides; // 0x1c
        bool bResult; // 0x8c
    }; // Size: 0x8d
    Params_PresetRuleEvaluateWithSpawnParameters params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PresetName = (FWorldFXPresetRuleName)PresetName;
    params.FXSpawnPosition = (FVector)FXSpawnPosition;
    params.SpawnOverrides = (FWorldFXSpawnOverrides)SpawnOverrides;
    params.bResult = (bool)bResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpawnOverrides = params.SpawnOverrides;
    bResult = params.bResult;
}
void AWorldFXSingleton::PresetRuleEvaluate(UObject* WorldContextObject, FWorldFXPresetRuleName PresetName, FVector FXSpawnPosition, bool& bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXSingleton.PresetRuleEvaluate"));
    struct Params_PresetRuleEvaluate {
        UObject* WorldContextObject; // 0x0
        FWorldFXPresetRuleName PresetName; // 0x8
        FVector FXSpawnPosition; // 0x10
        bool bResult; // 0x1c
    }; // Size: 0x1d
    Params_PresetRuleEvaluate params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PresetName = (FWorldFXPresetRuleName)PresetName;
    params.FXSpawnPosition = (FVector)FXSpawnPosition;
    params.bResult = (bool)bResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bResult = params.bResult;
}
UWorldFXRule* AWorldFXSingleton::GetPresetRule(FWorldFXPresetRuleName PresetRuleName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXSingleton.GetPresetRule"));
    struct Params_GetPresetRule {
        FWorldFXPresetRuleName PresetRuleName; // 0x0
        UWorldFXRule* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetPresetRule params{};
    params.PresetRuleName = (FWorldFXPresetRuleName)PresetRuleName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UWorldFXRule*)params.ReturnValue;
}
void AWorldFXSingleton::ForgetManagedNiagaraComponent(UNiagaraComponent* NiagaraComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXSingleton.ForgetManagedNiagaraComponent"));
    struct Params_ForgetManagedNiagaraComponent {
        UNiagaraComponent* NiagaraComponent; // 0x0
    }; // Size: 0x8
    Params_ForgetManagedNiagaraComponent params{};
    params.NiagaraComponent = (UNiagaraComponent*)NiagaraComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AWorldFXSingleton::ForgetManagedGenericComponent(UActorComponent* ActorComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXSingleton.ForgetManagedGenericComponent"));
    struct Params_ForgetManagedGenericComponent {
        UActorComponent* ActorComponent; // 0x0
    }; // Size: 0x8
    Params_ForgetManagedGenericComponent params{};
    params.ActorComponent = (UActorComponent*)ActorComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AWorldFXSingleton::ForgetManagedCascadeComponent(UParticleSystemComponent* ParticleSystemComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXSingleton.ForgetManagedCascadeComponent"));
    struct Params_ForgetManagedCascadeComponent {
        UParticleSystemComponent* ParticleSystemComponent; // 0x0
    }; // Size: 0x8
    Params_ForgetManagedCascadeComponent params{};
    params.ParticleSystemComponent = (UParticleSystemComponent*)ParticleSystemComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AWorldFXSingleton::ForgetManagedAudioComponent(UAkComponent* AudioComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXSingleton.ForgetManagedAudioComponent"));
    struct Params_ForgetManagedAudioComponent {
        UAkComponent* AudioComponent; // 0x0
    }; // Size: 0x8
    Params_ForgetManagedAudioComponent params{};
    params.AudioComponent = (UAkComponent*)AudioComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AWorldFXSingleton::AutoManageNiagaraComponent(UNiagaraComponent* NiagaraComponent, float CullDistanceMeters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXSingleton.AutoManageNiagaraComponent"));
    struct Params_AutoManageNiagaraComponent {
        UNiagaraComponent* NiagaraComponent; // 0x0
        float CullDistanceMeters; // 0x8
    }; // Size: 0xc
    Params_AutoManageNiagaraComponent params{};
    params.NiagaraComponent = (UNiagaraComponent*)NiagaraComponent;
    params.CullDistanceMeters = (float)CullDistanceMeters;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AWorldFXSingleton::AutoManageGenericComponent(UActorComponent* ActorComponent, FWorldFXGenericManageSettings Manage, float CullDistanceMeters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXSingleton.AutoManageGenericComponent"));
    struct Params_AutoManageGenericComponent {
        UActorComponent* ActorComponent; // 0x0
        FWorldFXGenericManageSettings Manage; // 0x8
        float CullDistanceMeters; // 0xc
    }; // Size: 0x10
    Params_AutoManageGenericComponent params{};
    params.ActorComponent = (UActorComponent*)ActorComponent;
    params.Manage = (FWorldFXGenericManageSettings)Manage;
    params.CullDistanceMeters = (float)CullDistanceMeters;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AWorldFXSingleton::AutoManageCascadeComponent(UParticleSystemComponent* ParticleSystemComponent, float CullDistanceMeters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXSingleton.AutoManageCascadeComponent"));
    struct Params_AutoManageCascadeComponent {
        UParticleSystemComponent* ParticleSystemComponent; // 0x0
        float CullDistanceMeters; // 0x8
    }; // Size: 0xc
    Params_AutoManageCascadeComponent params{};
    params.ParticleSystemComponent = (UParticleSystemComponent*)ParticleSystemComponent;
    params.CullDistanceMeters = (float)CullDistanceMeters;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
