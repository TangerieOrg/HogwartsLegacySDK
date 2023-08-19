#include "AActor.hpp"
#include "AFXAutoTriggerSingleton.hpp"
#include "FFXAutoTriggerAnyName.hpp"
#include "FFXAutoTriggerRunningFXCollection.hpp"
#include "FMultiFX2Handle.hpp"
#include "UClass.hpp"
#include "UFXAutoTriggerDefinitionAsset.hpp"
#include "UFXAutoTriggerGlobalDefinitionAsset.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void AFXAutoTriggerSingleton::AddCustomBucketActor(AActor* Actor, FName CustomBucket) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.AddCustomBucketActor"));
    struct Params_AddCustomBucketActor {
        AActor* Actor; // 0x0
        FName CustomBucket; // 0x8
    }; // Size: 0x10
    Params_AddCustomBucketActor params{};
    params.Actor = (AActor*)Actor;
    params.CustomBucket = (FName)CustomBucket;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
AFXAutoTriggerSingleton* AFXAutoTriggerSingleton::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerSingleton");
    return (AFXAutoTriggerSingleton*)res;
}
void AFXAutoTriggerSingleton::RemoveManualActors(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, TArray<AActor*> Actors, bool& bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.RemoveManualActors"));
    struct Params_RemoveManualActors {
        UObject* WorldContextObject; // 0x0
        FFXAutoTriggerAnyName FXName; // 0x8
        TArray<AActor*> Actors; // 0x10
        bool bResult; // 0x20
    }; // Size: 0x21
    Params_RemoveManualActors params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXName = (FFXAutoTriggerAnyName)FXName;
    params.Actors = (TArray<AActor*>)Actors;
    params.bResult = (bool)bResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bResult = params.bResult;
}
void AFXAutoTriggerSingleton::SetWorldCustomCondition(UObject* WorldContextObject, FName WorldConditionName, bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.SetWorldCustomCondition"));
    struct Params_SetWorldCustomCondition {
        UObject* WorldContextObject; // 0x0
        FName WorldConditionName; // 0x8
        bool bEnabled; // 0x10
    }; // Size: 0x11
    Params_SetWorldCustomCondition params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.WorldConditionName = (FName)WorldConditionName;
    params.bEnabled = (bool)bEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AFXAutoTriggerSingleton::ManuallyTriggerPrerequisite(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, bool& bResult, bool bTrigger) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.ManuallyTriggerPrerequisite"));
    struct Params_ManuallyTriggerPrerequisite {
        UObject* WorldContextObject; // 0x0
        FFXAutoTriggerAnyName FXName; // 0x8
        bool bResult; // 0x10
        bool bTrigger; // 0x11
    }; // Size: 0x12
    Params_ManuallyTriggerPrerequisite params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXName = (FFXAutoTriggerAnyName)FXName;
    params.bResult = (bool)bResult;
    params.bTrigger = (bool)bTrigger;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bResult = params.bResult;
}
void AFXAutoTriggerSingleton::SetActorCustomCondition(AActor* Actor, FName ActorConditionName, bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.SetActorCustomCondition"));
    struct Params_SetActorCustomCondition {
        AActor* Actor; // 0x0
        FName ActorConditionName; // 0x8
        bool bEnabled; // 0x10
    }; // Size: 0x11
    Params_SetActorCustomCondition params{};
    params.Actor = (AActor*)Actor;
    params.ActorConditionName = (FName)ActorConditionName;
    params.bEnabled = (bool)bEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AFXAutoTriggerSingleton::RemoveManualActor(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, bool& bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.RemoveManualActor"));
    struct Params_RemoveManualActor {
        UObject* WorldContextObject; // 0x0
        FFXAutoTriggerAnyName FXName; // 0x8
        AActor* Actor; // 0x10
        bool bResult; // 0x18
    }; // Size: 0x19
    Params_RemoveManualActor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXName = (FFXAutoTriggerAnyName)FXName;
    params.Actor = (AActor*)Actor;
    params.bResult = (bool)bResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bResult = params.bResult;
}
void AFXAutoTriggerSingleton::RemoveActorByClass(AActor* Actor, UClass* ActorClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.RemoveActorByClass"));
    struct Params_RemoveActorByClass {
        AActor* Actor; // 0x0
        UClass* ActorClass; // 0x8
    }; // Size: 0x10
    Params_RemoveActorByClass params{};
    params.Actor = (AActor*)Actor;
    params.ActorClass = (UClass*)ActorClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AFXAutoTriggerSingleton::RemoveCustomBucketActor(AActor* Actor, FName CustomBucket) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.RemoveCustomBucketActor"));
    struct Params_RemoveCustomBucketActor {
        AActor* Actor; // 0x0
        FName CustomBucket; // 0x8
    }; // Size: 0x10
    Params_RemoveCustomBucketActor params{};
    params.Actor = (AActor*)Actor;
    params.CustomBucket = (FName)CustomBucket;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AFXAutoTriggerSingleton::KillAutoTriggerFX(UObject* WorldContextObject, UObject* FXOwner, UFXAutoTriggerDefinitionAsset* FXAutoTriggerDefinition, bool& bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.KillAutoTriggerFX"));
    struct Params_KillAutoTriggerFX {
        UObject* WorldContextObject; // 0x0
        UObject* FXOwner; // 0x8
        UFXAutoTriggerDefinitionAsset* FXAutoTriggerDefinition; // 0x10
        bool bResult; // 0x18
    }; // Size: 0x19
    Params_KillAutoTriggerFX params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXOwner = (UObject*)FXOwner;
    params.FXAutoTriggerDefinition = (UFXAutoTriggerDefinitionAsset*)FXAutoTriggerDefinition;
    params.bResult = (bool)bResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bResult = params.bResult;
}
void AFXAutoTriggerSingleton::IsManualPrerequisiteTriggered(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, bool& bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.IsManualPrerequisiteTriggered"));
    struct Params_IsManualPrerequisiteTriggered {
        UObject* WorldContextObject; // 0x0
        FFXAutoTriggerAnyName FXName; // 0x8
        bool bResult; // 0x10
    }; // Size: 0x11
    Params_IsManualPrerequisiteTriggered params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXName = (FFXAutoTriggerAnyName)FXName;
    params.bResult = (bool)bResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bResult = params.bResult;
}
void AFXAutoTriggerSingleton::GetActorCustomCondition(AActor* Actor, FName ActorConditionName, bool& bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.GetActorCustomCondition"));
    struct Params_GetActorCustomCondition {
        AActor* Actor; // 0x0
        FName ActorConditionName; // 0x8
        bool bEnabled; // 0x10
    }; // Size: 0x11
    Params_GetActorCustomCondition params{};
    params.Actor = (AActor*)Actor;
    params.ActorConditionName = (FName)ActorConditionName;
    params.bEnabled = (bool)bEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bEnabled = params.bEnabled;
}
void AFXAutoTriggerSingleton::HasManualActor(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, bool& bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.HasManualActor"));
    struct Params_HasManualActor {
        UObject* WorldContextObject; // 0x0
        FFXAutoTriggerAnyName FXName; // 0x8
        AActor* Actor; // 0x10
        bool bResult; // 0x18
    }; // Size: 0x19
    Params_HasManualActor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXName = (FFXAutoTriggerAnyName)FXName;
    params.Actor = (AActor*)Actor;
    params.bResult = (bool)bResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bResult = params.bResult;
}
void AFXAutoTriggerSingleton::HasAutoTriggerFX(UObject* WorldContextObject, UObject* FXOwner, UFXAutoTriggerDefinitionAsset* FXAutoTriggerDefinition, bool& bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.HasAutoTriggerFX"));
    struct Params_HasAutoTriggerFX {
        UObject* WorldContextObject; // 0x0
        UObject* FXOwner; // 0x8
        UFXAutoTriggerDefinitionAsset* FXAutoTriggerDefinition; // 0x10
        bool bResult; // 0x18
    }; // Size: 0x19
    Params_HasAutoTriggerFX params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXOwner = (UObject*)FXOwner;
    params.FXAutoTriggerDefinition = (UFXAutoTriggerDefinitionAsset*)FXAutoTriggerDefinition;
    params.bResult = (bool)bResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bResult = params.bResult;
}
void AFXAutoTriggerSingleton::DisableEffectParameterUpdates(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, FName Parameter, bool bDisableUpdates, bool& bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.DisableEffectParameterUpdates"));
    struct Params_DisableEffectParameterUpdates {
        UObject* WorldContextObject; // 0x0
        FFXAutoTriggerAnyName FXName; // 0x8
        AActor* Actor; // 0x10
        FName Parameter; // 0x18
        bool bDisableUpdates; // 0x20
        bool bResult; // 0x21
    }; // Size: 0x22
    Params_DisableEffectParameterUpdates params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXName = (FFXAutoTriggerAnyName)FXName;
    params.Actor = (AActor*)Actor;
    params.Parameter = (FName)Parameter;
    params.bDisableUpdates = (bool)bDisableUpdates;
    params.bResult = (bool)bResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bResult = params.bResult;
}
void AFXAutoTriggerSingleton::GetWorldCustomCondition(UObject* WorldContextObject, FName WorldConditionName, bool& bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.GetWorldCustomCondition"));
    struct Params_GetWorldCustomCondition {
        UObject* WorldContextObject; // 0x0
        FName WorldConditionName; // 0x8
        bool bEnabled; // 0x10
    }; // Size: 0x11
    Params_GetWorldCustomCondition params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.WorldConditionName = (FName)WorldConditionName;
    params.bEnabled = (bool)bEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bEnabled = params.bEnabled;
}
void AFXAutoTriggerSingleton::AddActorByClass(AActor* Actor, UClass* ActorClass, FName ClassTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.AddActorByClass"));
    struct Params_AddActorByClass {
        AActor* Actor; // 0x0
        UClass* ActorClass; // 0x8
        FName ClassTag; // 0x10
    }; // Size: 0x18
    Params_AddActorByClass params{};
    params.Actor = (AActor*)Actor;
    params.ActorClass = (UClass*)ActorClass;
    params.ClassTag = (FName)ClassTag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AFXAutoTriggerSingleton::GetEffectIsActive(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, bool& bIsActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.GetEffectIsActive"));
    struct Params_GetEffectIsActive {
        UObject* WorldContextObject; // 0x0
        FFXAutoTriggerAnyName FXName; // 0x8
        AActor* Actor; // 0x10
        bool bIsActive; // 0x18
    }; // Size: 0x19
    Params_GetEffectIsActive params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXName = (FFXAutoTriggerAnyName)FXName;
    params.Actor = (AActor*)Actor;
    params.bIsActive = (bool)bIsActive;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsActive = params.bIsActive;
}
void AFXAutoTriggerSingleton::GetEffectHandle(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, FMultiFX2Handle& FXHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.GetEffectHandle"));
    struct Params_GetEffectHandle {
        UObject* WorldContextObject; // 0x0
        FFXAutoTriggerAnyName FXName; // 0x8
        AActor* Actor; // 0x10
        FMultiFX2Handle FXHandle; // 0x18
    }; // Size: 0x20
    Params_GetEffectHandle params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXName = (FFXAutoTriggerAnyName)FXName;
    params.Actor = (AActor*)Actor;
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXHandle = params.FXHandle;
}
void AFXAutoTriggerSingleton::GetAnyEffectIsActive(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, bool& bAnyIsActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.GetAnyEffectIsActive"));
    struct Params_GetAnyEffectIsActive {
        UObject* WorldContextObject; // 0x0
        FFXAutoTriggerAnyName FXName; // 0x8
        bool bAnyIsActive; // 0x10
    }; // Size: 0x11
    Params_GetAnyEffectIsActive params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXName = (FFXAutoTriggerAnyName)FXName;
    params.bAnyIsActive = (bool)bAnyIsActive;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bAnyIsActive = params.bAnyIsActive;
}
void AFXAutoTriggerSingleton::EffectParameterUpdatesDisabled(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, FName Parameter, bool& bIsDisabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.EffectParameterUpdatesDisabled"));
    struct Params_EffectParameterUpdatesDisabled {
        UObject* WorldContextObject; // 0x0
        FFXAutoTriggerAnyName FXName; // 0x8
        AActor* Actor; // 0x10
        FName Parameter; // 0x18
        bool bIsDisabled; // 0x20
    }; // Size: 0x21
    Params_EffectParameterUpdatesDisabled params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXName = (FFXAutoTriggerAnyName)FXName;
    params.Actor = (AActor*)Actor;
    params.Parameter = (FName)Parameter;
    params.bIsDisabled = (bool)bIsDisabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsDisabled = params.bIsDisabled;
}
void AFXAutoTriggerSingleton::EffectUpdatesDisabled(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, bool& bIsDisabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.EffectUpdatesDisabled"));
    struct Params_EffectUpdatesDisabled {
        UObject* WorldContextObject; // 0x0
        FFXAutoTriggerAnyName FXName; // 0x8
        AActor* Actor; // 0x10
        bool bIsDisabled; // 0x18
    }; // Size: 0x19
    Params_EffectUpdatesDisabled params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXName = (FFXAutoTriggerAnyName)FXName;
    params.Actor = (AActor*)Actor;
    params.bIsDisabled = (bool)bIsDisabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsDisabled = params.bIsDisabled;
}
void AFXAutoTriggerSingleton::DisableEffectUpdates(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, bool bDisableUpdates, bool& bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.DisableEffectUpdates"));
    struct Params_DisableEffectUpdates {
        UObject* WorldContextObject; // 0x0
        FFXAutoTriggerAnyName FXName; // 0x8
        AActor* Actor; // 0x10
        bool bDisableUpdates; // 0x18
        bool bResult; // 0x19
    }; // Size: 0x1a
    Params_DisableEffectUpdates params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXName = (FFXAutoTriggerAnyName)FXName;
    params.Actor = (AActor*)Actor;
    params.bDisableUpdates = (bool)bDisableUpdates;
    params.bResult = (bool)bResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bResult = params.bResult;
}
void AFXAutoTriggerSingleton::AddManualActors(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, TArray<AActor*> Actors, bool& bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.AddManualActors"));
    struct Params_AddManualActors {
        UObject* WorldContextObject; // 0x0
        FFXAutoTriggerAnyName FXName; // 0x8
        TArray<AActor*> Actors; // 0x10
        bool bResult; // 0x20
    }; // Size: 0x21
    Params_AddManualActors params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXName = (FFXAutoTriggerAnyName)FXName;
    params.Actors = (TArray<AActor*>)Actors;
    params.bResult = (bool)bResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bResult = params.bResult;
}
void AFXAutoTriggerSingleton::AddManualActor(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, bool& bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.AddManualActor"));
    struct Params_AddManualActor {
        UObject* WorldContextObject; // 0x0
        FFXAutoTriggerAnyName FXName; // 0x8
        AActor* Actor; // 0x10
        bool bResult; // 0x18
    }; // Size: 0x19
    Params_AddManualActor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXName = (FFXAutoTriggerAnyName)FXName;
    params.Actor = (AActor*)Actor;
    params.bResult = (bool)bResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bResult = params.bResult;
}
void AFXAutoTriggerSingleton::AddAutoTriggerFX(UObject* WorldContextObject, UObject* FXOwner, UFXAutoTriggerDefinitionAsset* FXAutoTriggerDefinition, bool& bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.AddAutoTriggerFX"));
    struct Params_AddAutoTriggerFX {
        UObject* WorldContextObject; // 0x0
        UObject* FXOwner; // 0x8
        UFXAutoTriggerDefinitionAsset* FXAutoTriggerDefinition; // 0x10
        bool bResult; // 0x18
    }; // Size: 0x19
    Params_AddAutoTriggerFX params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXOwner = (UObject*)FXOwner;
    params.FXAutoTriggerDefinition = (UFXAutoTriggerDefinitionAsset*)FXAutoTriggerDefinition;
    params.bResult = (bool)bResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bResult = params.bResult;
}
void AFXAutoTriggerSingleton::ActorIsInCustomBucket(AActor* Actor, FName CustomBucket, bool& bIsIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.FXAutoTriggerSingleton.ActorIsInCustomBucket"));
    struct Params_ActorIsInCustomBucket {
        AActor* Actor; // 0x0
        FName CustomBucket; // 0x8
        bool bIsIn; // 0x10
    }; // Size: 0x11
    Params_ActorIsInCustomBucket params{};
    params.Actor = (AActor*)Actor;
    params.CustomBucket = (FName)CustomBucket;
    params.bIsIn = (bool)bIsIn;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsIn = params.bIsIn;
}
