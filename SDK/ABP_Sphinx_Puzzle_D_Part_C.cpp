#include "AActor.hpp"
#include "ABP_Sphinx_Puzzle_D_Part_C.hpp"
#include "APawn.hpp"
#include "APhoenixBudgetedStaticMeshActor.hpp"
#include "ASpellTool.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTimerHandle.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UNiagaraComponent.hpp"
#include "UObjectStateComponent.hpp"
#include "UObjectStateInfo.hpp"
#include "UPrimitiveComponent.hpp"
#include "URollingComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USpellToolRecord.hpp"
ABP_Sphinx_Puzzle_D_Part_C* ABP_Sphinx_Puzzle_D_Part_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C");
    return (ABP_Sphinx_Puzzle_D_Part_C*)res;
}
void ABP_Sphinx_Puzzle_D_Part_C::OnSpellEffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.OnSpellEffective"));
    struct Params_OnSpellEffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellEffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Part_C::OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.OnAffectedBySpellEnd"));
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
void ABP_Sphinx_Puzzle_D_Part_C::OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.OnHitBySpell"));
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
void ABP_Sphinx_Puzzle_D_Part_C::ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.ReceiveHit"));
    struct Params_ReceiveHit {
        UPrimitiveComponent* MyComp; // 0x0
        AActor* Other; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        bool bSelfMoved; // 0x18
        char pad_19[0x3];
        FVector HitLocation; // 0x1c
        FVector HitNormal; // 0x28
        FVector NormalImpulse; // 0x34
        FHitResult Hit; // 0x40
    }; // Size: 0xc8
    Params_ReceiveHit params{};
    params.MyComp = (UPrimitiveComponent*)MyComp;
    params.Other = (AActor*)Other;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.bSelfMoved = (bool)bSelfMoved;
    params.HitLocation = (FVector)HitLocation;
    params.HitNormal = (FVector)HitNormal;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
void ABP_Sphinx_Puzzle_D_Part_C::BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature(UPrimitiveComponent* WakingComponent, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature"));
    struct Params_BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature {
        UPrimitiveComponent* WakingComponent; // 0x0
        FName BoneName; // 0x8
    }; // Size: 0x10
    Params_BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature params{};
    params.WakingComponent = (UPrimitiveComponent*)WakingComponent;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Part_C::OnSpellTooWeak(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.OnSpellTooWeak"));
    struct Params_OnSpellTooWeak {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellTooWeak params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Part_C::OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.OnOverlappedBySpell"));
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
void ABP_Sphinx_Puzzle_D_Part_C::OnSpellIneffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.OnSpellIneffective"));
    struct Params_OnSpellIneffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellIneffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Part_C::Success() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.Success"));
    struct Params_Success {
    }; // Size: 0x0
    Params_Success params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Part_C::Teleport() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.Teleport"));
    struct Params_Teleport {
    }; // Size: 0x0
    Params_Teleport params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Part_C::LoadSolution() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.LoadSolution"));
    struct Params_LoadSolution {
    }; // Size: 0x0
    Params_LoadSolution params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Part_C::BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature(UPrimitiveComponent* SleepingComponent, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature"));
    struct Params_BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature {
        UPrimitiveComponent* SleepingComponent; // 0x0
        FName BoneName; // 0x8
    }; // Size: 0x10
    Params_BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature params{};
    params.SleepingComponent = (UPrimitiveComponent*)SleepingComponent;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Part_C::Reveal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.Reveal"));
    struct Params_Reveal {
    }; // Size: 0x0
    Params_Reveal params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Part_C::ExecuteUbergraph_BP_Sphinx_Puzzle_D_Part(int32_t EntryPoint, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_6, USpellToolRecord* K2Node_Event_SpellToolRecord_3, FName K2Node_Event_SpellType_3, FGameplayTagContainer K2Node_Event_Impact_2, ASpellTool* K2Node_Event_SpellTool_2, AActor* K2Node_Event_Instigator_5, USpellToolRecord* K2Node_Event_SpellToolRecord_2, FName K2Node_Event_SpellType_2, FHitResult K2Node_Event_Hit_2, FVector K2Node_Event_ImpactDirection_1, ASpellTool* K2Node_Event_SpellTool_1, AActor* K2Node_Event_Instigator_4, USpellToolRecord* K2Node_Event_SpellToolRecord_1, FName K2Node_Event_SpellType_1, FGameplayTagContainer K2Node_Event_Impact_1, FVector K2Node_Event_MunitionLocation, AActor* K2Node_Event_Instigator_3, AActor* K2Node_Event_Instigator_2, AActor* K2Node_Event_Instigator_1, UPrimitiveComponent* K2Node_Event_MyComp, AActor* K2Node_Event_Other, UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, FVector K2Node_Event_hitLocation, FVector K2Node_Event_HitNormal, FVector K2Node_Event_NormalImpulse, FHitResult K2Node_Event_Hit_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_IsClosed_Variable, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, FHitResult CallFunc_K2_SetWorldTransform_SweepHitResult, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_IsClosed_Variable_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue_1, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_WakingComponent, FName K2Node_ComponentBoundEvent_BoneName_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_SleepingComponent, FName K2Node_ComponentBoundEvent_BoneName, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_NotEqual_VectorVector_ReturnValue) {}
void ABP_Sphinx_Puzzle_D_Part_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Part_C::Velocity_Check_Teleport() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.Velocity Check Teleport"));
    struct Params_Velocity_Check_Teleport {
    }; // Size: 0x0
    Params_Velocity_Check_Teleport params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_D_Part_C::OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.OnAffectedBySpell"));
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
void ABP_Sphinx_Puzzle_D_Part_C::Start__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Part.BP_Sphinx_Puzzle_D_Part_C.Start__DelegateSignature"));
    struct Params_Start__DelegateSignature {
    }; // Size: 0x0
    Params_Start__DelegateSignature params{};
    ProcessEvent(func, &params);
}
