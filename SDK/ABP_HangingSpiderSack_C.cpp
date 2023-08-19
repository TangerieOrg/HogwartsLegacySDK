#include "AActor.hpp"
#include "ABP_EggSackA_C.hpp"
#include "ABP_HangingSpiderSack_C.hpp"
#include "ASpellTool.hpp"
#include "ASpiderWeb_HangingBase.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FMeshList.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UGeometryCollectionComponent.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UPhysicsConstraintComponent.hpp"
#include "UPoseableMeshComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "URepairComponent.hpp"
#include "USceneComponent.hpp"
#include "USpellToolRecord.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_HangingSpiderSack_C::BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_1_Break__DelegateSignature(float Delay, bool bExplode) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_1_Break__DelegateSignature"));
    struct Params_BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_1_Break__DelegateSignature {
        float Delay; // 0x0
        bool bExplode; // 0x4
    }; // Size: 0x5
    Params_BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_1_Break__DelegateSignature params{};
    params.Delay = (float)Delay;
    params.bExplode = (bool)bExplode;
    ProcessEvent(func, &params);
}
bool ABP_HangingSpiderSack_C::Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.Damaged"));
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
ABP_HangingSpiderSack_C* ABP_HangingSpiderSack_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C");
    return (ABP_HangingSpiderSack_C*)res;
}
void ABP_HangingSpiderSack_C::UserConstructionScript(FMeshList Meshes, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, ABP_EggSackA_C* K2Node_DynamicCast_AsBP_Egg_Sack_A, bool K2Node_DynamicCast_bSuccess, FRandomStream CallFunc_MakeRandomStream_RandomStream, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, int32_t CallFunc_SelectMesh_NewPropIndex) {}
bool ABP_HangingSpiderSack_C::Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.Destroyed"));
    struct Params_Destroyed {
        float DamageAmount; // 0x0
        char pad_4[0x4];
        AActor* Instigator; // 0x8
        FGameplayTagContainer MunitionTagContainer; // 0x10
        FVector Velocity; // 0x30
        bool ReturnValue; // 0x3c
    }; // Size: 0x3d
    Params_Destroyed params{};
    params.DamageAmount = (float)DamageAmount;
    params.Instigator = (AActor*)Instigator;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Velocity = (FVector)Velocity;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_HangingSpiderSack_C::OnGeometryCollectionDamaged(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnGeometryCollectionDamaged"));
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
bool ABP_HangingSpiderSack_C::NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.NearDeathKneeling"));
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
void ABP_HangingSpiderSack_C::OnAttemptToRepair() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnAttemptToRepair"));
    struct Params_OnAttemptToRepair {
    }; // Size: 0x0
    Params_OnAttemptToRepair params{};
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::OnBeginRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnBeginRepairing"));
    struct Params_OnBeginRepairing {
    }; // Size: 0x0
    Params_OnBeginRepairing params{};
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::OnCriticalHealthReached() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnCriticalHealthReached"));
    struct Params_OnCriticalHealthReached {
    }; // Size: 0x0
    Params_OnCriticalHealthReached params{};
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::OnDoneRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnDoneRepairing"));
    struct Params_OnDoneRepairing {
    }; // Size: 0x0
    Params_OnDoneRepairing params{};
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::OnFailedToBeDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnFailedToBeDestroyed"));
    struct Params_OnFailedToBeDestroyed {
    }; // Size: 0x0
    Params_OnFailedToBeDestroyed params{};
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::OnFailedToBeHealed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnFailedToBeHealed"));
    struct Params_OnFailedToBeHealed {
    }; // Size: 0x0
    Params_OnFailedToBeHealed params{};
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::OnHealed(float healAmount, UPrimitiveComponent* PrimComp) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnHealed"));
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
void ABP_HangingSpiderSack_C::OnGeometryCollectionCompletelyBroken(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnGeometryCollectionCompletelyBroken"));
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
void ABP_HangingSpiderSack_C::OnGeometryCollectionSpawned(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection, bool bCompletelyBroken) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnGeometryCollectionSpawned"));
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
void ABP_HangingSpiderSack_C::OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnAffectedBySpell"));
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
    ImpactDirection = params.ImpactDirection;
    Hit = params.Hit;
}
void ABP_HangingSpiderSack_C::OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnAffectedBySpellEnd"));
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
void ABP_HangingSpiderSack_C::OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnOverlappedBySpell"));
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
void ABP_HangingSpiderSack_C::OnSpellEffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnSpellEffective"));
    struct Params_OnSpellEffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellEffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::OnSpellIneffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnSpellIneffective"));
    struct Params_OnSpellIneffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellIneffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::OnSpellTooWeak(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnSpellTooWeak"));
    struct Params_OnSpellTooWeak {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellTooWeak params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnHitBySpell"));
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
void ABP_HangingSpiderSack_C::OnAttemptToHeal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnAttemptToHeal"));
    struct Params_OnAttemptToHeal {
    }; // Size: 0x0
    Params_OnAttemptToHeal params{};
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::OnFailedToBeDamaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.OnFailedToBeDamaged"));
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
void ABP_HangingSpiderSack_C::BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_2_AccioInteraction__DelegateSignature(bool bStarted, float Time) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_2_AccioInteraction__DelegateSignature"));
    struct Params_BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_2_AccioInteraction__DelegateSignature {
        bool bStarted; // 0x0
        char pad_1[0x3];
        float Time; // 0x4
    }; // Size: 0x8
    Params_BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_2_AccioInteraction__DelegateSignature params{};
    params.bStarted = (bool)bStarted;
    params.Time = (float)Time;
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::Break__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.Break__DelegateSignature"));
    struct Params_Break__DelegateSignature {
    }; // Size: 0x0
    Params_Break__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_3_DescendoInteraction__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_3_DescendoInteraction__DelegateSignature"));
    struct Params_BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_3_DescendoInteraction__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_3_DescendoInteraction__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_4_WingardiumInteraction__DelegateSignature(bool bStart) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_4_WingardiumInteraction__DelegateSignature"));
    struct Params_BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_4_WingardiumInteraction__DelegateSignature {
        bool bStart; // 0x0
    }; // Size: 0x1
    Params_BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_4_WingardiumInteraction__DelegateSignature params{};
    params.bStart = (bool)bStart;
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_5_ScaleInteraction__DelegateSignature(bool bStart, bool bScaleUp) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_5_ScaleInteraction__DelegateSignature"));
    struct Params_BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_5_ScaleInteraction__DelegateSignature {
        bool bStart; // 0x0
        bool bScaleUp; // 0x1
    }; // Size: 0x2
    Params_BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_5_ScaleInteraction__DelegateSignature params{};
    params.bStart = (bool)bStart;
    params.bScaleUp = (bool)bScaleUp;
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::BndEvt__SackMeshComp_K2Node_ComponentBoundEvent_6_ComponentWakeSignature__DelegateSignature(UPrimitiveComponent* WakingComponent, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.BndEvt__SackMeshComp_K2Node_ComponentBoundEvent_6_ComponentWakeSignature__DelegateSignature"));
    struct Params_BndEvt__SackMeshComp_K2Node_ComponentBoundEvent_6_ComponentWakeSignature__DelegateSignature {
        UPrimitiveComponent* WakingComponent; // 0x0
        FName BoneName; // 0x8
    }; // Size: 0x10
    Params_BndEvt__SackMeshComp_K2Node_ComponentBoundEvent_6_ComponentWakeSignature__DelegateSignature params{};
    params.WakingComponent = (UPrimitiveComponent*)WakingComponent;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::BndEvt__SackMeshComp_K2Node_ComponentBoundEvent_7_ComponentSleepSignature__DelegateSignature(UPrimitiveComponent* SleepingComponent, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.BndEvt__SackMeshComp_K2Node_ComponentBoundEvent_7_ComponentSleepSignature__DelegateSignature"));
    struct Params_BndEvt__SackMeshComp_K2Node_ComponentBoundEvent_7_ComponentSleepSignature__DelegateSignature {
        UPrimitiveComponent* SleepingComponent; // 0x0
        FName BoneName; // 0x8
    }; // Size: 0x10
    Params_BndEvt__SackMeshComp_K2Node_ComponentBoundEvent_7_ComponentSleepSignature__DelegateSignature params{};
    params.SleepingComponent = (UPrimitiveComponent*)SleepingComponent;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void ABP_HangingSpiderSack_C::ExecuteUbergraph_BP_HangingSpiderSack(int32_t EntryPoint, URepairComponent* K2Node_Event_RepairComponent_2, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2, float K2Node_Event_impulseStr_2, float K2Node_Event_Radius_2, FVector K2Node_Event_hitLocation_3, FVector K2Node_Event_hitDirection_3, URepairComponent* K2Node_Event_RepairComponent_1, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1, float K2Node_Event_impulseStr_1, float K2Node_Event_Radius_1, FVector K2Node_Event_hitLocation_2, FVector K2Node_Event_hitDirection_2, URepairComponent* K2Node_Event_RepairComponent, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent, float K2Node_Event_impulseStr, float K2Node_Event_Radius, FVector K2Node_Event_hitLocation_1, FVector K2Node_Event_hitDirection_1, bool K2Node_Event_bCompletelyBroken, float K2Node_Event_healAmount, UPrimitiveComponent* K2Node_Event_primComp_1, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_7, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets, USpellToolRecord* K2Node_Event_SpellToolRecord_3, FName K2Node_Event_SpellType_3, FGameplayTagContainer K2Node_Event_Impact_2, FHitResult K2Node_Event_Hit_1, FVector K2Node_Event_ImpactDirection_1, ASpellTool* K2Node_Event_SpellTool_2, AActor* K2Node_Event_Instigator_6, USpellToolRecord* K2Node_Event_SpellToolRecord_2, FName K2Node_Event_SpellType_2, FGameplayTagContainer K2Node_Event_Impact_1, ASpellTool* K2Node_Event_SpellTool_1, AActor* K2Node_Event_Instigator_5, USpellToolRecord* K2Node_Event_SpellToolRecord_1, FName K2Node_Event_SpellType_1, FGameplayTagContainer K2Node_Event_Impact, FVector K2Node_Event_MunitionLocation, AActor* K2Node_Event_Instigator_4, AActor* K2Node_Event_Instigator_3, AActor* K2Node_Event_Instigator_2, ASpellTool* K2Node_Event_SpellTool, AActor* K2Node_Event_Instigator_1, USpellToolRecord* K2Node_Event_SpellToolRecord, FName K2Node_Event_SpellType, FHitResult K2Node_Event_Hit, FVector K2Node_Event_ImpactDirection, bool K2Node_SwitchName_CmpSuccess, float K2Node_Event_damageAmount, FVector K2Node_Event_hitLocation, FVector K2Node_Event_hitDirection, UPrimitiveComponent* K2Node_Event_primComp, FGameplayTagContainer K2Node_Event_MunitionTagContainer, AActor* K2Node_Event_Instigator, FVector K2Node_Event_Velocity, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_ComponentBoundEvent_Delay, bool K2Node_ComponentBoundEvent_bExplode, bool K2Node_ComponentBoundEvent_bStarted, float K2Node_ComponentBoundEvent_Time, bool K2Node_ComponentBoundEvent_bStart_1, bool K2Node_ComponentBoundEvent_bStart, bool K2Node_ComponentBoundEvent_bScaleUp, UPrimitiveComponent* K2Node_ComponentBoundEvent_WakingComponent, FName K2Node_ComponentBoundEvent_BoneName_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_SleepingComponent, FName K2Node_ComponentBoundEvent_BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_HangingSpiderSack.BP_HangingSpiderSack_C.ExecuteUbergraph_BP_HangingSpiderSack"));
    struct Params_ExecuteUbergraph_BP_HangingSpiderSack {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        URepairComponent* K2Node_Event_RepairComponent_2; // 0x8
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2; // 0x10
        float K2Node_Event_impulseStr_2; // 0x18
        float K2Node_Event_Radius_2; // 0x1c
        FVector K2Node_Event_hitLocation_3; // 0x20
        FVector K2Node_Event_hitDirection_3; // 0x2c
        URepairComponent* K2Node_Event_RepairComponent_1; // 0x38
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1; // 0x40
        float K2Node_Event_impulseStr_1; // 0x48
        float K2Node_Event_Radius_1; // 0x4c
        FVector K2Node_Event_hitLocation_2; // 0x50
        FVector K2Node_Event_hitDirection_2; // 0x5c
        URepairComponent* K2Node_Event_RepairComponent; // 0x68
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent; // 0x70
        float K2Node_Event_impulseStr; // 0x78
        float K2Node_Event_Radius; // 0x7c
        FVector K2Node_Event_hitLocation_1; // 0x80
        FVector K2Node_Event_hitDirection_1; // 0x8c
        bool K2Node_Event_bCompletelyBroken; // 0x98
        char pad_99[0x3];
        float K2Node_Event_healAmount; // 0x9c
        UPrimitiveComponent* K2Node_Event_primComp_1; // 0xa0
        ASpellTool* K2Node_Event_SpellTool_3; // 0xa8
        AActor* K2Node_Event_Instigator_7; // 0xb0
        TArray<UInteractionArchitectAsset*> K2Node_Event_DataAssets; // 0xb8
        USpellToolRecord* K2Node_Event_SpellToolRecord_3; // 0xc8
        FName K2Node_Event_SpellType_3; // 0xd0
        FGameplayTagContainer K2Node_Event_Impact_2; // 0xd8
        FHitResult K2Node_Event_Hit_1; // 0xf8
        FVector K2Node_Event_ImpactDirection_1; // 0x180
        char pad_18c[0x4];
        ASpellTool* K2Node_Event_SpellTool_2; // 0x190
        AActor* K2Node_Event_Instigator_6; // 0x198
        USpellToolRecord* K2Node_Event_SpellToolRecord_2; // 0x1a0
        FName K2Node_Event_SpellType_2; // 0x1a8
        FGameplayTagContainer K2Node_Event_Impact_1; // 0x1b0
        ASpellTool* K2Node_Event_SpellTool_1; // 0x1d0
        AActor* K2Node_Event_Instigator_5; // 0x1d8
        USpellToolRecord* K2Node_Event_SpellToolRecord_1; // 0x1e0
        FName K2Node_Event_SpellType_1; // 0x1e8
        FGameplayTagContainer K2Node_Event_Impact; // 0x1f0
        FVector K2Node_Event_MunitionLocation; // 0x210
        char pad_21c[0x4];
        AActor* K2Node_Event_Instigator_4; // 0x220
        AActor* K2Node_Event_Instigator_3; // 0x228
        AActor* K2Node_Event_Instigator_2; // 0x230
        ASpellTool* K2Node_Event_SpellTool; // 0x238
        AActor* K2Node_Event_Instigator_1; // 0x240
        USpellToolRecord* K2Node_Event_SpellToolRecord; // 0x248
        FName K2Node_Event_SpellType; // 0x250
        FHitResult K2Node_Event_Hit; // 0x258
        FVector K2Node_Event_ImpactDirection; // 0x2e0
        bool K2Node_SwitchName_CmpSuccess; // 0x2ec
        char pad_2ed[0x3];
        float K2Node_Event_damageAmount; // 0x2f0
        FVector K2Node_Event_hitLocation; // 0x2f4
        FVector K2Node_Event_hitDirection; // 0x300
        char pad_30c[0x4];
        UPrimitiveComponent* K2Node_Event_primComp; // 0x310
        FGameplayTagContainer K2Node_Event_MunitionTagContainer; // 0x318
        AActor* K2Node_Event_Instigator; // 0x338
        FVector K2Node_Event_Velocity; // 0x340
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x34c
        char pad_34d[0x3];
        float K2Node_ComponentBoundEvent_Delay; // 0x350
        bool K2Node_ComponentBoundEvent_bExplode; // 0x354
        bool K2Node_ComponentBoundEvent_bStarted; // 0x355
        char pad_356[0x2];
        float K2Node_ComponentBoundEvent_Time; // 0x358
        bool K2Node_ComponentBoundEvent_bStart_1; // 0x35c
        bool K2Node_ComponentBoundEvent_bStart; // 0x35d
        bool K2Node_ComponentBoundEvent_bScaleUp; // 0x35e
        char pad_35f[0x1];
        UPrimitiveComponent* K2Node_ComponentBoundEvent_WakingComponent; // 0x360
        FName K2Node_ComponentBoundEvent_BoneName_1; // 0x368
        UPrimitiveComponent* K2Node_ComponentBoundEvent_SleepingComponent; // 0x370
        FName K2Node_ComponentBoundEvent_BoneName; // 0x378
    }; // Size: 0x380
    Params_ExecuteUbergraph_BP_HangingSpiderSack params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_RepairComponent_2 = (URepairComponent*)K2Node_Event_RepairComponent_2;
    params.K2Node_Event_GeometryCollectionComponent_2 = (UGeometryCollectionComponent*)K2Node_Event_GeometryCollectionComponent_2;
    params.K2Node_Event_impulseStr_2 = (float)K2Node_Event_impulseStr_2;
    params.K2Node_Event_Radius_2 = (float)K2Node_Event_Radius_2;
    params.K2Node_Event_hitLocation_3 = (FVector)K2Node_Event_hitLocation_3;
    params.K2Node_Event_hitDirection_3 = (FVector)K2Node_Event_hitDirection_3;
    params.K2Node_Event_RepairComponent_1 = (URepairComponent*)K2Node_Event_RepairComponent_1;
    params.K2Node_Event_GeometryCollectionComponent_1 = (UGeometryCollectionComponent*)K2Node_Event_GeometryCollectionComponent_1;
    params.K2Node_Event_impulseStr_1 = (float)K2Node_Event_impulseStr_1;
    params.K2Node_Event_Radius_1 = (float)K2Node_Event_Radius_1;
    params.K2Node_Event_hitLocation_2 = (FVector)K2Node_Event_hitLocation_2;
    params.K2Node_Event_hitDirection_2 = (FVector)K2Node_Event_hitDirection_2;
    params.K2Node_Event_RepairComponent = (URepairComponent*)K2Node_Event_RepairComponent;
    params.K2Node_Event_GeometryCollectionComponent = (UGeometryCollectionComponent*)K2Node_Event_GeometryCollectionComponent;
    params.K2Node_Event_impulseStr = (float)K2Node_Event_impulseStr;
    params.K2Node_Event_Radius = (float)K2Node_Event_Radius;
    params.K2Node_Event_hitLocation_1 = (FVector)K2Node_Event_hitLocation_1;
    params.K2Node_Event_hitDirection_1 = (FVector)K2Node_Event_hitDirection_1;
    params.K2Node_Event_bCompletelyBroken = (bool)K2Node_Event_bCompletelyBroken;
    params.K2Node_Event_healAmount = (float)K2Node_Event_healAmount;
    params.K2Node_Event_primComp_1 = (UPrimitiveComponent*)K2Node_Event_primComp_1;
    params.K2Node_Event_SpellTool_3 = (ASpellTool*)K2Node_Event_SpellTool_3;
    params.K2Node_Event_Instigator_7 = (AActor*)K2Node_Event_Instigator_7;
    params.K2Node_Event_DataAssets = (TArray<UInteractionArchitectAsset*>)K2Node_Event_DataAssets;
    params.K2Node_Event_SpellToolRecord_3 = (USpellToolRecord*)K2Node_Event_SpellToolRecord_3;
    params.K2Node_Event_SpellType_3 = (FName)K2Node_Event_SpellType_3;
    params.K2Node_Event_Impact_2 = (FGameplayTagContainer)K2Node_Event_Impact_2;
    params.K2Node_Event_Hit_1 = (FHitResult)K2Node_Event_Hit_1;
    params.K2Node_Event_ImpactDirection_1 = (FVector)K2Node_Event_ImpactDirection_1;
    params.K2Node_Event_SpellTool_2 = (ASpellTool*)K2Node_Event_SpellTool_2;
    params.K2Node_Event_Instigator_6 = (AActor*)K2Node_Event_Instigator_6;
    params.K2Node_Event_SpellToolRecord_2 = (USpellToolRecord*)K2Node_Event_SpellToolRecord_2;
    params.K2Node_Event_SpellType_2 = (FName)K2Node_Event_SpellType_2;
    params.K2Node_Event_Impact_1 = (FGameplayTagContainer)K2Node_Event_Impact_1;
    params.K2Node_Event_SpellTool_1 = (ASpellTool*)K2Node_Event_SpellTool_1;
    params.K2Node_Event_Instigator_5 = (AActor*)K2Node_Event_Instigator_5;
    params.K2Node_Event_SpellToolRecord_1 = (USpellToolRecord*)K2Node_Event_SpellToolRecord_1;
    params.K2Node_Event_SpellType_1 = (FName)K2Node_Event_SpellType_1;
    params.K2Node_Event_Impact = (FGameplayTagContainer)K2Node_Event_Impact;
    params.K2Node_Event_MunitionLocation = (FVector)K2Node_Event_MunitionLocation;
    params.K2Node_Event_Instigator_4 = (AActor*)K2Node_Event_Instigator_4;
    params.K2Node_Event_Instigator_3 = (AActor*)K2Node_Event_Instigator_3;
    params.K2Node_Event_Instigator_2 = (AActor*)K2Node_Event_Instigator_2;
    params.K2Node_Event_SpellTool = (ASpellTool*)K2Node_Event_SpellTool;
    params.K2Node_Event_Instigator_1 = (AActor*)K2Node_Event_Instigator_1;
    params.K2Node_Event_SpellToolRecord = (USpellToolRecord*)K2Node_Event_SpellToolRecord;
    params.K2Node_Event_SpellType = (FName)K2Node_Event_SpellType;
    params.K2Node_Event_Hit = (FHitResult)K2Node_Event_Hit;
    params.K2Node_Event_ImpactDirection = (FVector)K2Node_Event_ImpactDirection;
    params.K2Node_SwitchName_CmpSuccess = (bool)K2Node_SwitchName_CmpSuccess;
    params.K2Node_Event_damageAmount = (float)K2Node_Event_damageAmount;
    params.K2Node_Event_hitLocation = (FVector)K2Node_Event_hitLocation;
    params.K2Node_Event_hitDirection = (FVector)K2Node_Event_hitDirection;
    params.K2Node_Event_primComp = (UPrimitiveComponent*)K2Node_Event_primComp;
    params.K2Node_Event_MunitionTagContainer = (FGameplayTagContainer)K2Node_Event_MunitionTagContainer;
    params.K2Node_Event_Instigator = (AActor*)K2Node_Event_Instigator;
    params.K2Node_Event_Velocity = (FVector)K2Node_Event_Velocity;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.K2Node_ComponentBoundEvent_Delay = (float)K2Node_ComponentBoundEvent_Delay;
    params.K2Node_ComponentBoundEvent_bExplode = (bool)K2Node_ComponentBoundEvent_bExplode;
    params.K2Node_ComponentBoundEvent_bStarted = (bool)K2Node_ComponentBoundEvent_bStarted;
    params.K2Node_ComponentBoundEvent_Time = (float)K2Node_ComponentBoundEvent_Time;
    params.K2Node_ComponentBoundEvent_bStart_1 = (bool)K2Node_ComponentBoundEvent_bStart_1;
    params.K2Node_ComponentBoundEvent_bStart = (bool)K2Node_ComponentBoundEvent_bStart;
    params.K2Node_ComponentBoundEvent_bScaleUp = (bool)K2Node_ComponentBoundEvent_bScaleUp;
    params.K2Node_ComponentBoundEvent_WakingComponent = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_WakingComponent;
    params.K2Node_ComponentBoundEvent_BoneName_1 = (FName)K2Node_ComponentBoundEvent_BoneName_1;
    params.K2Node_ComponentBoundEvent_SleepingComponent = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_SleepingComponent;
    params.K2Node_ComponentBoundEvent_BoneName = (FName)K2Node_ComponentBoundEvent_BoneName;
    ProcessEvent(func, &params);
    K2Node_Event_DataAssets = params.K2Node_Event_DataAssets;
}
