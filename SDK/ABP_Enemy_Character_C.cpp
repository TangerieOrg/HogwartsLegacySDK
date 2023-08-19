#include "AActor.hpp"
#include "ABP_Enemy_ApperateActor_C.hpp"
#include "ABP_Enemy_Character_C.hpp"
#include "AEnemy_ApparateActor.hpp"
#include "AEnemy_Character.hpp"
#include "AEnemy_SplineSpawnActor.hpp"
#include "ASpellTool.hpp"
#include "ENPC_AudioState.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FEnemy_ApparateActorData.hpp"
#include "FEnemy_SplineSpawnActorData.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FMaterialSwapScalarParameter.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UArrestoMomentumComponent.hpp"
#include "UBP_EnemyAI_C.hpp"
#include "UClass.hpp"
#include "UDynamicBranchComponent.hpp"
#include "UEnemyAISpawnData.hpp"
#include "UFunction.hpp"
#include "UGeometryCollectionComponent.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "ULootDropComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UParticleSystem.hpp"
#include "UParticleSystemComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "URepairComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USpellToolRecord.hpp"
#include "UWaterInteractionComponent.hpp"
void ABP_Enemy_Character_C::OnFailedToBeDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnFailedToBeDestroyed"));
    struct Params_OnFailedToBeDestroyed {
    }; // Size: 0x0
    Params_OnFailedToBeDestroyed params{};
    ProcessEvent(func, &params);
}
ABP_Enemy_Character_C* ABP_Enemy_Character_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C");
    return (ABP_Enemy_Character_C*)res;
}
bool ABP_Enemy_Character_C::DisallowFlipendo() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.DisallowFlipendo"));
    struct Params_DisallowFlipendo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowFlipendo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Enemy_Character_C::OnLeviosoEnd(AActor* Instigator, bool InitiatedByPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnLeviosoEnd"));
    struct Params_OnLeviosoEnd {
        AActor* Instigator; // 0x0
        bool InitiatedByPlayer; // 0x8
    }; // Size: 0x9
    Params_OnLeviosoEnd params{};
    params.Instigator = (AActor*)Instigator;
    params.InitiatedByPlayer = (bool)InitiatedByPlayer;
    ProcessEvent(func, &params);
}
bool ABP_Enemy_Character_C::DisallowArrestoMomentum() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.DisallowArrestoMomentum"));
    struct Params_DisallowArrestoMomentum {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowArrestoMomentum params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Enemy_Character_C::OnSpellTooWeak(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnSpellTooWeak"));
    struct Params_OnSpellTooWeak {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellTooWeak params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
AEnemy_SplineSpawnActor* ABP_Enemy_Character_C::SpawnSplineSpawnActor(FTransform SpawnTransform, FEnemy_SplineSpawnActorData& Data, UClass* SplineSmokeActor, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AEnemy_SplineSpawnActor* CallFunc_FinishSpawningActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.SpawnSplineSpawnActor"));
    struct Params_SpawnSplineSpawnActor {
        FTransform SpawnTransform; // 0x0
        FEnemy_SplineSpawnActorData Data; // 0x30
        AEnemy_SplineSpawnActor* ReturnValue; // 0x100
        UClass* SplineSmokeActor; // 0x108
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x110
        AEnemy_SplineSpawnActor* CallFunc_FinishSpawningActor_ReturnValue; // 0x118
    }; // Size: 0x120
    Params_SpawnSplineSpawnActor params{};
    params.SpawnTransform = (FTransform)SpawnTransform;
    params.Data = (FEnemy_SplineSpawnActorData)Data;
    params.SplineSmokeActor = (UClass*)SplineSmokeActor;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.CallFunc_FinishSpawningActor_ReturnValue = (AEnemy_SplineSpawnActor*)CallFunc_FinishSpawningActor_ReturnValue;
    ProcessEvent(func, &params);
    Data = params.Data;
    return (AEnemy_SplineSpawnActor*)params.ReturnValue;
}
bool ABP_Enemy_Character_C::ExpulsoStart(AActor* Instigator, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.ExpulsoStart"));
    struct Params_ExpulsoStart {
        AActor* Instigator; // 0x0
        FVector Location; // 0x8
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_ExpulsoStart params{};
    params.Instigator = (AActor*)Instigator;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_Enemy_Character_C::StartFreeze(AActor* Instigator, float Amount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.StartFreeze"));
    struct Params_StartFreeze {
        AActor* Instigator; // 0x0
        float Amount; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_StartFreeze params{};
    params.Instigator = (AActor*)Instigator;
    params.Amount = (float)Amount;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AActor* ABP_Enemy_Character_C::Disarm(AActor* Instigator, FVector HitDirection, float ScaleDisarmForce) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.Disarm"));
    struct Params_Disarm {
        AActor* Instigator; // 0x0
        FVector HitDirection; // 0x8
        float ScaleDisarmForce; // 0x14
        AActor* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_Disarm params{};
    params.Instigator = (AActor*)Instigator;
    params.HitDirection = (FVector)HitDirection;
    params.ScaleDisarmForce = (float)ScaleDisarmForce;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
AEnemy_ApparateActor* ABP_Enemy_Character_C::SpawnApparateActor(FTransform SpawnTransform, FEnemy_ApparateActorData& Data, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_Enemy_ApperateActor_C* CallFunc_FinishSpawningActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.SpawnApparateActor"));
    struct Params_SpawnApparateActor {
        FTransform SpawnTransform; // 0x0
        FEnemy_ApparateActorData Data; // 0x30
        AEnemy_ApparateActor* ReturnValue; // 0x70
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x78
        ABP_Enemy_ApperateActor_C* CallFunc_FinishSpawningActor_ReturnValue; // 0x80
    }; // Size: 0x88
    Params_SpawnApparateActor params{};
    params.SpawnTransform = (FTransform)SpawnTransform;
    params.Data = (FEnemy_ApparateActorData)Data;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.CallFunc_FinishSpawningActor_ReturnValue = (ABP_Enemy_ApperateActor_C*)CallFunc_FinishSpawningActor_ReturnValue;
    ProcessEvent(func, &params);
    Data = params.Data;
    return (AEnemy_ApparateActor*)params.ReturnValue;
}
bool ABP_Enemy_Character_C::DescendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.DescendoStart"));
    struct Params_DescendoStart {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        FVector Velocity; // 0x10
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_DescendoStart params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.Velocity = (FVector)Velocity;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_Enemy_Character_C::DisallowDescendo() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.DisallowDescendo"));
    struct Params_DisallowDescendo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowDescendo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_Enemy_Character_C::DisallowAccio() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.DisallowAccio"));
    struct Params_DisallowAccio {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowAccio params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_Enemy_Character_C::DisallowDepulso() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.DisallowDepulso"));
    struct Params_DisallowDepulso {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowDepulso params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_Enemy_Character_C::DisallowLevioso() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.DisallowLevioso"));
    struct Params_DisallowLevioso {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowLevioso params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Enemy_Character_C::AudioStateHeartbeat(ENPC_AudioState State) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.AudioStateHeartbeat"));
    struct Params_AudioStateHeartbeat {
        ENPC_AudioState State; // 0x0
    }; // Size: 0x1
    Params_AudioStateHeartbeat params{};
    params.State = (ENPC_AudioState)State;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnSpellEffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnSpellEffective"));
    struct Params_OnSpellEffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellEffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnFailedToFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnFailedToFreeze"));
    struct Params_OnFailedToFreeze {
    }; // Size: 0x0
    Params_OnFailedToFreeze params{};
    ProcessEvent(func, &params);
}
bool ABP_Enemy_Character_C::DisallowWingardium() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.DisallowWingardium"));
    struct Params_DisallowWingardium {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowWingardium params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Enemy_Character_C::OnAccioEnd(AActor* Instigator, bool TransitioningToWingardium) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnAccioEnd"));
    struct Params_OnAccioEnd {
        AActor* Instigator; // 0x0
        bool TransitioningToWingardium; // 0x8
    }; // Size: 0x9
    Params_OnAccioEnd params{};
    params.Instigator = (AActor*)Instigator;
    params.TransitioningToWingardium = (bool)TransitioningToWingardium;
    ProcessEvent(func, &params);
}
bool ABP_Enemy_Character_C::LeviosoChargedStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location, FVector Velocity, bool InitiatedByPlayer, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.LeviosoChargedStart"));
    struct Params_LeviosoChargedStart {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        FVector Location; // 0x10
        FVector Velocity; // 0x1c
        bool InitiatedByPlayer; // 0x28
        char pad_29[0x7];
        FGameplayTagContainer Impact; // 0x30
        TArray<UInteractionArchitectAsset*> DataAssets; // 0x50
        FVector ImpactDirection; // 0x60
        bool ReturnValue; // 0x6c
    }; // Size: 0x6d
    Params_LeviosoChargedStart params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.Location = (FVector)Location;
    params.Velocity = (FVector)Velocity;
    params.InitiatedByPlayer = (bool)InitiatedByPlayer;
    params.Impact = (FGameplayTagContainer)Impact;
    params.DataAssets = (TArray<UInteractionArchitectAsset*>)DataAssets;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
    DataAssets = params.DataAssets;
    ImpactDirection = params.ImpactDirection;
    return (bool)params.ReturnValue;
}
bool ABP_Enemy_Character_C::AccioStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.AccioStart"));
    struct Params_AccioStart {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        FVector Velocity; // 0x10
        char pad_1c[0x4];
        TArray<UInteractionArchitectAsset*> DataAssets; // 0x20
        FVector ImpactDirection; // 0x30
        bool ReturnValue; // 0x3c
    }; // Size: 0x3d
    Params_AccioStart params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.Velocity = (FVector)Velocity;
    params.DataAssets = (TArray<UInteractionArchitectAsset*>)DataAssets;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
    DataAssets = params.DataAssets;
    ImpactDirection = params.ImpactDirection;
    return (bool)params.ReturnValue;
}
void ABP_Enemy_Character_C::OnWingardiumFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnWingardiumFailed"));
    struct Params_OnWingardiumFailed {
    }; // Size: 0x0
    Params_OnWingardiumFailed params{};
    ProcessEvent(func, &params);
}
bool ABP_Enemy_Character_C::DepulsoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.DepulsoStart"));
    struct Params_DepulsoStart {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        FVector Location; // 0x10
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_DepulsoStart params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Enemy_Character_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
bool ABP_Enemy_Character_C::FlipendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.FlipendoStart"));
    struct Params_FlipendoStart {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        FVector Location; // 0x10
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_FlipendoStart params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Enemy_Character_C::OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnOverlappedBySpell"));
    struct Params_OnOverlappedBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FGameplayTagContainer Impact; // 0x20
        FVector MunitionLocation; // 0x40
    }; // Size: 0x4c
    Params_OnOverlappedBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    params.MunitionLocation = (FVector)MunitionLocation;
    ProcessEvent(func, &params);
    MunitionLocation = params.MunitionLocation;
}
bool ABP_Enemy_Character_C::LeviosoStart(AActor* Instigator, FVector Location, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.LeviosoStart"));
    struct Params_LeviosoStart {
        AActor* Instigator; // 0x0
        FVector Location; // 0x8
        char pad_14[0x4];
        FGameplayTagContainer Impact; // 0x18
        TArray<UInteractionArchitectAsset*> DataAssets; // 0x38
        bool InitiatedByPlayer; // 0x48
        bool OverrideEffects; // 0x49
        bool ReturnValue; // 0x4a
    }; // Size: 0x4b
    Params_LeviosoStart params{};
    params.Instigator = (AActor*)Instigator;
    params.Location = (FVector)Location;
    params.Impact = (FGameplayTagContainer)Impact;
    params.DataAssets = (TArray<UInteractionArchitectAsset*>)DataAssets;
    params.InitiatedByPlayer = (bool)InitiatedByPlayer;
    params.OverrideEffects = (bool)OverrideEffects;
    ProcessEvent(func, &params);
    DataAssets = params.DataAssets;
    OverrideEffects = params.OverrideEffects;
    return (bool)params.ReturnValue;
}
void ABP_Enemy_Character_C::OnCriticalHealthReached() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnCriticalHealthReached"));
    struct Params_OnCriticalHealthReached {
    }; // Size: 0x0
    Params_OnCriticalHealthReached params{};
    ProcessEvent(func, &params);
}
bool ABP_Enemy_Character_C::WingardiumStart(ASpellTool* SpellTool, AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.WingardiumStart"));
    struct Params_WingardiumStart {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_WingardiumStart params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Enemy_Character_C::NPC_Health_HUD_Event(AActor* Target, float InHealthChange, bool bIndicateHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.NPC_Health_HUD_Event"));
    struct Params_NPC_Health_HUD_Event {
        AActor* Target; // 0x0
        float InHealthChange; // 0x8
        bool bIndicateHUD; // 0xc
    }; // Size: 0xd
    Params_NPC_Health_HUD_Event params{};
    params.Target = (AActor*)Target;
    params.InHealthChange = (float)InHealthChange;
    params.bIndicateHUD = (bool)bIndicateHUD;
    ProcessEvent(func, &params);
}
bool ABP_Enemy_Character_C::NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.NearDeathKneeling"));
    struct Params_NearDeathKneeling {
        float DamageAmount; // 0x0
        char pad_4[0x4];
        AActor* Instigator; // 0x8
        FGameplayTagContainer MunitionTagContainer; // 0x10
        FVector Velocity; // 0x30
        bool ReturnValue; // 0x3c
    }; // Size: 0x3d
    Params_NearDeathKneeling params{};
    params.DamageAmount = (float)DamageAmount;
    params.Instigator = (AActor*)Instigator;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Velocity = (FVector)Velocity;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_Enemy_Character_C::Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.Damaged"));
    struct Params_Damaged {
        float DamageAmount; // 0x0
        FVector HitLocation; // 0x4
        FVector HitDirection; // 0x10
        char pad_1c[0x4];
        UPrimitiveComponent* PrimComp; // 0x20
        FGameplayTagContainer MunitionTagContainer; // 0x28
        AActor* Instigator; // 0x48
        FVector Velocity; // 0x50
        bool ReturnValue; // 0x5c
    }; // Size: 0x5d
    Params_Damaged params{};
    params.DamageAmount = (float)DamageAmount;
    params.HitLocation = (FVector)HitLocation;
    params.HitDirection = (FVector)HitDirection;
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Instigator = (AActor*)Instigator;
    params.Velocity = (FVector)Velocity;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_Enemy_Character_C::Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity, bool CallFunc_HasTag_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.Destroyed"));
    struct Params_Destroyed {
        float DamageAmount; // 0x0
        char pad_4[0x4];
        AActor* Instigator; // 0x8
        FGameplayTagContainer MunitionTagContainer; // 0x10
        FVector Velocity; // 0x30
        bool ReturnValue; // 0x3c
        bool CallFunc_HasTag_ReturnValue; // 0x3d
    }; // Size: 0x3e
    Params_Destroyed params{};
    params.DamageAmount = (float)DamageAmount;
    params.Instigator = (AActor*)Instigator;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Velocity = (FVector)Velocity;
    params.CallFunc_HasTag_ReturnValue = (bool)CallFunc_HasTag_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Enemy_Character_C::OnFailedToBeHealed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnFailedToBeHealed"));
    struct Params_OnFailedToBeHealed {
    }; // Size: 0x0
    Params_OnFailedToBeHealed params{};
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::DiseminateSpawnData(UEnemyAISpawnData* SpawnData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.DiseminateSpawnData"));
    struct Params_DiseminateSpawnData {
        UEnemyAISpawnData* SpawnData; // 0x0
    }; // Size: 0x8
    Params_DiseminateSpawnData params{};
    params.SpawnData = (UEnemyAISpawnData*)SpawnData;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnAffectedBySpell"));
    struct Params_OnAffectedBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        TArray<UInteractionArchitectAsset*> DataAssets; // 0x10
        USpellToolRecord* SpellToolRecord; // 0x20
        FName SpellType; // 0x28
        FGameplayTagContainer Impact; // 0x30
        FHitResult Hit; // 0x50
        FVector ImpactDirection; // 0xd8
    }; // Size: 0xe4
    Params_OnAffectedBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.DataAssets = (TArray<UInteractionArchitectAsset*>)DataAssets;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    params.Hit = (FHitResult)Hit;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
    DataAssets = params.DataAssets;
    Hit = params.Hit;
    ImpactDirection = params.ImpactDirection;
}
void ABP_Enemy_Character_C::OnSpellIneffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnSpellIneffective"));
    struct Params_OnSpellIneffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellIneffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnFlipendoThrow(ASpellTool* SpellTool, FVector ThrowDirection, FVector ThrowVelocity, FVector AngularVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnFlipendoThrow"));
    struct Params_OnFlipendoThrow {
        ASpellTool* SpellTool; // 0x0
        FVector ThrowDirection; // 0x8
        FVector ThrowVelocity; // 0x14
        FVector AngularVelocity; // 0x20
        FVector Target; // 0x2c
        AActor* Instigator; // 0x38
        TArray<UInteractionArchitectAsset*> DataAssets; // 0x40
        FGameplayTagContainer Impact; // 0x50
    }; // Size: 0x70
    Params_OnFlipendoThrow params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.ThrowDirection = (FVector)ThrowDirection;
    params.ThrowVelocity = (FVector)ThrowVelocity;
    params.AngularVelocity = (FVector)AngularVelocity;
    params.Target = (FVector)Target;
    params.Instigator = (AActor*)Instigator;
    params.DataAssets = (TArray<UInteractionArchitectAsset*>)DataAssets;
    params.Impact = (FGameplayTagContainer)Impact;
    ProcessEvent(func, &params);
    DataAssets = params.DataAssets;
}
void ABP_Enemy_Character_C::OnLeviosoFailed(bool InitiatedByPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnLeviosoFailed"));
    struct Params_OnLeviosoFailed {
        bool InitiatedByPlayer; // 0x0
    }; // Size: 0x1
    Params_OnLeviosoFailed params{};
    params.InitiatedByPlayer = (bool)InitiatedByPlayer;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnWingardiumEnd(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnWingardiumEnd"));
    struct Params_OnWingardiumEnd {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnWingardiumEnd params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::SpawnFinished(AActor* pActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.SpawnFinished"));
    struct Params_SpawnFinished {
        AActor* pActor; // 0x0
    }; // Size: 0x8
    Params_SpawnFinished params{};
    params.pActor = (AActor*)pActor;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnDepulsoThrow(ASpellTool* SpellTool, FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnDepulsoThrow"));
    struct Params_OnDepulsoThrow {
        ASpellTool* SpellTool; // 0x0
        FVector ThrowVelocity; // 0x8
        FVector Target; // 0x14
        AActor* Instigator; // 0x20
        TArray<UInteractionArchitectAsset*> DataAssets; // 0x28
        FGameplayTagContainer Impact; // 0x38
    }; // Size: 0x58
    Params_OnDepulsoThrow params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.ThrowVelocity = (FVector)ThrowVelocity;
    params.Target = (FVector)Target;
    params.Instigator = (AActor*)Instigator;
    params.DataAssets = (TArray<UInteractionArchitectAsset*>)DataAssets;
    params.Impact = (FGameplayTagContainer)Impact;
    ProcessEvent(func, &params);
    DataAssets = params.DataAssets;
}
void ABP_Enemy_Character_C::OnWingardiumGhostStart(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnWingardiumGhostStart"));
    struct Params_OnWingardiumGhostStart {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        TArray<UInteractionArchitectAsset*> DataAssets; // 0x10
    }; // Size: 0x20
    Params_OnWingardiumGhostStart params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.DataAssets = (TArray<UInteractionArchitectAsset*>)DataAssets;
    ProcessEvent(func, &params);
    DataAssets = params.DataAssets;
}
void ABP_Enemy_Character_C::OnAttemptToFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnAttemptToFreeze"));
    struct Params_OnAttemptToFreeze {
    }; // Size: 0x0
    Params_OnAttemptToFreeze params{};
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnThaw(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnThaw"));
    struct Params_OnThaw {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnThaw params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnAttemptToHeal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnAttemptToHeal"));
    struct Params_OnAttemptToHeal {
    }; // Size: 0x0
    Params_OnAttemptToHeal params{};
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnAttemptToRepair() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnAttemptToRepair"));
    struct Params_OnAttemptToRepair {
    }; // Size: 0x0
    Params_OnAttemptToRepair params{};
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnHitBySpell"));
    struct Params_OnHitBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FHitResult Hit; // 0x20
        FVector ImpactDirection; // 0xa8
    }; // Size: 0xb4
    Params_OnHitBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Hit = (FHitResult)Hit;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
    Hit = params.Hit;
    ImpactDirection = params.ImpactDirection;
}
void ABP_Enemy_Character_C::OnBeginRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnBeginRepairing"));
    struct Params_OnBeginRepairing {
    }; // Size: 0x0
    Params_OnBeginRepairing params{};
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnDoneRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnDoneRepairing"));
    struct Params_OnDoneRepairing {
    }; // Size: 0x0
    Params_OnDoneRepairing params{};
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnFailedToBeDamaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnFailedToBeDamaged"));
    struct Params_OnFailedToBeDamaged {
        float DamageAmount; // 0x0
        FVector HitLocation; // 0x4
        FVector HitDirection; // 0x10
        char pad_1c[0x4];
        UPrimitiveComponent* PrimComp; // 0x20
        FGameplayTagContainer MunitionTagContainer; // 0x28
        AActor* Instigator; // 0x48
        FVector Velocity; // 0x50
    }; // Size: 0x5c
    Params_OnFailedToBeDamaged params{};
    params.DamageAmount = (float)DamageAmount;
    params.HitLocation = (FVector)HitLocation;
    params.HitDirection = (FVector)HitDirection;
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Instigator = (AActor*)Instigator;
    params.Velocity = (FVector)Velocity;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnGeometryCollectionCompletelyBroken(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnGeometryCollectionCompletelyBroken"));
    struct Params_OnGeometryCollectionCompletelyBroken {
        URepairComponent* RepairComponent; // 0x0
        UGeometryCollectionComponent* GeometryCollectionComponent; // 0x8
        float impulseStr; // 0x10
        float Radius; // 0x14
        FVector HitLocation; // 0x18
        FVector HitDirection; // 0x24
    }; // Size: 0x30
    Params_OnGeometryCollectionCompletelyBroken params{};
    params.RepairComponent = (URepairComponent*)RepairComponent;
    params.GeometryCollectionComponent = (UGeometryCollectionComponent*)GeometryCollectionComponent;
    params.impulseStr = (float)impulseStr;
    params.Radius = (float)Radius;
    params.HitLocation = (FVector)HitLocation;
    params.HitDirection = (FVector)HitDirection;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnGeometryCollectionDamaged(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnGeometryCollectionDamaged"));
    struct Params_OnGeometryCollectionDamaged {
        URepairComponent* RepairComponent; // 0x0
        UGeometryCollectionComponent* GeometryCollectionComponent; // 0x8
        float impulseStr; // 0x10
        float Radius; // 0x14
        FVector HitLocation; // 0x18
        FVector HitDirection; // 0x24
    }; // Size: 0x30
    Params_OnGeometryCollectionDamaged params{};
    params.RepairComponent = (URepairComponent*)RepairComponent;
    params.GeometryCollectionComponent = (UGeometryCollectionComponent*)GeometryCollectionComponent;
    params.impulseStr = (float)impulseStr;
    params.Radius = (float)Radius;
    params.HitLocation = (FVector)HitLocation;
    params.HitDirection = (FVector)HitDirection;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnGeometryCollectionSpawned(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection, bool bCompletelyBroken) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnGeometryCollectionSpawned"));
    struct Params_OnGeometryCollectionSpawned {
        URepairComponent* RepairComponent; // 0x0
        UGeometryCollectionComponent* GeometryCollectionComponent; // 0x8
        float impulseStr; // 0x10
        float Radius; // 0x14
        FVector HitLocation; // 0x18
        FVector HitDirection; // 0x24
        bool bCompletelyBroken; // 0x30
    }; // Size: 0x31
    Params_OnGeometryCollectionSpawned params{};
    params.RepairComponent = (URepairComponent*)RepairComponent;
    params.GeometryCollectionComponent = (UGeometryCollectionComponent*)GeometryCollectionComponent;
    params.impulseStr = (float)impulseStr;
    params.Radius = (float)Radius;
    params.HitLocation = (FVector)HitLocation;
    params.HitDirection = (FVector)HitDirection;
    params.bCompletelyBroken = (bool)bCompletelyBroken;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnHealed(float healAmount, UPrimitiveComponent* PrimComp) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnHealed"));
    struct Params_OnHealed {
        float healAmount; // 0x0
        char pad_4[0x4];
        UPrimitiveComponent* PrimComp; // 0x8
    }; // Size: 0x10
    Params_OnHealed params{};
    params.healAmount = (float)healAmount;
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnFlipendoFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnFlipendoFailed"));
    struct Params_OnFlipendoFailed {
    }; // Size: 0x0
    Params_OnFlipendoFailed params{};
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnExpulsoThrow(FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnExpulsoThrow"));
    struct Params_OnExpulsoThrow {
        FVector ThrowVelocity; // 0x0
        FVector Target; // 0xc
        AActor* Instigator; // 0x18
        TArray<UInteractionArchitectAsset*> DataAssets; // 0x20
        FGameplayTagContainer Impact; // 0x30
    }; // Size: 0x50
    Params_OnExpulsoThrow params{};
    params.ThrowVelocity = (FVector)ThrowVelocity;
    params.Target = (FVector)Target;
    params.Instigator = (AActor*)Instigator;
    params.DataAssets = (TArray<UInteractionArchitectAsset*>)DataAssets;
    params.Impact = (FGameplayTagContainer)Impact;
    ProcessEvent(func, &params);
    DataAssets = params.DataAssets;
}
void ABP_Enemy_Character_C::AnimEvent(FName Name) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.AnimEvent"));
    struct Params_AnimEvent {
        FName Name; // 0x0
    }; // Size: 0x8
    Params_AnimEvent params{};
    params.Name = (FName)Name;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnDepulsoFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnDepulsoFailed"));
    struct Params_OnDepulsoFailed {
    }; // Size: 0x0
    Params_OnDepulsoFailed params{};
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnAccioThrow(ASpellTool* SpellTool, AActor* Instigator, FVector ThrowVelocity, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnAccioThrow"));
    struct Params_OnAccioThrow {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        FVector ThrowVelocity; // 0x10
        char pad_1c[0x4];
        TArray<UInteractionArchitectAsset*> DataAssets; // 0x20
        FGameplayTagContainer Impact; // 0x30
    }; // Size: 0x50
    Params_OnAccioThrow params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.ThrowVelocity = (FVector)ThrowVelocity;
    params.DataAssets = (TArray<UInteractionArchitectAsset*>)DataAssets;
    params.Impact = (FGameplayTagContainer)Impact;
    ProcessEvent(func, &params);
    DataAssets = params.DataAssets;
}
void ABP_Enemy_Character_C::OnAccioFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnAccioFailed"));
    struct Params_OnAccioFailed {
    }; // Size: 0x0
    Params_OnAccioFailed params{};
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnAffectedBySpellEnd"));
    struct Params_OnAffectedBySpellEnd {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FGameplayTagContainer Impact; // 0x20
    }; // Size: 0x40
    Params_OnAffectedBySpellEnd params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnArrestoMomentumEnd(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnArrestoMomentumEnd"));
    struct Params_OnArrestoMomentumEnd {
        AActor* Instigator; // 0x0
        UArrestoMomentumComponent* ArrestoMomentumComponent; // 0x8
    }; // Size: 0x10
    Params_OnArrestoMomentumEnd params{};
    params.Instigator = (AActor*)Instigator;
    params.ArrestoMomentumComponent = (UArrestoMomentumComponent*)ArrestoMomentumComponent;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnArrestoMomentumBegin(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnArrestoMomentumBegin"));
    struct Params_OnArrestoMomentumBegin {
        AActor* Instigator; // 0x0
        UArrestoMomentumComponent* ArrestoMomentumComponent; // 0x8
        float TimeDilation; // 0x10
    }; // Size: 0x14
    Params_OnArrestoMomentumBegin params{};
    params.Instigator = (AActor*)Instigator;
    params.ArrestoMomentumComponent = (UArrestoMomentumComponent*)ArrestoMomentumComponent;
    params.TimeDilation = (float)TimeDilation;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::NewDeathFade() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.NewDeathFade"));
    struct Params_NewDeathFade {
    }; // Size: 0x0
    Params_NewDeathFade params{};
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::ExecuteUbergraph_BP_Enemy_Character(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_Enemy_Character_C::OnCharacterHitBySpell__DelegateSignature(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult Hit, FVector ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnCharacterHitBySpell__DelegateSignature"));
    struct Params_OnCharacterHitBySpell__DelegateSignature {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FHitResult Hit; // 0x20
        FVector ImpactDirection; // 0xa8
    }; // Size: 0xb4
    Params_OnCharacterHitBySpell__DelegateSignature params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Hit = (FHitResult)Hit;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnSpawnFinished__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnSpawnFinished__DelegateSignature"));
    struct Params_OnSpawnFinished__DelegateSignature {
    }; // Size: 0x0
    Params_OnSpawnFinished__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnZeroHealth__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnZeroHealth__DelegateSignature"));
    struct Params_OnZeroHealth__DelegateSignature {
    }; // Size: 0x0
    Params_OnZeroHealth__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Enemy_Character_C::OnDeath__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Character.BP_Enemy_Character_C.OnDeath__DelegateSignature"));
    struct Params_OnDeath__DelegateSignature {
    }; // Size: 0x0
    Params_OnDeath__DelegateSignature params{};
    ProcessEvent(func, &params);
}
