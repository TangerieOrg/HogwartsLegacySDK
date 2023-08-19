#include "AActor.hpp"
#include "ENiagaraHelpersPrimMatchMode.hpp"
#include "ENiagaraHelpersPrimRule.hpp"
#include "ENiagaraSpawnBoundsMethod.hpp"
#include "FLinearColor.hpp"
#include "FNiagaraHelpersPrimFilter.hpp"
#include "FNiagaraSystemSpawnAttachedInfo.hpp"
#include "FNiagaraSystemSpawnAttachedPointInfo.hpp"
#include "FNiagaraSystemSpawnInfo.hpp"
#include "FNiagaraSystemSpawnMultiSkeletalInfo.hpp"
#include "FNiagaraSystemSpawnMultiStaticInfo.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraHelpers.hpp"
#include "UNiagaraParameterCollectionInstance.hpp"
#include "UNiagaraSystem.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USkinnedMeshComponent.hpp"
void UNiagaraHelpers::SpawnSystemOnSkeletalMeshes(AActor* Actor, UNiagaraSystem* NiagaraSystem, FNiagaraSystemSpawnMultiSkeletalInfo SpawnInfo, FNiagaraHelpersPrimFilter Filter, TArray<UNiagaraComponent*>& NiagaraComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.SpawnSystemOnSkeletalMeshes"));
    struct Params_SpawnSystemOnSkeletalMeshes {
        AActor* Actor; // 0x0
        UNiagaraSystem* NiagaraSystem; // 0x8
        FNiagaraSystemSpawnMultiSkeletalInfo SpawnInfo; // 0x10
        FNiagaraHelpersPrimFilter Filter; // 0x90
        TArray<UNiagaraComponent*> NiagaraComponents; // 0xa8
    }; // Size: 0xb8
    Params_SpawnSystemOnSkeletalMeshes params{};
    params.Actor = (AActor*)Actor;
    params.NiagaraSystem = (UNiagaraSystem*)NiagaraSystem;
    params.SpawnInfo = (FNiagaraSystemSpawnMultiSkeletalInfo)SpawnInfo;
    params.Filter = (FNiagaraHelpersPrimFilter)Filter;
    params.NiagaraComponents = (TArray<UNiagaraComponent*>)NiagaraComponents;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    NiagaraComponents = params.NiagaraComponents;
}
UNiagaraHelpers* UNiagaraHelpers::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraHelpers.NiagaraHelpers");
    return (UNiagaraHelpers*)res;
}
void UNiagaraHelpers::SpawnSystemOnPrimitives(AActor* Actor, UNiagaraSystem* NiagaraSystem, FNiagaraSystemSpawnAttachedInfo SpawnInfo, FNiagaraHelpersPrimFilter Filter, TArray<UNiagaraComponent*>& NiagaraComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.SpawnSystemOnPrimitives"));
    struct Params_SpawnSystemOnPrimitives {
        AActor* Actor; // 0x0
        UNiagaraSystem* NiagaraSystem; // 0x8
        FNiagaraSystemSpawnAttachedInfo SpawnInfo; // 0x10
        FNiagaraHelpersPrimFilter Filter; // 0x80
        TArray<UNiagaraComponent*> NiagaraComponents; // 0x98
    }; // Size: 0xa8
    Params_SpawnSystemOnPrimitives params{};
    params.Actor = (AActor*)Actor;
    params.NiagaraSystem = (UNiagaraSystem*)NiagaraSystem;
    params.SpawnInfo = (FNiagaraSystemSpawnAttachedInfo)SpawnInfo;
    params.Filter = (FNiagaraHelpersPrimFilter)Filter;
    params.NiagaraComponents = (TArray<UNiagaraComponent*>)NiagaraComponents;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    NiagaraComponents = params.NiagaraComponents;
}
void UNiagaraHelpers::SpawnSystemOnStaticMeshes(AActor* Actor, UNiagaraSystem* NiagaraSystem, FNiagaraSystemSpawnMultiStaticInfo SpawnInfo, FNiagaraHelpersPrimFilter Filter, TArray<UNiagaraComponent*>& NiagaraComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.SpawnSystemOnStaticMeshes"));
    struct Params_SpawnSystemOnStaticMeshes {
        AActor* Actor; // 0x0
        UNiagaraSystem* NiagaraSystem; // 0x8
        FNiagaraSystemSpawnMultiStaticInfo SpawnInfo; // 0x10
        FNiagaraHelpersPrimFilter Filter; // 0x90
        TArray<UNiagaraComponent*> NiagaraComponents; // 0xa8
    }; // Size: 0xb8
    Params_SpawnSystemOnStaticMeshes params{};
    params.Actor = (AActor*)Actor;
    params.NiagaraSystem = (UNiagaraSystem*)NiagaraSystem;
    params.SpawnInfo = (FNiagaraSystemSpawnMultiStaticInfo)SpawnInfo;
    params.Filter = (FNiagaraHelpersPrimFilter)Filter;
    params.NiagaraComponents = (TArray<UNiagaraComponent*>)NiagaraComponents;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    NiagaraComponents = params.NiagaraComponents;
}
FNiagaraHelpersPrimFilter UNiagaraHelpers::MakePrimFilterName(ENiagaraHelpersPrimRule Rule, FName Primitive, ENiagaraHelpersPrimMatchMode MatchMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.MakePrimFilterName"));
    struct Params_MakePrimFilterName {
        ENiagaraHelpersPrimRule Rule; // 0x0
        char pad_1[0x3];
        FName Primitive; // 0x4
        ENiagaraHelpersPrimMatchMode MatchMode; // 0xc
        char pad_d[0x3];
        FNiagaraHelpersPrimFilter ReturnValue; // 0x10
    }; // Size: 0x28
    Params_MakePrimFilterName params{};
    params.Rule = (ENiagaraHelpersPrimRule)Rule;
    params.Primitive = (FName)Primitive;
    params.MatchMode = (ENiagaraHelpersPrimMatchMode)MatchMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FNiagaraHelpersPrimFilter)params.ReturnValue;
}
void UNiagaraHelpers::SpawnInWorld(UObject* WorldContextObject, UNiagaraSystem* NiagaraSystem, FNiagaraSystemSpawnInfo SpawnInfo, UNiagaraComponent*& NiagaraComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.SpawnInWorld"));
    struct Params_SpawnInWorld {
        UObject* WorldContextObject; // 0x0
        UNiagaraSystem* NiagaraSystem; // 0x8
        FNiagaraSystemSpawnInfo SpawnInfo; // 0x10
        UNiagaraComponent* NiagaraComponent; // 0x60
    }; // Size: 0x68
    Params_SpawnInWorld params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.NiagaraSystem = (UNiagaraSystem*)NiagaraSystem;
    params.SpawnInfo = (FNiagaraSystemSpawnInfo)SpawnInfo;
    params.NiagaraComponent = (UNiagaraComponent*)NiagaraComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    NiagaraComponent = params.NiagaraComponent;
}
void UNiagaraHelpers::SpawnAttachedActor(AActor* Actor, UNiagaraSystem* NiagaraSystem, FNiagaraSystemSpawnAttachedPointInfo SpawnInfo, UNiagaraComponent*& NiagaraComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.SpawnAttachedActor"));
    struct Params_SpawnAttachedActor {
        AActor* Actor; // 0x0
        UNiagaraSystem* NiagaraSystem; // 0x8
        FNiagaraSystemSpawnAttachedPointInfo SpawnInfo; // 0x10
        UNiagaraComponent* NiagaraComponent; // 0x90
    }; // Size: 0x98
    Params_SpawnAttachedActor params{};
    params.Actor = (AActor*)Actor;
    params.NiagaraSystem = (UNiagaraSystem*)NiagaraSystem;
    params.SpawnInfo = (FNiagaraSystemSpawnAttachedPointInfo)SpawnInfo;
    params.NiagaraComponent = (UNiagaraComponent*)NiagaraComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    NiagaraComponent = params.NiagaraComponent;
}
void UNiagaraHelpers::SpawnAttached(USceneComponent* SceneComponent, UNiagaraSystem* NiagaraSystem, FNiagaraSystemSpawnAttachedPointInfo SpawnInfo, UNiagaraComponent*& NiagaraComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.SpawnAttached"));
    struct Params_SpawnAttached {
        USceneComponent* SceneComponent; // 0x0
        UNiagaraSystem* NiagaraSystem; // 0x8
        FNiagaraSystemSpawnAttachedPointInfo SpawnInfo; // 0x10
        UNiagaraComponent* NiagaraComponent; // 0x90
    }; // Size: 0x98
    Params_SpawnAttached params{};
    params.SceneComponent = (USceneComponent*)SceneComponent;
    params.NiagaraSystem = (UNiagaraSystem*)NiagaraSystem;
    params.SpawnInfo = (FNiagaraSystemSpawnAttachedPointInfo)SpawnInfo;
    params.NiagaraComponent = (UNiagaraComponent*)NiagaraComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    NiagaraComponent = params.NiagaraComponent;
}
void UNiagaraHelpers::NPCSetParameterVector(UNiagaraParameterCollectionInstance* npci, FString ParamName, FVector Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.NPCSetParameterVector"));
    struct Params_NPCSetParameterVector {
        UNiagaraParameterCollectionInstance* npci; // 0x0
        FString ParamName; // 0x8
        FVector Value; // 0x18
    }; // Size: 0x24
    Params_NPCSetParameterVector params{};
    params.npci = (UNiagaraParameterCollectionInstance*)npci;
    params.ParamName = (FString)ParamName;
    params.Value = (FVector)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UNiagaraHelpers::NPCSetParameterFloat(UNiagaraParameterCollectionInstance* npci, FString ParamName, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.NPCSetParameterFloat"));
    struct Params_NPCSetParameterFloat {
        UNiagaraParameterCollectionInstance* npci; // 0x0
        FString ParamName; // 0x8
        float Value; // 0x18
    }; // Size: 0x1c
    Params_NPCSetParameterFloat params{};
    params.npci = (UNiagaraParameterCollectionInstance*)npci;
    params.ParamName = (FString)ParamName;
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UNiagaraHelpers::NPCSetParameterColor(UNiagaraParameterCollectionInstance* npci, FString ParamName, FLinearColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.NPCSetParameterColor"));
    struct Params_NPCSetParameterColor {
        UNiagaraParameterCollectionInstance* npci; // 0x0
        FString ParamName; // 0x8
        FLinearColor Value; // 0x18
    }; // Size: 0x28
    Params_NPCSetParameterColor params{};
    params.npci = (UNiagaraParameterCollectionInstance*)npci;
    params.ParamName = (FString)ParamName;
    params.Value = (FLinearColor)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FNiagaraHelpersPrimFilter UNiagaraHelpers::MakePrimFilterPrimitives(ENiagaraHelpersPrimRule Rule, TArray<UPrimitiveComponent*> Primitives, ENiagaraHelpersPrimMatchMode MatchMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.MakePrimFilterPrimitives"));
    struct Params_MakePrimFilterPrimitives {
        ENiagaraHelpersPrimRule Rule; // 0x0
        char pad_1[0x7];
        TArray<UPrimitiveComponent*> Primitives; // 0x8
        ENiagaraHelpersPrimMatchMode MatchMode; // 0x18
        char pad_19[0x7];
        FNiagaraHelpersPrimFilter ReturnValue; // 0x20
    }; // Size: 0x38
    Params_MakePrimFilterPrimitives params{};
    params.Rule = (ENiagaraHelpersPrimRule)Rule;
    params.Primitives = (TArray<UPrimitiveComponent*>)Primitives;
    params.MatchMode = (ENiagaraHelpersPrimMatchMode)MatchMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FNiagaraHelpersPrimFilter)params.ReturnValue;
}
FNiagaraHelpersPrimFilter UNiagaraHelpers::MakePrimFilterPrimitive(ENiagaraHelpersPrimRule Rule, UPrimitiveComponent* Primitive, ENiagaraHelpersPrimMatchMode MatchMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.MakePrimFilterPrimitive"));
    struct Params_MakePrimFilterPrimitive {
        ENiagaraHelpersPrimRule Rule; // 0x0
        char pad_1[0x7];
        UPrimitiveComponent* Primitive; // 0x8
        ENiagaraHelpersPrimMatchMode MatchMode; // 0x10
        char pad_11[0x7];
        FNiagaraHelpersPrimFilter ReturnValue; // 0x18
    }; // Size: 0x30
    Params_MakePrimFilterPrimitive params{};
    params.Rule = (ENiagaraHelpersPrimRule)Rule;
    params.Primitive = (UPrimitiveComponent*)Primitive;
    params.MatchMode = (ENiagaraHelpersPrimMatchMode)MatchMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FNiagaraHelpersPrimFilter)params.ReturnValue;
}
FNiagaraHelpersPrimFilter UNiagaraHelpers::MakePrimFilterNames(ENiagaraHelpersPrimRule Rule, TArray<FName> Primitives, ENiagaraHelpersPrimMatchMode MatchMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.MakePrimFilterNames"));
    struct Params_MakePrimFilterNames {
        ENiagaraHelpersPrimRule Rule; // 0x0
        char pad_1[0x7];
        TArray<FName> Primitives; // 0x8
        ENiagaraHelpersPrimMatchMode MatchMode; // 0x18
        char pad_19[0x7];
        FNiagaraHelpersPrimFilter ReturnValue; // 0x20
    }; // Size: 0x38
    Params_MakePrimFilterNames params{};
    params.Rule = (ENiagaraHelpersPrimRule)Rule;
    params.Primitives = (TArray<FName>)Primitives;
    params.MatchMode = (ENiagaraHelpersPrimMatchMode)MatchMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FNiagaraHelpersPrimFilter)params.ReturnValue;
}
void UNiagaraHelpers::GetEmitterNames(UNiagaraSystem* NiagaraSystem, TArray<FName>& emitterNames, bool includeHidden) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.GetEmitterNames"));
    struct Params_GetEmitterNames {
        UNiagaraSystem* NiagaraSystem; // 0x0
        TArray<FName> emitterNames; // 0x8
        bool includeHidden; // 0x18
    }; // Size: 0x19
    Params_GetEmitterNames params{};
    params.NiagaraSystem = (UNiagaraSystem*)NiagaraSystem;
    params.emitterNames = (TArray<FName>)emitterNames;
    params.includeHidden = (bool)includeHidden;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    emitterNames = params.emitterNames;
}
void UNiagaraHelpers::ComputeComponentBoundsMeasure(TArray<USceneComponent*> Components, ENiagaraSpawnBoundsMethod Method, float& Measure, float LinearPower) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.ComputeComponentBoundsMeasure"));
    struct Params_ComputeComponentBoundsMeasure {
        TArray<USceneComponent*> Components; // 0x0
        ENiagaraSpawnBoundsMethod Method; // 0x10
        char pad_11[0x3];
        float Measure; // 0x14
        float LinearPower; // 0x18
    }; // Size: 0x1c
    Params_ComputeComponentBoundsMeasure params{};
    params.Components = (TArray<USceneComponent*>)Components;
    params.Method = (ENiagaraSpawnBoundsMethod)Method;
    params.Measure = (float)Measure;
    params.LinearPower = (float)LinearPower;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Measure = params.Measure;
}
void UNiagaraHelpers::ComputeActorStaticMeshBoundsMeasure(AActor* Actor, ENiagaraSpawnBoundsMethod Method, float& Measure, float LinearPower) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.ComputeActorStaticMeshBoundsMeasure"));
    struct Params_ComputeActorStaticMeshBoundsMeasure {
        AActor* Actor; // 0x0
        ENiagaraSpawnBoundsMethod Method; // 0x8
        char pad_9[0x3];
        float Measure; // 0xc
        float LinearPower; // 0x10
    }; // Size: 0x14
    Params_ComputeActorStaticMeshBoundsMeasure params{};
    params.Actor = (AActor*)Actor;
    params.Method = (ENiagaraSpawnBoundsMethod)Method;
    params.Measure = (float)Measure;
    params.LinearPower = (float)LinearPower;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Measure = params.Measure;
}
void UNiagaraHelpers::ComputeActorSkeletalMeshBoundsMeasure(AActor* Actor, ENiagaraSpawnBoundsMethod Method, float& Measure, float LinearPower) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.ComputeActorSkeletalMeshBoundsMeasure"));
    struct Params_ComputeActorSkeletalMeshBoundsMeasure {
        AActor* Actor; // 0x0
        ENiagaraSpawnBoundsMethod Method; // 0x8
        char pad_9[0x3];
        float Measure; // 0xc
        float LinearPower; // 0x10
    }; // Size: 0x14
    Params_ComputeActorSkeletalMeshBoundsMeasure params{};
    params.Actor = (AActor*)Actor;
    params.Method = (ENiagaraSpawnBoundsMethod)Method;
    params.Measure = (float)Measure;
    params.LinearPower = (float)LinearPower;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Measure = params.Measure;
}
void UNiagaraHelpers::ComputeActorMeshBoundsMeasure(AActor* Actor, ENiagaraSpawnBoundsMethod Method, float& Measure, float LinearPower) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.ComputeActorMeshBoundsMeasure"));
    struct Params_ComputeActorMeshBoundsMeasure {
        AActor* Actor; // 0x0
        ENiagaraSpawnBoundsMethod Method; // 0x8
        char pad_9[0x3];
        float Measure; // 0xc
        float LinearPower; // 0x10
    }; // Size: 0x14
    Params_ComputeActorMeshBoundsMeasure params{};
    params.Actor = (AActor*)Actor;
    params.Method = (ENiagaraSpawnBoundsMethod)Method;
    params.Measure = (float)Measure;
    params.LinearPower = (float)LinearPower;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Measure = params.Measure;
}
void UNiagaraHelpers::ComputeActorPrimitiveBoundsMeasure(AActor* Actor, ENiagaraSpawnBoundsMethod Method, float& Measure, float LinearPower) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.ComputeActorPrimitiveBoundsMeasure"));
    struct Params_ComputeActorPrimitiveBoundsMeasure {
        AActor* Actor; // 0x0
        ENiagaraSpawnBoundsMethod Method; // 0x8
        char pad_9[0x3];
        float Measure; // 0xc
        float LinearPower; // 0x10
    }; // Size: 0x14
    Params_ComputeActorPrimitiveBoundsMeasure params{};
    params.Actor = (AActor*)Actor;
    params.Method = (ENiagaraSpawnBoundsMethod)Method;
    params.Measure = (float)Measure;
    params.LinearPower = (float)LinearPower;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Measure = params.Measure;
}
void UNiagaraHelpers::ActorFindSocketOnComponent(AActor* Actor, FName SocketName, USceneComponent*& ComponentWithSocket, bool bDeepSearchComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.ActorFindSocketOnComponent"));
    struct Params_ActorFindSocketOnComponent {
        AActor* Actor; // 0x0
        FName SocketName; // 0x8
        USceneComponent* ComponentWithSocket; // 0x10
        bool bDeepSearchComponents; // 0x18
    }; // Size: 0x19
    Params_ActorFindSocketOnComponent params{};
    params.Actor = (AActor*)Actor;
    params.SocketName = (FName)SocketName;
    params.ComponentWithSocket = (USceneComponent*)ComponentWithSocket;
    params.bDeepSearchComponents = (bool)bDeepSearchComponents;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ComponentWithSocket = params.ComponentWithSocket;
}
void UNiagaraHelpers::ActorFindBoneOrSocketOnComponent(AActor* Actor, FName BoneOrSocketName, USceneComponent*& ComponentWithBoneOrSocket, int32_t& BoneIndex, bool bDeepSearchComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.ActorFindBoneOrSocketOnComponent"));
    struct Params_ActorFindBoneOrSocketOnComponent {
        AActor* Actor; // 0x0
        FName BoneOrSocketName; // 0x8
        USceneComponent* ComponentWithBoneOrSocket; // 0x10
        int32_t BoneIndex; // 0x18
        bool bDeepSearchComponents; // 0x1c
    }; // Size: 0x1d
    Params_ActorFindBoneOrSocketOnComponent params{};
    params.Actor = (AActor*)Actor;
    params.BoneOrSocketName = (FName)BoneOrSocketName;
    params.ComponentWithBoneOrSocket = (USceneComponent*)ComponentWithBoneOrSocket;
    params.BoneIndex = (int32_t)BoneIndex;
    params.bDeepSearchComponents = (bool)bDeepSearchComponents;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ComponentWithBoneOrSocket = params.ComponentWithBoneOrSocket;
    BoneIndex = params.BoneIndex;
}
void UNiagaraHelpers::ActorFindBoneOnComponent(AActor* Actor, FName BoneName, USkinnedMeshComponent*& ComponentWithBone, int32_t& BoneIndex, bool bDeepSearchComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.ActorFindBoneOnComponent"));
    struct Params_ActorFindBoneOnComponent {
        AActor* Actor; // 0x0
        FName BoneName; // 0x8
        USkinnedMeshComponent* ComponentWithBone; // 0x10
        int32_t BoneIndex; // 0x18
        bool bDeepSearchComponents; // 0x1c
    }; // Size: 0x1d
    Params_ActorFindBoneOnComponent params{};
    params.Actor = (AActor*)Actor;
    params.BoneName = (FName)BoneName;
    params.ComponentWithBone = (USkinnedMeshComponent*)ComponentWithBone;
    params.BoneIndex = (int32_t)BoneIndex;
    params.bDeepSearchComponents = (bool)bDeepSearchComponents;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ComponentWithBone = params.ComponentWithBone;
    BoneIndex = params.BoneIndex;
}
void UNiagaraHelpers::ActorBestDefaultAttachComponent(AActor* Actor, USceneComponent*& AttachComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpers.ActorBestDefaultAttachComponent"));
    struct Params_ActorBestDefaultAttachComponent {
        AActor* Actor; // 0x0
        USceneComponent* AttachComponent; // 0x8
    }; // Size: 0x10
    Params_ActorBestDefaultAttachComponent params{};
    params.Actor = (AActor*)Actor;
    params.AttachComponent = (USceneComponent*)AttachComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    AttachComponent = params.AttachComponent;
}
