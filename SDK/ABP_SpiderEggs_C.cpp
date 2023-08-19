#include "AActor.hpp"
#include "ABP_SpiderEggs_C.hpp"
#include "ASpellTool.hpp"
#include "ASpiderEggs.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_SpiderEggsacParams.hpp"
#include "FVector.hpp"
#include "UArrestoMomentumComponent.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "UGeometryCollectionComponent.hpp"
#include "UIncendioComponent.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UPrimitiveComponent.hpp"
#include "URepairComponent.hpp"
#include "USceneComponent.hpp"
#include "USpellToolRecord.hpp"
#include "UUprightAttachSceneComponent.hpp"
bool ABP_SpiderEggs_C::IncreaseWetness(AActor* Instigator, float increaseAmount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.IncreaseWetness"));
    struct Params_IncreaseWetness {
        AActor* Instigator; // 0x0
        float increaseAmount; // 0x8
        FVector Location; // 0xc
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_IncreaseWetness params{};
    params.Instigator = (AActor*)Instigator;
    params.increaseAmount = (float)increaseAmount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_SpiderEggs_C::SwitchOn(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.SwitchOn"));
    struct Params_SwitchOn {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOn params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnDry(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnDry"));
    struct Params_OnDry {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnDry params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
ABP_SpiderEggs_C* ABP_SpiderEggs_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C");
    return (ABP_SpiderEggs_C*)res;
}
bool ABP_SpiderEggs_C::DisallowArrestoMomentum() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.DisallowArrestoMomentum"));
    struct Params_DisallowArrestoMomentum {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowArrestoMomentum params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_SpiderEggs_C::OnAttemptToSetOnFire(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnAttemptToSetOnFire"));
    struct Params_OnAttemptToSetOnFire {
        FVector Location; // 0x0
    }; // Size: 0xc
    Params_OnAttemptToSetOnFire params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
bool ABP_SpiderEggs_C::StartFreeze(AActor* Instigator, float Amount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.StartFreeze"));
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
bool ABP_SpiderEggs_C::NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.NearDeathKneeling"));
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
bool ABP_SpiderEggs_C::StartWetness(AActor* Instigator, float Amount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.StartWetness"));
    struct Params_StartWetness {
        AActor* Instigator; // 0x0
        float Amount; // 0x8
        FVector Location; // 0xc
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_StartWetness params{};
    params.Instigator = (AActor*)Instigator;
    params.Amount = (float)Amount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_SpiderEggs_C::OnFailedToBeDamaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnFailedToBeDamaged"));
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
bool ABP_SpiderEggs_C::Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_SpiderEggs_C::OnFailedToFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnFailedToFreeze"));
    struct Params_OnFailedToFreeze {
    }; // Size: 0x0
    Params_OnFailedToFreeze params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnSpellIneffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnSpellIneffective"));
    struct Params_OnSpellIneffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellIneffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
bool ABP_SpiderEggs_C::Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue) {}
void ABP_SpiderEggs_C::OnDecreaseWetness(float decreaseAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnDecreaseWetness"));
    struct Params_OnDecreaseWetness {
        float decreaseAmount; // 0x0
    }; // Size: 0x4
    Params_OnDecreaseWetness params{};
    params.decreaseAmount = (float)decreaseAmount;
    ProcessEvent(func, &params);
}
bool ABP_SpiderEggs_C::DecreaseFire(float decreaseAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.DecreaseFire"));
    struct Params_DecreaseFire {
        float decreaseAmount; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_DecreaseFire params{};
    params.decreaseAmount = (float)decreaseAmount;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_SpiderEggs_C::OnDoneRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnDoneRepairing"));
    struct Params_OnDoneRepairing {
    }; // Size: 0x0
    Params_OnDoneRepairing params{};
    ProcessEvent(func, &params);
}
bool ABP_SpiderEggs_C::IncreaseFire(float increaseAmount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.IncreaseFire"));
    struct Params_IncreaseFire {
        float increaseAmount; // 0x0
        FVector Location; // 0x4
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IncreaseFire params{};
    params.increaseAmount = (float)increaseAmount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_SpiderEggs_C::IsPointOnFire(FVector Point, bool& OnFire) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.IsPointOnFire"));
    struct Params_IsPointOnFire {
        FVector Point; // 0x0
        bool OnFire; // 0xc
        bool ReturnValue; // 0xd
    }; // Size: 0xe
    Params_IsPointOnFire params{};
    params.Point = (FVector)Point;
    params.OnFire = (bool)OnFire;
    ProcessEvent(func, &params);
    OnFire = params.OnFire;
    return (bool)params.ReturnValue;
}
void ABP_SpiderEggs_C::SwitchOff(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.SwitchOff"));
    struct Params_SwitchOff {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOff params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
bool ABP_SpiderEggs_C::StartFire(float Amount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.StartFire"));
    struct Params_StartFire {
        float Amount; // 0x0
        FVector Location; // 0x4
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_StartFire params{};
    params.Amount = (float)Amount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_SpiderEggs_C::SetupParamsForSpawnType(float CallFunc_RandomFloatInRange_ReturnValue, FSTR_SpiderEggsacParams CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.SetupParamsForSpawnType"));
    struct Params_SetupParamsForSpawnType {
        float CallFunc_RandomFloatInRange_ReturnValue; // 0x0
        FSTR_SpiderEggsacParams CallFunc_Map_Find_Value; // 0x4
        bool CallFunc_Map_Find_ReturnValue; // 0x30
    }; // Size: 0x31
    Params_SetupParamsForSpawnType params{};
    params.CallFunc_RandomFloatInRange_ReturnValue = (float)CallFunc_RandomFloatInRange_ReturnValue;
    params.CallFunc_Map_Find_Value = (FSTR_SpiderEggsacParams)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnAttemptToApplyWetness(float Amount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnAttemptToApplyWetness"));
    struct Params_OnAttemptToApplyWetness {
        float Amount; // 0x0
        FVector Location; // 0x4
    }; // Size: 0x10
    Params_OnAttemptToApplyWetness params{};
    params.Amount = (float)Amount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnSpellTooWeak(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnSpellTooWeak"));
    struct Params_OnSpellTooWeak {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellTooWeak params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnAffectedBySpell"));
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
    ImpactDirection = params.ImpactDirection;
    DataAssets = params.DataAssets;
    Hit = params.Hit;
}
void ABP_SpiderEggs_C::OnHealed(float healAmount, UPrimitiveComponent* PrimComp) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnHealed"));
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
void ABP_SpiderEggs_C::OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnAffectedBySpellEnd"));
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
void ABP_SpiderEggs_C::OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnOverlappedBySpell"));
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
void ABP_SpiderEggs_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnSpellEffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnSpellEffective"));
    struct Params_OnSpellEffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellEffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnAttemptToFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnAttemptToFreeze"));
    struct Params_OnAttemptToFreeze {
    }; // Size: 0x0
    Params_OnAttemptToFreeze params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnFailedToWet() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnFailedToWet"));
    struct Params_OnFailedToWet {
    }; // Size: 0x0
    Params_OnFailedToWet params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnAttemptToHeal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnAttemptToHeal"));
    struct Params_OnAttemptToHeal {
    }; // Size: 0x0
    Params_OnAttemptToHeal params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnFailedToBeDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnFailedToBeDestroyed"));
    struct Params_OnFailedToBeDestroyed {
    }; // Size: 0x0
    Params_OnFailedToBeDestroyed params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnAttemptToRepair() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnAttemptToRepair"));
    struct Params_OnAttemptToRepair {
    }; // Size: 0x0
    Params_OnAttemptToRepair params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnCompletelyCharred() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnCompletelyCharred"));
    struct Params_OnCompletelyCharred {
    }; // Size: 0x0
    Params_OnCompletelyCharred params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnBeginRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnBeginRepairing"));
    struct Params_OnBeginRepairing {
    }; // Size: 0x0
    Params_OnBeginRepairing params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnCriticalHealthReached() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnCriticalHealthReached"));
    struct Params_OnCriticalHealthReached {
    }; // Size: 0x0
    Params_OnCriticalHealthReached params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnBurst0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnBurst"));
    struct Params_OnBurst {
    }; // Size: 0x0
    Params_OnBurst params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnFireExtinguished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnFireExtinguished"));
    struct Params_OnFireExtinguished {
    }; // Size: 0x0
    Params_OnFireExtinguished params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnFailedToBeHealed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnFailedToBeHealed"));
    struct Params_OnFailedToBeHealed {
    }; // Size: 0x0
    Params_OnFailedToBeHealed params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnGeometryCollectionCompletelyBroken(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnGeometryCollectionCompletelyBroken"));
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
void ABP_SpiderEggs_C::OnThaw(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnThaw"));
    struct Params_OnThaw {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnThaw params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnGeometryCollectionDamaged(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnGeometryCollectionDamaged"));
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
void ABP_SpiderEggs_C::_CancelExplode0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C._CancelExplode"));
    struct Params__CancelExplode {
    }; // Size: 0x0
    Params__CancelExplode params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnGeometryCollectionSpawned(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection, bool bCompletelyBroken) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnGeometryCollectionSpawned"));
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
void ABP_SpiderEggs_C::_CallDispatcher0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C._CallDispatcher"));
    struct Params__CallDispatcher {
    }; // Size: 0x0
    Params__CallDispatcher params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnCaughtFire(UIncendioComponent* IncendioComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnCaughtFire"));
    struct Params_OnCaughtFire {
        UIncendioComponent* IncendioComponent; // 0x0
    }; // Size: 0x8
    Params_OnCaughtFire params{};
    params.IncendioComponent = (UIncendioComponent*)IncendioComponent;
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnFailedToLight() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnFailedToLight"));
    struct Params_OnFailedToLight {
    }; // Size: 0x0
    Params_OnFailedToLight params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnArrestoMomentumBegin(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnArrestoMomentumBegin"));
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
void ABP_SpiderEggs_C::OnArrestoMomentumEnd(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnArrestoMomentumEnd"));
    struct Params_OnArrestoMomentumEnd {
        AActor* Instigator; // 0x0
        UArrestoMomentumComponent* ArrestoMomentumComponent; // 0x8
    }; // Size: 0x10
    Params_OnArrestoMomentumEnd params{};
    params.Instigator = (AActor*)Instigator;
    params.ArrestoMomentumComponent = (UArrestoMomentumComponent*)ArrestoMomentumComponent;
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnHitBySpell"));
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
void ABP_SpiderEggs_C::_StartExplode0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C._StartExplode"));
    struct Params__StartExplode {
    }; // Size: 0x0
    Params__StartExplode params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::_StartFireLight0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C._StartFireLight"));
    struct Params__StartFireLight {
    }; // Size: 0x0
    Params__StartFireLight params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::_StopFireLight0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C._StopFireLight"));
    struct Params__StopFireLight {
    }; // Size: 0x0
    Params__StopFireLight params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::DoExplode() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.DoExplode"));
    struct Params_DoExplode {
    }; // Size: 0x0
    Params_DoExplode params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnStartPulse0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnStartPulse"));
    struct Params_OnStartPulse {
    }; // Size: 0x0
    Params_OnStartPulse params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::OnStopPulse0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.OnStopPulse"));
    struct Params_OnStopPulse {
    }; // Size: 0x0
    Params_OnStopPulse params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderEggs_C::ExecuteUbergraph_BP_SpiderEggs(int32_t EntryPoint) {}
void ABP_SpiderEggs_C::BurstDispatcher__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderEggs.BP_SpiderEggs_C.BurstDispatcher__DelegateSignature"));
    struct Params_BurstDispatcher__DelegateSignature {
    }; // Size: 0x0
    Params_BurstDispatcher__DelegateSignature params{};
    ProcessEvent(func, &params);
}
