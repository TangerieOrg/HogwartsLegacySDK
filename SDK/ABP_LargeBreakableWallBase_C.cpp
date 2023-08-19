#include "AActor.hpp"
#include "ABP_Breakable_Persistent_C.hpp"
#include "ABP_LargeBreakableWallBase_C.hpp"
#include "ASpellTool.hpp"
#include "FDamageInfo.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "UGeometryCollectionComponent.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "URepairComponent.hpp"
#include "USpellToolRecord.hpp"
ABP_LargeBreakableWallBase_C* ABP_LargeBreakableWallBase_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C");
    return (ABP_LargeBreakableWallBase_C*)res;
}
void ABP_LargeBreakableWallBase_C::SetupSfx(UAkComponent* AkComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.SetupSfx"));
    struct Params_SetupSfx {
        UAkComponent* AkComponent; // 0x0
    }; // Size: 0x8
    Params_SetupSfx params{};
    params.AkComponent = (UAkComponent*)AkComponent;
    ProcessEvent(func, &params);
}
FName ABP_LargeBreakableWallBase_C::GetMainBone() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.GetMainBone"));
    struct Params_GetMainBone {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMainBone params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void ABP_LargeBreakableWallBase_C::OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnAffectedBySpell"));
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
UPrimitiveComponent* ABP_LargeBreakableWallBase_C::GetMainPrimitive() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.GetMainPrimitive"));
    struct Params_GetMainPrimitive {
        UPrimitiveComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMainPrimitive params{};
    ProcessEvent(func, &params);
    return (UPrimitiveComponent*)params.ReturnValue;
}
void ABP_LargeBreakableWallBase_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_LargeBreakableWallBase_C::OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnHitBySpell"));
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
void ABP_LargeBreakableWallBase_C::OnHealed(float healAmount, UPrimitiveComponent* PrimComp) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnHealed"));
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
bool ABP_LargeBreakableWallBase_C::NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.NearDeathKneeling"));
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
bool ABP_LargeBreakableWallBase_C::Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.Damaged"));
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
bool ABP_LargeBreakableWallBase_C::Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.Destroyed"));
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
void ABP_LargeBreakableWallBase_C::OnReset() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnReset"));
    struct Params_OnReset {
    }; // Size: 0x0
    Params_OnReset params{};
    ProcessEvent(func, &params);
}
void ABP_LargeBreakableWallBase_C::OnAttemptToHeal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnAttemptToHeal"));
    struct Params_OnAttemptToHeal {
    }; // Size: 0x0
    Params_OnAttemptToHeal params{};
    ProcessEvent(func, &params);
}
void ABP_LargeBreakableWallBase_C::OnAttemptToRepair() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnAttemptToRepair"));
    struct Params_OnAttemptToRepair {
    }; // Size: 0x0
    Params_OnAttemptToRepair params{};
    ProcessEvent(func, &params);
}
void ABP_LargeBreakableWallBase_C::OnBeginRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnBeginRepairing"));
    struct Params_OnBeginRepairing {
    }; // Size: 0x0
    Params_OnBeginRepairing params{};
    ProcessEvent(func, &params);
}
void ABP_LargeBreakableWallBase_C::OnCriticalHealthReached() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnCriticalHealthReached"));
    struct Params_OnCriticalHealthReached {
    }; // Size: 0x0
    Params_OnCriticalHealthReached params{};
    ProcessEvent(func, &params);
}
void ABP_LargeBreakableWallBase_C::OnDoneRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnDoneRepairing"));
    struct Params_OnDoneRepairing {
    }; // Size: 0x0
    Params_OnDoneRepairing params{};
    ProcessEvent(func, &params);
}
void ABP_LargeBreakableWallBase_C::OnFailedToBeDamaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnFailedToBeDamaged"));
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
void ABP_LargeBreakableWallBase_C::OnFailedToBeDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnFailedToBeDestroyed"));
    struct Params_OnFailedToBeDestroyed {
    }; // Size: 0x0
    Params_OnFailedToBeDestroyed params{};
    ProcessEvent(func, &params);
}
void ABP_LargeBreakableWallBase_C::OnFailedToBeHealed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnFailedToBeHealed"));
    struct Params_OnFailedToBeHealed {
    }; // Size: 0x0
    Params_OnFailedToBeHealed params{};
    ProcessEvent(func, &params);
}
void ABP_LargeBreakableWallBase_C::OnGeometryCollectionCompletelyBroken(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnGeometryCollectionCompletelyBroken"));
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
void ABP_LargeBreakableWallBase_C::OnGeometryCollectionDamaged(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnGeometryCollectionDamaged"));
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
void ABP_LargeBreakableWallBase_C::OnGeometryCollectionSpawned(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection, bool bCompletelyBroken) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnGeometryCollectionSpawned"));
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
void ABP_LargeBreakableWallBase_C::OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnAffectedBySpellEnd"));
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
void ABP_LargeBreakableWallBase_C::OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnOverlappedBySpell"));
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
void ABP_LargeBreakableWallBase_C::OnSpellEffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnSpellEffective"));
    struct Params_OnSpellEffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellEffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_LargeBreakableWallBase_C::OnSpellIneffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnSpellIneffective"));
    struct Params_OnSpellIneffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellIneffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_LargeBreakableWallBase_C::OnSpellTooWeak(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.OnSpellTooWeak"));
    struct Params_OnSpellTooWeak {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellTooWeak params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_LargeBreakableWallBase_C::MusicStinger() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.MusicStinger"));
    struct Params_MusicStinger {
    }; // Size: 0x0
    Params_MusicStinger params{};
    ProcessEvent(func, &params);
}
void ABP_LargeBreakableWallBase_C::ExecuteUbergraph_BP_LargeBreakableWallBase(int32_t EntryPoint, float K2Node_Event_damageAmount, FVector K2Node_Event_hitLocation_3, FVector K2Node_Event_hitDirection_3, UPrimitiveComponent* K2Node_Event_primComp_1, FGameplayTagContainer K2Node_Event_MunitionTagContainer, AActor* K2Node_Event_Instigator_7, FVector K2Node_Event_Velocity, URepairComponent* K2Node_Event_RepairComponent_2, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2, float K2Node_Event_impulseStr_2, float K2Node_Event_Radius_2, FVector K2Node_Event_hitLocation_2, FVector K2Node_Event_hitDirection_2, URepairComponent* K2Node_Event_RepairComponent_1, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1, float K2Node_Event_impulseStr_1, float K2Node_Event_Radius_1, FVector K2Node_Event_hitLocation_1, FVector K2Node_Event_hitDirection_1, URepairComponent* K2Node_Event_RepairComponent, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent, float K2Node_Event_impulseStr, float K2Node_Event_Radius, FVector K2Node_Event_hitLocation, FVector K2Node_Event_hitDirection, bool K2Node_Event_bCompletelyBroken, float K2Node_Event_healAmount, UPrimitiveComponent* K2Node_Event_primComp, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_6, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets, USpellToolRecord* K2Node_Event_SpellToolRecord_3, FName K2Node_Event_SpellType_3, FGameplayTagContainer K2Node_Event_Impact_2, FHitResult K2Node_Event_Hit_1, FVector K2Node_Event_ImpactDirection_1, ASpellTool* K2Node_Event_SpellTool_2, AActor* K2Node_Event_Instigator_5, USpellToolRecord* K2Node_Event_SpellToolRecord_2, FName K2Node_Event_SpellType_2, FGameplayTagContainer K2Node_Event_Impact_1, ASpellTool* K2Node_Event_SpellTool_1, AActor* K2Node_Event_Instigator_4, USpellToolRecord* K2Node_Event_SpellToolRecord_1, FName K2Node_Event_SpellType_1, FGameplayTagContainer K2Node_Event_Impact, FVector K2Node_Event_MunitionLocation, AActor* K2Node_Event_Instigator_3, AActor* K2Node_Event_Instigator_2, AActor* K2Node_Event_Instigator_1, ASpellTool* K2Node_Event_SpellTool, AActor* K2Node_Event_Instigator, USpellToolRecord* K2Node_Event_SpellToolRecord, FName K2Node_Event_SpellType, FHitResult K2Node_Event_Hit, FVector K2Node_Event_ImpactDirection, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool K2Node_SwitchName_CmpSuccess, UAkComponent* K2Node_Event_AkComponent, FDamageInfo CallFunc_DoDamageLocationDirection_OutDamageInfo, bool CallFunc_DoDamageLocationDirection_ReturnValue, int32_t CallFunc_AddStateToStack_ReturnValue, int32_t CallFunc_AddStateToStack_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_LargeBreakableWallBase.BP_LargeBreakableWallBase_C.ExecuteUbergraph_BP_LargeBreakableWallBase"));
    struct Params_ExecuteUbergraph_BP_LargeBreakableWallBase {
        int32_t EntryPoint; // 0x0
        float K2Node_Event_damageAmount; // 0x4
        FVector K2Node_Event_hitLocation_3; // 0x8
        FVector K2Node_Event_hitDirection_3; // 0x14
        UPrimitiveComponent* K2Node_Event_primComp_1; // 0x20
        FGameplayTagContainer K2Node_Event_MunitionTagContainer; // 0x28
        AActor* K2Node_Event_Instigator_7; // 0x48
        FVector K2Node_Event_Velocity; // 0x50
        char pad_5c[0x4];
        URepairComponent* K2Node_Event_RepairComponent_2; // 0x60
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2; // 0x68
        float K2Node_Event_impulseStr_2; // 0x70
        float K2Node_Event_Radius_2; // 0x74
        FVector K2Node_Event_hitLocation_2; // 0x78
        FVector K2Node_Event_hitDirection_2; // 0x84
        URepairComponent* K2Node_Event_RepairComponent_1; // 0x90
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1; // 0x98
        float K2Node_Event_impulseStr_1; // 0xa0
        float K2Node_Event_Radius_1; // 0xa4
        FVector K2Node_Event_hitLocation_1; // 0xa8
        FVector K2Node_Event_hitDirection_1; // 0xb4
        URepairComponent* K2Node_Event_RepairComponent; // 0xc0
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent; // 0xc8
        float K2Node_Event_impulseStr; // 0xd0
        float K2Node_Event_Radius; // 0xd4
        FVector K2Node_Event_hitLocation; // 0xd8
        FVector K2Node_Event_hitDirection; // 0xe4
        bool K2Node_Event_bCompletelyBroken; // 0xf0
        char pad_f1[0x3];
        float K2Node_Event_healAmount; // 0xf4
        UPrimitiveComponent* K2Node_Event_primComp; // 0xf8
        ASpellTool* K2Node_Event_SpellTool_3; // 0x100
        AActor* K2Node_Event_Instigator_6; // 0x108
        TArray<UInteractionArchitectAsset*> K2Node_Event_DataAssets; // 0x110
        USpellToolRecord* K2Node_Event_SpellToolRecord_3; // 0x120
        FName K2Node_Event_SpellType_3; // 0x128
        FGameplayTagContainer K2Node_Event_Impact_2; // 0x130
        FHitResult K2Node_Event_Hit_1; // 0x150
        FVector K2Node_Event_ImpactDirection_1; // 0x1d8
        char pad_1e4[0x4];
        ASpellTool* K2Node_Event_SpellTool_2; // 0x1e8
        AActor* K2Node_Event_Instigator_5; // 0x1f0
        USpellToolRecord* K2Node_Event_SpellToolRecord_2; // 0x1f8
        FName K2Node_Event_SpellType_2; // 0x200
        FGameplayTagContainer K2Node_Event_Impact_1; // 0x208
        ASpellTool* K2Node_Event_SpellTool_1; // 0x228
        AActor* K2Node_Event_Instigator_4; // 0x230
        USpellToolRecord* K2Node_Event_SpellToolRecord_1; // 0x238
        FName K2Node_Event_SpellType_1; // 0x240
        FGameplayTagContainer K2Node_Event_Impact; // 0x248
        FVector K2Node_Event_MunitionLocation; // 0x268
        char pad_274[0x4];
        AActor* K2Node_Event_Instigator_3; // 0x278
        AActor* K2Node_Event_Instigator_2; // 0x280
        AActor* K2Node_Event_Instigator_1; // 0x288
        ASpellTool* K2Node_Event_SpellTool; // 0x290
        AActor* K2Node_Event_Instigator; // 0x298
        USpellToolRecord* K2Node_Event_SpellToolRecord; // 0x2a0
        FName K2Node_Event_SpellType; // 0x2a8
        FHitResult K2Node_Event_Hit; // 0x2b0
        FVector K2Node_Event_ImpactDirection; // 0x338
        bool CallFunc_BreakHitResult_bBlockingHit; // 0x344
        bool CallFunc_BreakHitResult_bInitialOverlap; // 0x345
        char pad_346[0x2];
        float CallFunc_BreakHitResult_Time; // 0x348
        float CallFunc_BreakHitResult_Distance; // 0x34c
        FVector CallFunc_BreakHitResult_Location; // 0x350
        FVector CallFunc_BreakHitResult_ImpactPoint; // 0x35c
        FVector CallFunc_BreakHitResult_Normal; // 0x368
        FVector CallFunc_BreakHitResult_ImpactNormal; // 0x374
        UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat; // 0x380
        AActor* CallFunc_BreakHitResult_HitActor; // 0x388
        UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent; // 0x390
        FName CallFunc_BreakHitResult_HitBoneName; // 0x398
        int32_t CallFunc_BreakHitResult_HitItem; // 0x3a0
        int32_t CallFunc_BreakHitResult_ElementIndex; // 0x3a4
        int32_t CallFunc_BreakHitResult_FaceIndex; // 0x3a8
        FVector CallFunc_BreakHitResult_TraceStart; // 0x3ac
        FVector CallFunc_BreakHitResult_TraceEnd; // 0x3b8
        bool K2Node_SwitchName_CmpSuccess; // 0x3c4
        char pad_3c5[0x3];
        UAkComponent* K2Node_Event_AkComponent; // 0x3c8
        FDamageInfo CallFunc_DoDamageLocationDirection_OutDamageInfo; // 0x3d0
        bool CallFunc_DoDamageLocationDirection_ReturnValue; // 0x598
        char pad_599[0x3];
        int32_t CallFunc_AddStateToStack_ReturnValue; // 0x59c
        int32_t CallFunc_AddStateToStack_ReturnValue_1; // 0x5a0
    }; // Size: 0x5a4
    Params_ExecuteUbergraph_BP_LargeBreakableWallBase params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_damageAmount = (float)K2Node_Event_damageAmount;
    params.K2Node_Event_hitLocation_3 = (FVector)K2Node_Event_hitLocation_3;
    params.K2Node_Event_hitDirection_3 = (FVector)K2Node_Event_hitDirection_3;
    params.K2Node_Event_primComp_1 = (UPrimitiveComponent*)K2Node_Event_primComp_1;
    params.K2Node_Event_MunitionTagContainer = (FGameplayTagContainer)K2Node_Event_MunitionTagContainer;
    params.K2Node_Event_Instigator_7 = (AActor*)K2Node_Event_Instigator_7;
    params.K2Node_Event_Velocity = (FVector)K2Node_Event_Velocity;
    params.K2Node_Event_RepairComponent_2 = (URepairComponent*)K2Node_Event_RepairComponent_2;
    params.K2Node_Event_GeometryCollectionComponent_2 = (UGeometryCollectionComponent*)K2Node_Event_GeometryCollectionComponent_2;
    params.K2Node_Event_impulseStr_2 = (float)K2Node_Event_impulseStr_2;
    params.K2Node_Event_Radius_2 = (float)K2Node_Event_Radius_2;
    params.K2Node_Event_hitLocation_2 = (FVector)K2Node_Event_hitLocation_2;
    params.K2Node_Event_hitDirection_2 = (FVector)K2Node_Event_hitDirection_2;
    params.K2Node_Event_RepairComponent_1 = (URepairComponent*)K2Node_Event_RepairComponent_1;
    params.K2Node_Event_GeometryCollectionComponent_1 = (UGeometryCollectionComponent*)K2Node_Event_GeometryCollectionComponent_1;
    params.K2Node_Event_impulseStr_1 = (float)K2Node_Event_impulseStr_1;
    params.K2Node_Event_Radius_1 = (float)K2Node_Event_Radius_1;
    params.K2Node_Event_hitLocation_1 = (FVector)K2Node_Event_hitLocation_1;
    params.K2Node_Event_hitDirection_1 = (FVector)K2Node_Event_hitDirection_1;
    params.K2Node_Event_RepairComponent = (URepairComponent*)K2Node_Event_RepairComponent;
    params.K2Node_Event_GeometryCollectionComponent = (UGeometryCollectionComponent*)K2Node_Event_GeometryCollectionComponent;
    params.K2Node_Event_impulseStr = (float)K2Node_Event_impulseStr;
    params.K2Node_Event_Radius = (float)K2Node_Event_Radius;
    params.K2Node_Event_hitLocation = (FVector)K2Node_Event_hitLocation;
    params.K2Node_Event_hitDirection = (FVector)K2Node_Event_hitDirection;
    params.K2Node_Event_bCompletelyBroken = (bool)K2Node_Event_bCompletelyBroken;
    params.K2Node_Event_healAmount = (float)K2Node_Event_healAmount;
    params.K2Node_Event_primComp = (UPrimitiveComponent*)K2Node_Event_primComp;
    params.K2Node_Event_SpellTool_3 = (ASpellTool*)K2Node_Event_SpellTool_3;
    params.K2Node_Event_Instigator_6 = (AActor*)K2Node_Event_Instigator_6;
    params.K2Node_Event_DataAssets = (TArray<UInteractionArchitectAsset*>)K2Node_Event_DataAssets;
    params.K2Node_Event_SpellToolRecord_3 = (USpellToolRecord*)K2Node_Event_SpellToolRecord_3;
    params.K2Node_Event_SpellType_3 = (FName)K2Node_Event_SpellType_3;
    params.K2Node_Event_Impact_2 = (FGameplayTagContainer)K2Node_Event_Impact_2;
    params.K2Node_Event_Hit_1 = (FHitResult)K2Node_Event_Hit_1;
    params.K2Node_Event_ImpactDirection_1 = (FVector)K2Node_Event_ImpactDirection_1;
    params.K2Node_Event_SpellTool_2 = (ASpellTool*)K2Node_Event_SpellTool_2;
    params.K2Node_Event_Instigator_5 = (AActor*)K2Node_Event_Instigator_5;
    params.K2Node_Event_SpellToolRecord_2 = (USpellToolRecord*)K2Node_Event_SpellToolRecord_2;
    params.K2Node_Event_SpellType_2 = (FName)K2Node_Event_SpellType_2;
    params.K2Node_Event_Impact_1 = (FGameplayTagContainer)K2Node_Event_Impact_1;
    params.K2Node_Event_SpellTool_1 = (ASpellTool*)K2Node_Event_SpellTool_1;
    params.K2Node_Event_Instigator_4 = (AActor*)K2Node_Event_Instigator_4;
    params.K2Node_Event_SpellToolRecord_1 = (USpellToolRecord*)K2Node_Event_SpellToolRecord_1;
    params.K2Node_Event_SpellType_1 = (FName)K2Node_Event_SpellType_1;
    params.K2Node_Event_Impact = (FGameplayTagContainer)K2Node_Event_Impact;
    params.K2Node_Event_MunitionLocation = (FVector)K2Node_Event_MunitionLocation;
    params.K2Node_Event_Instigator_3 = (AActor*)K2Node_Event_Instigator_3;
    params.K2Node_Event_Instigator_2 = (AActor*)K2Node_Event_Instigator_2;
    params.K2Node_Event_Instigator_1 = (AActor*)K2Node_Event_Instigator_1;
    params.K2Node_Event_SpellTool = (ASpellTool*)K2Node_Event_SpellTool;
    params.K2Node_Event_Instigator = (AActor*)K2Node_Event_Instigator;
    params.K2Node_Event_SpellToolRecord = (USpellToolRecord*)K2Node_Event_SpellToolRecord;
    params.K2Node_Event_SpellType = (FName)K2Node_Event_SpellType;
    params.K2Node_Event_Hit = (FHitResult)K2Node_Event_Hit;
    params.K2Node_Event_ImpactDirection = (FVector)K2Node_Event_ImpactDirection;
    params.CallFunc_BreakHitResult_bBlockingHit = (bool)CallFunc_BreakHitResult_bBlockingHit;
    params.CallFunc_BreakHitResult_bInitialOverlap = (bool)CallFunc_BreakHitResult_bInitialOverlap;
    params.CallFunc_BreakHitResult_Time = (float)CallFunc_BreakHitResult_Time;
    params.CallFunc_BreakHitResult_Distance = (float)CallFunc_BreakHitResult_Distance;
    params.CallFunc_BreakHitResult_Location = (FVector)CallFunc_BreakHitResult_Location;
    params.CallFunc_BreakHitResult_ImpactPoint = (FVector)CallFunc_BreakHitResult_ImpactPoint;
    params.CallFunc_BreakHitResult_Normal = (FVector)CallFunc_BreakHitResult_Normal;
    params.CallFunc_BreakHitResult_ImpactNormal = (FVector)CallFunc_BreakHitResult_ImpactNormal;
    params.CallFunc_BreakHitResult_PhysMat = (UPhysicalMaterial*)CallFunc_BreakHitResult_PhysMat;
    params.CallFunc_BreakHitResult_HitActor = (AActor*)CallFunc_BreakHitResult_HitActor;
    params.CallFunc_BreakHitResult_HitComponent = (UPrimitiveComponent*)CallFunc_BreakHitResult_HitComponent;
    params.CallFunc_BreakHitResult_HitBoneName = (FName)CallFunc_BreakHitResult_HitBoneName;
    params.CallFunc_BreakHitResult_HitItem = (int32_t)CallFunc_BreakHitResult_HitItem;
    params.CallFunc_BreakHitResult_ElementIndex = (int32_t)CallFunc_BreakHitResult_ElementIndex;
    params.CallFunc_BreakHitResult_FaceIndex = (int32_t)CallFunc_BreakHitResult_FaceIndex;
    params.CallFunc_BreakHitResult_TraceStart = (FVector)CallFunc_BreakHitResult_TraceStart;
    params.CallFunc_BreakHitResult_TraceEnd = (FVector)CallFunc_BreakHitResult_TraceEnd;
    params.K2Node_SwitchName_CmpSuccess = (bool)K2Node_SwitchName_CmpSuccess;
    params.K2Node_Event_AkComponent = (UAkComponent*)K2Node_Event_AkComponent;
    params.CallFunc_DoDamageLocationDirection_OutDamageInfo = (FDamageInfo)CallFunc_DoDamageLocationDirection_OutDamageInfo;
    params.CallFunc_DoDamageLocationDirection_ReturnValue = (bool)CallFunc_DoDamageLocationDirection_ReturnValue;
    params.CallFunc_AddStateToStack_ReturnValue = (int32_t)CallFunc_AddStateToStack_ReturnValue;
    params.CallFunc_AddStateToStack_ReturnValue_1 = (int32_t)CallFunc_AddStateToStack_ReturnValue_1;
    ProcessEvent(func, &params);
    K2Node_Event_DataAssets = params.K2Node_Event_DataAssets;
}
