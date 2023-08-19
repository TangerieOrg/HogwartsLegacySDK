#include "PreSDK.hpp"
#include "AActor.hpp"
#include "EEnemy_ParryButtonPressed.hpp"
#include "FDamageResult.hpp"
#include "FEnemy_ParryTimeToImpactData.hpp"
#include "FEnemy_ParryWindowBeginData.hpp"
#include "FEnemy_ParryWindowEndData.hpp"
#include "FGameplayTagContainerWrapper.hpp"
#include "FHitBySpellData.hpp"
#include "FInventoryResult.hpp"
#include "FLinearColor.hpp"
#include "FLockManagerLock.hpp"
#include "FRotator.hpp"
#include "FRuntimeCurveLinearColor.hpp"
#include "FRuntimeCurveVector.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FSoftObjectPath.hpp"
#include "FSpellForce.hpp"
#include "FVector.hpp"
#include "HouseIds.hpp"
#include "UActorComponent.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UForceResidentStreamableRenderAssetCollectionWrapper.hpp"
#include "UFunction.hpp"
#include "UGearAppearanceItemDefinition.hpp"
#include "UMeshComponent.hpp"
#include "UObject.hpp"
#include "UPhoenixBPLibrary.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStationComponent.hpp"
#include "UWorld.hpp"

UPhoenixBPLibrary* UPhoenixBPLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixBPLibrary");
    return (UPhoenixBPLibrary*)res;
}
void UPhoenixBPLibrary::SetActorId(AActor* Actor, FName ActorId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.SetActorId"));
    struct Params_SetActorId {
        AActor* Actor; // 0x0
        FName ActorId; // 0x8
    }; // Size: 0x10
    Params_SetActorId params{};
    params.Actor = (AActor*)Actor;
    params.ActorId = (FName)ActorId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixBPLibrary::HermesExecuteAllParryWindowBegin(FString Name, UObject* Caller, FEnemy_ParryWindowBeginData& ParryWindowBeginData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteAllParryWindowBegin"));
    struct Params_HermesExecuteAllParryWindowBegin {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FEnemy_ParryWindowBeginData ParryWindowBeginData; // 0x18
    }; // Size: 0x2c
    Params_HermesExecuteAllParryWindowBegin params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.ParryWindowBeginData = (FEnemy_ParryWindowBeginData)ParryWindowBeginData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ParryWindowBeginData = params.ParryWindowBeginData;
}
void UPhoenixBPLibrary::VerifyKey(TArray<FString>& Keys) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.VerifyKey"));
    struct Params_VerifyKey {
        TArray<FString> Keys; // 0x0
    }; // Size: 0x10
    Params_VerifyKey params{};
    params.Keys = (TArray<FString>)Keys;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
}
void UPhoenixBPLibrary::HermesExecuteOwnedParryWindowEnd(FString Name, UObject* Owner, UObject* Caller, FEnemy_ParryWindowEndData& ParryWindowEndData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteOwnedParryWindowEnd"));
    struct Params_HermesExecuteOwnedParryWindowEnd {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FEnemy_ParryWindowEndData ParryWindowEndData; // 0x20
    }; // Size: 0x28
    Params_HermesExecuteOwnedParryWindowEnd params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.ParryWindowEndData = (FEnemy_ParryWindowEndData)ParryWindowEndData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ParryWindowEndData = params.ParryWindowEndData;
}
void UPhoenixBPLibrary::SetMeshVisibleInRayTracing(UMeshComponent* MeshComponent, bool bVisibleInRayTracing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.SetMeshVisibleInRayTracing"));
    struct Params_SetMeshVisibleInRayTracing {
        UMeshComponent* MeshComponent; // 0x0
        bool bVisibleInRayTracing; // 0x8
    }; // Size: 0x9
    Params_SetMeshVisibleInRayTracing params{};
    params.MeshComponent = (UMeshComponent*)MeshComponent;
    params.bVisibleInRayTracing = (bool)bVisibleInRayTracing;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixBPLibrary::SetActorVisibleInRayTracing(AActor* Actor, bool bVisibleInRayTracing, bool bIncludeChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.SetActorVisibleInRayTracing"));
    struct Params_SetActorVisibleInRayTracing {
        AActor* Actor; // 0x0
        bool bVisibleInRayTracing; // 0x8
        bool bIncludeChildren; // 0x9
    }; // Size: 0xa
    Params_SetActorVisibleInRayTracing params{};
    params.Actor = (AActor*)Actor;
    params.bVisibleInRayTracing = (bool)bVisibleInRayTracing;
    params.bIncludeChildren = (bool)bIncludeChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixBPLibrary::MakeSoftObjectReference(FString PathString) {}
void UPhoenixBPLibrary::HermesExecuteAllParryWindowEnd(FString Name, UObject* Caller, FEnemy_ParryWindowEndData& ParryWindowEndData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteAllParryWindowEnd"));
    struct Params_HermesExecuteAllParryWindowEnd {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FEnemy_ParryWindowEndData ParryWindowEndData; // 0x18
    }; // Size: 0x20
    Params_HermesExecuteAllParryWindowEnd params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.ParryWindowEndData = (FEnemy_ParryWindowEndData)ParryWindowEndData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ParryWindowEndData = params.ParryWindowEndData;
}
void UPhoenixBPLibrary::AVATranslate(FString Key, FString DebugLogText) {}
void UPhoenixBPLibrary::MakeSoftObjectReferenceFromPath(FSoftObjectPath& Path) {}
UForceResidentStreamableRenderAssetCollectionWrapper* UPhoenixBPLibrary::LoadGearAppearanceItemDefinitionLODs(UWorld* World, TArray<UGearAppearanceItemDefinition*> GearAppearanceItemDefinitions, bool bIncludeTextures) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.LoadGearAppearanceItemDefinitionLODs"));
    struct Params_LoadGearAppearanceItemDefinitionLODs {
        UWorld* World; // 0x0
        TArray<UGearAppearanceItemDefinition*> GearAppearanceItemDefinitions; // 0x8
        bool bIncludeTextures; // 0x18
        char pad_19[0x7];
        UForceResidentStreamableRenderAssetCollectionWrapper* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_LoadGearAppearanceItemDefinitionLODs params{};
    params.World = (UWorld*)World;
    params.GearAppearanceItemDefinitions = (TArray<UGearAppearanceItemDefinition*>)GearAppearanceItemDefinitions;
    params.bIncludeTextures = (bool)bIncludeTextures;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UForceResidentStreamableRenderAssetCollectionWrapper*)params.ReturnValue;
}
void UPhoenixBPLibrary::HermesBindReflectAttack() {}
bool UPhoenixBPLibrary::IsRegexMatch(FString Pattern, FString Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.IsRegexMatch"));
    struct Params_IsRegexMatch {
        FString Pattern; // 0x0
        FString Input; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_IsRegexMatch params{};
    params.Pattern = (FString)Pattern;
    params.Input = (FString)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixBPLibrary::IsItemOwned(FString ProductID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.IsItemOwned"));
    struct Params_IsItemOwned {
        FString ProductID; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsItemOwned params{};
    params.ProductID = (FString)ProductID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixBPLibrary::HermesStationComponentDelegate__DelegateSignature(UObject* Caller, UStationComponent* StationComponent) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.PhoenixBPLibrary.HermesStationComponentDelegate__DelegateSignature"));
    struct Params_HermesStationComponentDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        UStationComponent* StationComponent; // 0x8
    }; // Size: 0x10
    Params_HermesStationComponentDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.StationComponent = (UStationComponent*)StationComponent;
    ProcessEvent(func, &params);
}
bool UPhoenixBPLibrary::GetActorId(AActor* Actor, FName& OutActorId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.GetActorId"));
    struct Params_GetActorId {
        AActor* Actor; // 0x0
        FName OutActorId; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetActorId params{};
    params.Actor = (AActor*)Actor;
    params.OutActorId = (FName)OutActorId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutActorId = params.OutActorId;
    return (bool)params.ReturnValue;
}
void UPhoenixBPLibrary::HermesBindActorHitBySpell() {}
void UPhoenixBPLibrary::HermesLockDelegate__DelegateSignature(UObject* Caller, FLockManagerLock& Lock) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.PhoenixBPLibrary.HermesLockDelegate__DelegateSignature"));
    struct Params_HermesLockDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FLockManagerLock Lock; // 0x8
    }; // Size: 0x14
    Params_HermesLockDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.Lock = (FLockManagerLock)Lock;
    ProcessEvent(func, &params);
    Lock = params.Lock;
}
void UPhoenixBPLibrary::HermesSpellForceDelegate__DelegateSignature(UObject* Caller, FSpellForce& SpellForce) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.PhoenixBPLibrary.HermesSpellForceDelegate__DelegateSignature"));
    struct Params_HermesSpellForceDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FSpellForce SpellForce; // 0x8
    }; // Size: 0x20
    Params_HermesSpellForceDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.SpellForce = (FSpellForce)SpellForce;
    ProcessEvent(func, &params);
    SpellForce = params.SpellForce;
}
void UPhoenixBPLibrary::HermesReflectAttackDelegate__DelegateSignature(UObject* Caller, FDamageResult& DamageResult) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.PhoenixBPLibrary.HermesReflectAttackDelegate__DelegateSignature"));
    struct Params_HermesReflectAttackDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FDamageResult DamageResult; // 0x8
    }; // Size: 0x60
    Params_HermesReflectAttackDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.DamageResult = (FDamageResult)DamageResult;
    ProcessEvent(func, &params);
    DamageResult = params.DamageResult;
}
void UPhoenixBPLibrary::HermesParryWindowEndDelegate__DelegateSignature(UObject* Caller, FEnemy_ParryWindowEndData& ParryWindowEndData) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.PhoenixBPLibrary.HermesParryWindowEndDelegate__DelegateSignature"));
    struct Params_HermesParryWindowEndDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FEnemy_ParryWindowEndData ParryWindowEndData; // 0x8
    }; // Size: 0x10
    Params_HermesParryWindowEndDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.ParryWindowEndData = (FEnemy_ParryWindowEndData)ParryWindowEndData;
    ProcessEvent(func, &params);
    ParryWindowEndData = params.ParryWindowEndData;
}
void UPhoenixBPLibrary::HermesParryWindowBeginDelegate__DelegateSignature(UObject* Caller, FEnemy_ParryWindowBeginData& ParryWindowBeginData) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.PhoenixBPLibrary.HermesParryWindowBeginDelegate__DelegateSignature"));
    struct Params_HermesParryWindowBeginDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FEnemy_ParryWindowBeginData ParryWindowBeginData; // 0x8
    }; // Size: 0x1c
    Params_HermesParryWindowBeginDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.ParryWindowBeginData = (FEnemy_ParryWindowBeginData)ParryWindowBeginData;
    ProcessEvent(func, &params);
    ParryWindowBeginData = params.ParryWindowBeginData;
}
void UPhoenixBPLibrary::HermesParryTimeToImpactDelegate__DelegateSignature(UObject* Caller, FEnemy_ParryTimeToImpactData& ParryTimeToImpactData) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.PhoenixBPLibrary.HermesParryTimeToImpactDelegate__DelegateSignature"));
    struct Params_HermesParryTimeToImpactDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FEnemy_ParryTimeToImpactData ParryTimeToImpactData; // 0x8
    }; // Size: 0x38
    Params_HermesParryTimeToImpactDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.ParryTimeToImpactData = (FEnemy_ParryTimeToImpactData)ParryTimeToImpactData;
    ProcessEvent(func, &params);
    ParryTimeToImpactData = params.ParryTimeToImpactData;
}
FRotator UPhoenixBPLibrary::GetDisillusionmentEyeRotation(FName ParentSocket, USceneComponent* Mesh, FVector& TargetLocation, float MaxHorizontalAngle, float MaxVerticalAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.GetDisillusionmentEyeRotation"));
    struct Params_GetDisillusionmentEyeRotation {
        FName ParentSocket; // 0x0
        USceneComponent* Mesh; // 0x8
        FVector TargetLocation; // 0x10
        float MaxHorizontalAngle; // 0x1c
        float MaxVerticalAngle; // 0x20
        FRotator ReturnValue; // 0x24
    }; // Size: 0x30
    Params_GetDisillusionmentEyeRotation params{};
    params.ParentSocket = (FName)ParentSocket;
    params.Mesh = (USceneComponent*)Mesh;
    params.TargetLocation = (FVector)TargetLocation;
    params.MaxHorizontalAngle = (float)MaxHorizontalAngle;
    params.MaxVerticalAngle = (float)MaxVerticalAngle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetLocation = params.TargetLocation;
    return (FRotator)params.ReturnValue;
}
void UPhoenixBPLibrary::HermesParryEventDelegate__DelegateSignature(UObject* Caller, EEnemy_ParryButtonPressed ButtonPressed) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.PhoenixBPLibrary.HermesParryEventDelegate__DelegateSignature"));
    struct Params_HermesParryEventDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        EEnemy_ParryButtonPressed ButtonPressed; // 0x8
    }; // Size: 0x9
    Params_HermesParryEventDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.ButtonPressed = (EEnemy_ParryButtonPressed)ButtonPressed;
    ProcessEvent(func, &params);
}
void UPhoenixBPLibrary::HermesInventoryResultDelegate__DelegateSignature(UObject* Caller, FInventoryResult& InventoryResult) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.PhoenixBPLibrary.HermesInventoryResultDelegate__DelegateSignature"));
    struct Params_HermesInventoryResultDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FInventoryResult InventoryResult; // 0x8
    }; // Size: 0x90
    Params_HermesInventoryResultDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.InventoryResult = (FInventoryResult)InventoryResult;
    ProcessEvent(func, &params);
    InventoryResult = params.InventoryResult;
}
void UPhoenixBPLibrary::HermesExecuteOwnedStationComponent(FString Name, UObject* Owner, UObject* Caller, UStationComponent* StationComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteOwnedStationComponent"));
    struct Params_HermesExecuteOwnedStationComponent {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        UStationComponent* StationComponent; // 0x20
    }; // Size: 0x28
    Params_HermesExecuteOwnedStationComponent params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.StationComponent = (UStationComponent*)StationComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixBPLibrary::HermesExecuteOwnedSpellForce(FString Name, UObject* Owner, UObject* Caller, FSpellForce& SpellForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteOwnedSpellForce"));
    struct Params_HermesExecuteOwnedSpellForce {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FSpellForce SpellForce; // 0x20
    }; // Size: 0x38
    Params_HermesExecuteOwnedSpellForce params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.SpellForce = (FSpellForce)SpellForce;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpellForce = params.SpellForce;
}
void UPhoenixBPLibrary::HermesExecuteOwnedReflectAttack(FString Name, UObject* Owner, UObject* Caller, FDamageResult& DamageResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteOwnedReflectAttack"));
    struct Params_HermesExecuteOwnedReflectAttack {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FDamageResult DamageResult; // 0x20
    }; // Size: 0x78
    Params_HermesExecuteOwnedReflectAttack params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.DamageResult = (FDamageResult)DamageResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DamageResult = params.DamageResult;
}
void UPhoenixBPLibrary::HermesExecuteOwnedParryWindowBegin(FString Name, UObject* Owner, UObject* Caller, FEnemy_ParryWindowBeginData& ParryWindowBeginData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteOwnedParryWindowBegin"));
    struct Params_HermesExecuteOwnedParryWindowBegin {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FEnemy_ParryWindowBeginData ParryWindowBeginData; // 0x20
    }; // Size: 0x34
    Params_HermesExecuteOwnedParryWindowBegin params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.ParryWindowBeginData = (FEnemy_ParryWindowBeginData)ParryWindowBeginData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ParryWindowBeginData = params.ParryWindowBeginData;
}
void UPhoenixBPLibrary::HermesExecuteOwnedParryTimeToImpact(FString Name, UObject* Owner, UObject* Caller, FEnemy_ParryTimeToImpactData& ParryTimeToImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteOwnedParryTimeToImpact"));
    struct Params_HermesExecuteOwnedParryTimeToImpact {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FEnemy_ParryTimeToImpactData ParryTimeToImpactData; // 0x20
    }; // Size: 0x50
    Params_HermesExecuteOwnedParryTimeToImpact params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.ParryTimeToImpactData = (FEnemy_ParryTimeToImpactData)ParryTimeToImpactData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ParryTimeToImpactData = params.ParryTimeToImpactData;
}
void UPhoenixBPLibrary::HermesExecuteOwnedParryEvent(FString Name, UObject* Owner, UObject* Caller, EEnemy_ParryButtonPressed ButtonPressed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteOwnedParryEvent"));
    struct Params_HermesExecuteOwnedParryEvent {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        EEnemy_ParryButtonPressed ButtonPressed; // 0x20
    }; // Size: 0x21
    Params_HermesExecuteOwnedParryEvent params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.ButtonPressed = (EEnemy_ParryButtonPressed)ButtonPressed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixBPLibrary::HermesExecuteAllInventoryResult(FString Name, UObject* Caller, FInventoryResult& InventoryResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteAllInventoryResult"));
    struct Params_HermesExecuteAllInventoryResult {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FInventoryResult InventoryResult; // 0x18
    }; // Size: 0xa0
    Params_HermesExecuteAllInventoryResult params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.InventoryResult = (FInventoryResult)InventoryResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InventoryResult = params.InventoryResult;
}
void UPhoenixBPLibrary::HermesExecuteOwnedLock(FString Name, UObject* Owner, UObject* Caller, FLockManagerLock& Lock) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteOwnedLock"));
    struct Params_HermesExecuteOwnedLock {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FLockManagerLock Lock; // 0x20
    }; // Size: 0x2c
    Params_HermesExecuteOwnedLock params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.Lock = (FLockManagerLock)Lock;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Lock = params.Lock;
}
void UPhoenixBPLibrary::HermesBindDamageResult() {}
void UPhoenixBPLibrary::HermesExecuteOwnedInventoryResult(FString Name, UObject* Owner, UObject* Caller, FInventoryResult& InventoryResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteOwnedInventoryResult"));
    struct Params_HermesExecuteOwnedInventoryResult {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FInventoryResult InventoryResult; // 0x20
    }; // Size: 0xa8
    Params_HermesExecuteOwnedInventoryResult params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.InventoryResult = (FInventoryResult)InventoryResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InventoryResult = params.InventoryResult;
}
void UPhoenixBPLibrary::HermesExecuteOwnedDamageResult(FString Name, UObject* Owner, UObject* Caller, FDamageResult& DamageResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteOwnedDamageResult"));
    struct Params_HermesExecuteOwnedDamageResult {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FDamageResult DamageResult; // 0x20
    }; // Size: 0x78
    Params_HermesExecuteOwnedDamageResult params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.DamageResult = (FDamageResult)DamageResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DamageResult = params.DamageResult;
}
void UPhoenixBPLibrary::HermesExecuteOwnedActorHitBySpell(FString Name, UObject* Owner, UObject* Caller, FHitBySpellData& HitBySpell) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteOwnedActorHitBySpell"));
    struct Params_HermesExecuteOwnedActorHitBySpell {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FHitBySpellData HitBySpell; // 0x20
    }; // Size: 0x68
    Params_HermesExecuteOwnedActorHitBySpell params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.HitBySpell = (FHitBySpellData)HitBySpell;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HitBySpell = params.HitBySpell;
}
void UPhoenixBPLibrary::HermesExecuteAllStationComponent(FString Name, UObject* Caller, UStationComponent* StationComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteAllStationComponent"));
    struct Params_HermesExecuteAllStationComponent {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        UStationComponent* StationComponent; // 0x18
    }; // Size: 0x20
    Params_HermesExecuteAllStationComponent params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.StationComponent = (UStationComponent*)StationComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixBPLibrary::HermesExecuteAllSpellForce(FString Name, UObject* Caller, FSpellForce& SpellForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteAllSpellForce"));
    struct Params_HermesExecuteAllSpellForce {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FSpellForce SpellForce; // 0x18
    }; // Size: 0x30
    Params_HermesExecuteAllSpellForce params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.SpellForce = (FSpellForce)SpellForce;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpellForce = params.SpellForce;
}
void UPhoenixBPLibrary::HermesExecuteAllReflectAttack(FString Name, UObject* Caller, FDamageResult& DamageResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteAllReflectAttack"));
    struct Params_HermesExecuteAllReflectAttack {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FDamageResult DamageResult; // 0x18
    }; // Size: 0x70
    Params_HermesExecuteAllReflectAttack params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.DamageResult = (FDamageResult)DamageResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DamageResult = params.DamageResult;
}
void UPhoenixBPLibrary::HermesBindSpellForce() {}
void UPhoenixBPLibrary::HermesExecuteAllParryTimeToImpact(FString Name, UObject* Caller, FEnemy_ParryTimeToImpactData& ParryTimeToImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteAllParryTimeToImpact"));
    struct Params_HermesExecuteAllParryTimeToImpact {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FEnemy_ParryTimeToImpactData ParryTimeToImpactData; // 0x18
    }; // Size: 0x48
    Params_HermesExecuteAllParryTimeToImpact params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.ParryTimeToImpactData = (FEnemy_ParryTimeToImpactData)ParryTimeToImpactData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ParryTimeToImpactData = params.ParryTimeToImpactData;
}
void UPhoenixBPLibrary::HermesExecuteAllParryEvent(FString Name, UObject* Caller, EEnemy_ParryButtonPressed ButtonPressed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteAllParryEvent"));
    struct Params_HermesExecuteAllParryEvent {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        EEnemy_ParryButtonPressed ButtonPressed; // 0x18
    }; // Size: 0x19
    Params_HermesExecuteAllParryEvent params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.ButtonPressed = (EEnemy_ParryButtonPressed)ButtonPressed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixBPLibrary::HermesBindInventoryResult() {}
void UPhoenixBPLibrary::HermesExecuteAllLock(FString Name, UObject* Caller, FLockManagerLock& Lock) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteAllLock"));
    struct Params_HermesExecuteAllLock {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FLockManagerLock Lock; // 0x18
    }; // Size: 0x24
    Params_HermesExecuteAllLock params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.Lock = (FLockManagerLock)Lock;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Lock = params.Lock;
}
void UPhoenixBPLibrary::HermesExecuteAllGameplayTags(FString Name, UObject* Caller, FGameplayTagContainerWrapper& Wrapper) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteAllGameplayTags"));
    struct Params_HermesExecuteAllGameplayTags {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FGameplayTagContainerWrapper Wrapper; // 0x18
    }; // Size: 0x38
    Params_HermesExecuteAllGameplayTags params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.Wrapper = (FGameplayTagContainerWrapper)Wrapper;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Wrapper = params.Wrapper;
}
void UPhoenixBPLibrary::HermesExecuteAllDamageResult(FString Name, UObject* Caller, FDamageResult& DamageResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteAllDamageResult"));
    struct Params_HermesExecuteAllDamageResult {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FDamageResult DamageResult; // 0x18
    }; // Size: 0x70
    Params_HermesExecuteAllDamageResult params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.DamageResult = (FDamageResult)DamageResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DamageResult = params.DamageResult;
}
float UPhoenixBPLibrary::GetRuntimeFloatCurveValue(FRuntimeFloatCurve& Curve, float Time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.GetRuntimeFloatCurveValue"));
    struct Params_GetRuntimeFloatCurveValue {
        FRuntimeFloatCurve Curve; // 0x0
        float Time; // 0x88
        float ReturnValue; // 0x8c
    }; // Size: 0x90
    Params_GetRuntimeFloatCurveValue params{};
    params.Curve = (FRuntimeFloatCurve)Curve;
    params.Time = (float)Time;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Curve = params.Curve;
    return (float)params.ReturnValue;
}
FLinearColor UPhoenixBPLibrary::GetRuntimeLinearColorCurveValue(FRuntimeCurveLinearColor& Curve, float Time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.GetRuntimeLinearColorCurveValue"));
    struct Params_GetRuntimeLinearColorCurveValue {
        FRuntimeCurveLinearColor Curve; // 0x0
        float Time; // 0x208
        FLinearColor ReturnValue; // 0x20c
    }; // Size: 0x21c
    Params_GetRuntimeLinearColorCurveValue params{};
    params.Curve = (FRuntimeCurveLinearColor)Curve;
    params.Time = (float)Time;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Curve = params.Curve;
    return (FLinearColor)params.ReturnValue;
}
void UPhoenixBPLibrary::HermesExecuteAllActorHitBySpell(FString Name, UObject* Caller, FHitBySpellData& HitBySpell) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.HermesExecuteAllActorHitBySpell"));
    struct Params_HermesExecuteAllActorHitBySpell {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FHitBySpellData HitBySpell; // 0x18
    }; // Size: 0x60
    Params_HermesExecuteAllActorHitBySpell params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.HitBySpell = (FHitBySpellData)HitBySpell;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HitBySpell = params.HitBySpell;
}
void UPhoenixBPLibrary::HermesDamageResultDelegate__DelegateSignature(UObject* Caller, FDamageResult& DamageResult) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.PhoenixBPLibrary.HermesDamageResultDelegate__DelegateSignature"));
    struct Params_HermesDamageResultDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FDamageResult DamageResult; // 0x8
    }; // Size: 0x60
    Params_HermesDamageResultDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.DamageResult = (FDamageResult)DamageResult;
    ProcessEvent(func, &params);
    DamageResult = params.DamageResult;
}
void UPhoenixBPLibrary::HermesBindStationComponent() {}
void UPhoenixBPLibrary::HermesBindParryWindowEnd() {}
void UPhoenixBPLibrary::HermesBindParryWindowBegin() {}
void UPhoenixBPLibrary::HermesBindParryTimeToImpact() {}
void UPhoenixBPLibrary::ForceUpdateTextureMips(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.ForceUpdateTextureMips"));
    struct Params_ForceUpdateTextureMips {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_ForceUpdateTextureMips params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixBPLibrary::HermesBindLock() {}
void UPhoenixBPLibrary::HermesBindParryEvent() {}
void UPhoenixBPLibrary::HermesActorHitBySpellDelegate__DelegateSignature(UObject* Caller, FHitBySpellData& HitBySpell) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.PhoenixBPLibrary.HermesActorHitBySpellDelegate__DelegateSignature"));
    struct Params_HermesActorHitBySpellDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FHitBySpellData HitBySpell; // 0x8
    }; // Size: 0x50
    Params_HermesActorHitBySpellDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.HitBySpell = (FHitBySpellData)HitBySpell;
    ProcessEvent(func, &params);
    HitBySpell = params.HitBySpell;
}
FVector UPhoenixBPLibrary::GetRuntimeVectorCurveValue(FRuntimeCurveVector& Curve, float Time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.GetRuntimeVectorCurveValue"));
    struct Params_GetRuntimeVectorCurveValue {
        FRuntimeCurveVector Curve; // 0x0
        float Time; // 0x188
        FVector ReturnValue; // 0x18c
    }; // Size: 0x198
    Params_GetRuntimeVectorCurveValue params{};
    params.Curve = (FRuntimeCurveVector)Curve;
    params.Time = (float)Time;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Curve = params.Curve;
    return (FVector)params.ReturnValue;
}
HouseIds UPhoenixBPLibrary::GetObjectHouseID(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.GetObjectHouseID"));
    struct Params_GetObjectHouseID {
        AActor* Actor; // 0x0
        HouseIds ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetObjectHouseID params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (HouseIds)params.ReturnValue;
}
HouseIds UPhoenixBPLibrary::GetHouseEnumFromHouseID(FString InHouseID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.GetHouseEnumFromHouseID"));
    struct Params_GetHouseEnumFromHouseID {
        FString InHouseID; // 0x0
        HouseIds ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetHouseEnumFromHouseID params{};
    params.InHouseID = (FString)InHouseID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (HouseIds)params.ReturnValue;
}
FString UPhoenixBPLibrary::GetActorName(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.GetActorName"));
    struct Params_GetActorName {
        AActor* Actor; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetActorName params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UPhoenixBPLibrary::CultureChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.CultureChanged"));
    struct Params_CultureChanged {
    }; // Size: 0x0
    Params_CultureChanged params{};
    ProcessEvent(func, &params);
}
void UPhoenixBPLibrary::DestroyComponent(UActorComponent* Component, bool bPromoteChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.DestroyComponent"));
    struct Params_DestroyComponent {
        UActorComponent* Component; // 0x0
        bool bPromoteChildren; // 0x8
    }; // Size: 0x9
    Params_DestroyComponent params{};
    params.Component = (UActorComponent*)Component;
    params.bPromoteChildren = (bool)bPromoteChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UPhoenixBPLibrary::ChangeOutfit(AActor* Actor, TArray<FName> GearIDs, TArray<USkeletalMeshComponent*>& OldMeshes, TArray<USkeletalMeshComponent*>& NewMeshes, bool bSkipChangingGear) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.ChangeOutfit"));
    struct Params_ChangeOutfit {
        AActor* Actor; // 0x0
        TArray<FName> GearIDs; // 0x8
        TArray<USkeletalMeshComponent*> OldMeshes; // 0x18
        TArray<USkeletalMeshComponent*> NewMeshes; // 0x28
        bool bSkipChangingGear; // 0x38
        bool ReturnValue; // 0x39
    }; // Size: 0x3a
    Params_ChangeOutfit params{};
    params.Actor = (AActor*)Actor;
    params.GearIDs = (TArray<FName>)GearIDs;
    params.OldMeshes = (TArray<USkeletalMeshComponent*>)OldMeshes;
    params.NewMeshes = (TArray<USkeletalMeshComponent*>)NewMeshes;
    params.bSkipChangingGear = (bool)bSkipChangingGear;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OldMeshes = params.OldMeshes;
    NewMeshes = params.NewMeshes;
    return (bool)params.ReturnValue;
}
void UPhoenixBPLibrary::CastToWorldSoftObjectReference() {}
void UPhoenixBPLibrary::AVATranslateSubtitle(FString Key, FString DebugLogText) {}
bool UPhoenixBPLibrary::AvaIsRunningWithEditor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.AvaIsRunningWithEditor"));
    struct Params_AvaIsRunningWithEditor {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AvaIsRunningWithEditor params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixBPLibrary::AvaIsRunningCommandlet() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixBPLibrary.AvaIsRunningCommandlet"));
    struct Params_AvaIsRunningCommandlet {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AvaIsRunningCommandlet params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
