#include "AActor.hpp"
#include "ABP_EggSackA_C.hpp"
#include "ASpellTool.hpp"
#include "ASpiderWeb_EggSack.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UCapsuleComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "UGeometryCollectionComponent.hpp"
#include "UIncendioComponent.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UNiagaraComponent.hpp"
#include "UObjectStateComponent.hpp"
#include "UParticleSystemComponent.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "URepairComponent.hpp"
#include "USpellToolRecord.hpp"
#include "UTargetComponent.hpp"
void ABP_EggSackA_C::SpawnDBObject() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.SpawnDBObject"));
    struct Params_SpawnDBObject {
    }; // Size: 0x0
    Params_SpawnDBObject params{};
    ProcessEvent(func, &params);
}
bool ABP_EggSackA_C::DepulsoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.DepulsoStart"));
    struct Params_DepulsoStart {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        FVector Location; // 0x10
        bool ReturnValue; // 0x1c
        bool CallFunc_Not_PreBool_ReturnValue; // 0x1d
        bool CallFunc_BooleanAND_ReturnValue; // 0x1e
    }; // Size: 0x1f
    Params_DepulsoStart params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.Location = (FVector)Location;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_EggSackA_C::OnAttemptToHeal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnAttemptToHeal"));
    struct Params_OnAttemptToHeal {
    }; // Size: 0x0
    Params_OnAttemptToHeal params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnLeviosoEnd(AActor* Instigator, bool InitiatedByPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnLeviosoEnd"));
    struct Params_OnLeviosoEnd {
        AActor* Instigator; // 0x0
        bool InitiatedByPlayer; // 0x8
    }; // Size: 0x9
    Params_OnLeviosoEnd params{};
    params.Instigator = (AActor*)Instigator;
    params.InitiatedByPlayer = (bool)InitiatedByPlayer;
    ProcessEvent(func, &params);
}
ABP_EggSackA_C* ABP_EggSackA_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C");
    return (ABP_EggSackA_C*)res;
}
bool ABP_EggSackA_C::Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.Destroyed"));
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
void ABP_EggSackA_C::OnGeometryCollectionSpawned(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection, bool bCompletelyBroken) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnGeometryCollectionSpawned"));
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
bool ABP_EggSackA_C::DisallowDepulso() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.DisallowDepulso"));
    struct Params_DisallowDepulso {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowDepulso params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_EggSackA_C::OnGeometryCollectionDamaged(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnGeometryCollectionDamaged"));
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
bool ABP_EggSackA_C::StartFreeze(AActor* Instigator, float Amount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.StartFreeze"));
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
void ABP_EggSackA_C::OnAttemptToSetOnFire(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnAttemptToSetOnFire"));
    struct Params_OnAttemptToSetOnFire {
        FVector Location; // 0x0
    }; // Size: 0xc
    Params_OnAttemptToSetOnFire params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
bool ABP_EggSackA_C::DisallowAccio() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.DisallowAccio"));
    struct Params_DisallowAccio {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowAccio params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_EggSackA_C::DecreaseFire(float decreaseAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.DecreaseFire"));
    struct Params_DecreaseFire {
        float decreaseAmount; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_DecreaseFire params{};
    params.decreaseAmount = (float)decreaseAmount;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_EggSackA_C::AccioStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.AccioStart"));
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
bool ABP_EggSackA_C::IsPointOnFire(FVector Point, bool& OnFire) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.IsPointOnFire"));
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
bool ABP_EggSackA_C::DescendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.DescendoStart"));
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
void ABP_EggSackA_C::OnWingardiumGhostStart(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnWingardiumGhostStart"));
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
bool ABP_EggSackA_C::DisallowDescendo() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.DisallowDescendo"));
    struct Params_DisallowDescendo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowDescendo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_EggSackA_C::DisallowFlipendo() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.DisallowFlipendo"));
    struct Params_DisallowFlipendo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowFlipendo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_EggSackA_C::OnSpellTooWeak(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnSpellTooWeak"));
    struct Params_OnSpellTooWeak {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellTooWeak params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
bool ABP_EggSackA_C::DisallowLevioso() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.DisallowLevioso"));
    struct Params_DisallowLevioso {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowLevioso params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_EggSackA_C::DisallowWingardium() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.DisallowWingardium"));
    struct Params_DisallowWingardium {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowWingardium params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_EggSackA_C::OnLeviosoFailed(bool InitiatedByPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnLeviosoFailed"));
    struct Params_OnLeviosoFailed {
        bool InitiatedByPlayer; // 0x0
    }; // Size: 0x1
    Params_OnLeviosoFailed params{};
    params.InitiatedByPlayer = (bool)InitiatedByPlayer;
    ProcessEvent(func, &params);
}
bool ABP_EggSackA_C::ExpulsoStart(AActor* Instigator, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.ExpulsoStart"));
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
bool ABP_EggSackA_C::NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.NearDeathKneeling"));
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
bool ABP_EggSackA_C::FlipendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.FlipendoStart"));
    struct Params_FlipendoStart {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        FVector Location; // 0x10
        bool ReturnValue; // 0x1c
        bool CallFunc_Not_PreBool_ReturnValue; // 0x1d
        bool CallFunc_BooleanAND_ReturnValue; // 0x1e
    }; // Size: 0x1f
    Params_FlipendoStart params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.Location = (FVector)Location;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_EggSackA_C::LeviosoChargedStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location, FVector Velocity, bool InitiatedByPlayer, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.LeviosoChargedStart"));
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
        bool CallFunc_Not_PreBool_ReturnValue; // 0x6d
        bool CallFunc_BooleanAND_ReturnValue; // 0x6e
    }; // Size: 0x6f
    Params_LeviosoChargedStart params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.Location = (FVector)Location;
    params.Velocity = (FVector)Velocity;
    params.InitiatedByPlayer = (bool)InitiatedByPlayer;
    params.Impact = (FGameplayTagContainer)Impact;
    params.DataAssets = (TArray<UInteractionArchitectAsset*>)DataAssets;
    params.ImpactDirection = (FVector)ImpactDirection;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    ImpactDirection = params.ImpactDirection;
    DataAssets = params.DataAssets;
    return (bool)params.ReturnValue;
}
void ABP_EggSackA_C::OnHealed(float healAmount, UPrimitiveComponent* PrimComp) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnHealed"));
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
bool ABP_EggSackA_C::LeviosoStart(AActor* Instigator, FVector Location, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.LeviosoStart"));
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
bool ABP_EggSackA_C::WingardiumStart(ASpellTool* SpellTool, AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.WingardiumStart"));
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
bool ABP_EggSackA_C::IncreaseFire(float increaseAmount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.IncreaseFire"));
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
void ABP_EggSackA_C::OnDepulsoFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnDepulsoFailed"));
    struct Params_OnDepulsoFailed {
    }; // Size: 0x0
    Params_OnDepulsoFailed params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnAffectedBySpell"));
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
void ABP_EggSackA_C::OnFireExtinguished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnFireExtinguished"));
    struct Params_OnFireExtinguished {
    }; // Size: 0x0
    Params_OnFireExtinguished params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnFlipendoThrow(ASpellTool* SpellTool, FVector ThrowDirection, FVector ThrowVelocity, FVector AngularVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnFlipendoThrow"));
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
bool ABP_EggSackA_C::StartFire(float Amount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.StartFire"));
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
void ABP_EggSackA_C::BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature"));
    struct Params_BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature {
        UPrimitiveComponent* HitComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        FVector NormalImpulse; // 0x18
        FHitResult Hit; // 0x24
    }; // Size: 0xac
    Params_BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature params{};
    params.HitComponent = (UPrimitiveComponent*)HitComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
bool ABP_EggSackA_C::Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.Damaged"));
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
void ABP_EggSackA_C::OnWingardiumFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnWingardiumFailed"));
    struct Params_OnWingardiumFailed {
    }; // Size: 0x0
    Params_OnWingardiumFailed params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnCaughtFire(UIncendioComponent* IncendioComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnCaughtFire"));
    struct Params_OnCaughtFire {
        UIncendioComponent* IncendioComponent; // 0x0
    }; // Size: 0x8
    Params_OnCaughtFire params{};
    params.IncendioComponent = (UIncendioComponent*)IncendioComponent;
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnAttemptToFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnAttemptToFreeze"));
    struct Params_OnAttemptToFreeze {
    }; // Size: 0x0
    Params_OnAttemptToFreeze params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnSpellEffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnSpellEffective"));
    struct Params_OnSpellEffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellEffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnFailedToFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnFailedToFreeze"));
    struct Params_OnFailedToFreeze {
    }; // Size: 0x0
    Params_OnFailedToFreeze params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnAccioFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnAccioFailed"));
    struct Params_OnAccioFailed {
    }; // Size: 0x0
    Params_OnAccioFailed params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnAccioThrow(ASpellTool* SpellTool, AActor* Instigator, FVector ThrowVelocity, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnAccioThrow"));
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
void ABP_EggSackA_C::OnDepulsoThrow(ASpellTool* SpellTool, FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnDepulsoThrow"));
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
void ABP_EggSackA_C::OnFailedToBeDamaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnFailedToBeDamaged"));
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
void ABP_EggSackA_C::OnExpulsoThrow(FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnExpulsoThrow"));
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
void ABP_EggSackA_C::OnFailedToLight() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnFailedToLight"));
    struct Params_OnFailedToLight {
    }; // Size: 0x0
    Params_OnFailedToLight params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnFlipendoFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnFlipendoFailed"));
    struct Params_OnFlipendoFailed {
    }; // Size: 0x0
    Params_OnFlipendoFailed params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::Break__DelegateSignature(float Delay, bool bExplode) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.Break__DelegateSignature"));
    struct Params_Break__DelegateSignature {
        float Delay; // 0x0
        bool bExplode; // 0x4
    }; // Size: 0x5
    Params_Break__DelegateSignature params{};
    params.Delay = (float)Delay;
    params.bExplode = (bool)bExplode;
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnAffectedBySpellEnd"));
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
void ABP_EggSackA_C::OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnOverlappedBySpell"));
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
void ABP_EggSackA_C::OnSpellIneffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnSpellIneffective"));
    struct Params_OnSpellIneffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellIneffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnCompletelyCharred() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnCompletelyCharred"));
    struct Params_OnCompletelyCharred {
    }; // Size: 0x0
    Params_OnCompletelyCharred params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnFailedToBeDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnFailedToBeDestroyed"));
    struct Params_OnFailedToBeDestroyed {
    }; // Size: 0x0
    Params_OnFailedToBeDestroyed params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnAttemptToRepair() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnAttemptToRepair"));
    struct Params_OnAttemptToRepair {
    }; // Size: 0x0
    Params_OnAttemptToRepair params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnBeginRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnBeginRepairing"));
    struct Params_OnBeginRepairing {
    }; // Size: 0x0
    Params_OnBeginRepairing params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnCriticalHealthReached() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnCriticalHealthReached"));
    struct Params_OnCriticalHealthReached {
    }; // Size: 0x0
    Params_OnCriticalHealthReached params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnDoneRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnDoneRepairing"));
    struct Params_OnDoneRepairing {
    }; // Size: 0x0
    Params_OnDoneRepairing params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnFailedToBeHealed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnFailedToBeHealed"));
    struct Params_OnFailedToBeHealed {
    }; // Size: 0x0
    Params_OnFailedToBeHealed params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnGeometryCollectionCompletelyBroken(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnGeometryCollectionCompletelyBroken"));
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
void ABP_EggSackA_C::SpawnEnemySpiders() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.SpawnEnemySpiders"));
    struct Params_SpawnEnemySpiders {
    }; // Size: 0x0
    Params_SpawnEnemySpiders params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::SpawnLoot() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.SpawnLoot"));
    struct Params_SpawnLoot {
    }; // Size: 0x0
    Params_SpawnLoot params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::ExplodeSack() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.ExplodeSack"));
    struct Params_ExplodeSack {
    }; // Size: 0x0
    Params_ExplodeSack params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnAccioEnd(AActor* Instigator, bool TransitioningToWingardium) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnAccioEnd"));
    struct Params_OnAccioEnd {
        AActor* Instigator; // 0x0
        bool TransitioningToWingardium; // 0x8
    }; // Size: 0x9
    Params_OnAccioEnd params{};
    params.Instigator = (AActor*)Instigator;
    params.TransitioningToWingardium = (bool)TransitioningToWingardium;
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnHitBySpell"));
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
    ImpactDirection = params.ImpactDirection;
    Hit = params.Hit;
}
void ABP_EggSackA_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::BreakEvent(float Delay, bool bExplode) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.BreakEvent"));
    struct Params_BreakEvent {
        float Delay; // 0x0
        bool bExplode; // 0x4
    }; // Size: 0x5
    Params_BreakEvent params{};
    params.Delay = (float)Delay;
    params.bExplode = (bool)bExplode;
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnWingardiumEnd(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnWingardiumEnd"));
    struct Params_OnWingardiumEnd {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnWingardiumEnd params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::AccioBreak() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.AccioBreak"));
    struct Params_AccioBreak {
    }; // Size: 0x0
    Params_AccioBreak params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::OnThaw(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.OnThaw"));
    struct Params_OnThaw {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnThaw params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::ExecuteUbergraph_BP_EggSackA(int32_t EntryPoint, UInteractionArchitectAsset* Temp_object_Variable, bool Temp_bool_Has_Been_Initd_Variable, ASpellTool* K2Node_Event_SpellTool_7, AActor* K2Node_Event_Instigator_16, FVector K2Node_Event_ThrowVelocity_3, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_5, FGameplayTagContainer K2Node_Event_Impact_6, ASpellTool* K2Node_Event_SpellTool_6, FVector K2Node_Event_ThrowVelocity_2, FVector K2Node_Event_Target_2, AActor* K2Node_Event_Instigator_15, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_4, FGameplayTagContainer K2Node_Event_Impact_5, FVector K2Node_Event_ThrowVelocity_1, FVector K2Node_Event_Target_1, AActor* K2Node_Event_Instigator_14, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_3, FGameplayTagContainer K2Node_Event_Impact_4, ASpellTool* K2Node_Event_SpellTool_5, FVector K2Node_Event_ThrowDirection, FVector K2Node_Event_ThrowVelocity, FVector K2Node_Event_AngularVelocity, FVector K2Node_Event_Target, AActor* K2Node_Event_Instigator_13, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_2, FGameplayTagContainer K2Node_Event_Impact_3, AActor* K2Node_Event_Instigator_12, bool K2Node_Event_InitiatedByPlayer_1, bool K2Node_Event_InitiatedByPlayer, ASpellTool* K2Node_Event_SpellTool_4, AActor* K2Node_Event_Instigator_11, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_1, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_10, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets, USpellToolRecord* K2Node_Event_SpellToolRecord_3, FName K2Node_Event_SpellType_3, FGameplayTagContainer K2Node_Event_Impact_2, FHitResult K2Node_Event_Hit_1, FVector K2Node_Event_ImpactDirection_1, ASpellTool* K2Node_Event_SpellTool_2, AActor* K2Node_Event_Instigator_9, USpellToolRecord* K2Node_Event_SpellToolRecord_2, FName K2Node_Event_SpellType_2, FGameplayTagContainer K2Node_Event_Impact_1, ASpellTool* K2Node_Event_SpellTool_1, AActor* K2Node_Event_Instigator_8, USpellToolRecord* K2Node_Event_SpellToolRecord_1, FName K2Node_Event_SpellType_1, FGameplayTagContainer K2Node_Event_Impact, FVector K2Node_Event_MunitionLocation, AActor* K2Node_Event_Instigator_7, AActor* K2Node_Event_Instigator_6, AActor* K2Node_Event_Instigator_5, FVector K2Node_Event_Location, UIncendioComponent* K2Node_Event_IncendioComponent, float K2Node_Event_damageAmount, FVector K2Node_Event_hitLocation_3, FVector K2Node_Event_hitDirection_3, UPrimitiveComponent* K2Node_Event_primComp_1, FGameplayTagContainer K2Node_Event_MunitionTagContainer, AActor* K2Node_Event_Instigator_4, FVector K2Node_Event_Velocity, URepairComponent* K2Node_Event_RepairComponent_2, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2, float K2Node_Event_impulseStr_2, float K2Node_Event_Radius_2, FVector K2Node_Event_hitLocation_2, FVector K2Node_Event_hitDirection_2, URepairComponent* K2Node_Event_RepairComponent_1, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1, float K2Node_Event_impulseStr_1, float K2Node_Event_Radius_1, FVector K2Node_Event_hitLocation_1, FVector K2Node_Event_hitDirection_1, URepairComponent* K2Node_Event_RepairComponent, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent, float K2Node_Event_impulseStr, float K2Node_Event_Radius, FVector K2Node_Event_hitLocation, FVector K2Node_Event_hitDirection, bool K2Node_Event_bCompletelyBroken, float K2Node_Event_healAmount, UPrimitiveComponent* K2Node_Event_primComp, bool Temp_bool_Has_Been_Initd_Variable_1, int32_t CallFunc_Array_Add_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable, TArray<UInteractionArchitectAsset*>& K2Node_MakeArray_Array, bool Temp_bool_IsClosed_Variable_1, FVector CallFunc_GetComponentBounds_Origin, FVector CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, FHitResult K2Node_ComponentBoundEvent_Hit, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, AActor* K2Node_Event_Instigator_3, bool K2Node_Event_TransitioningToWingardium, float K2Node_CustomEvent_Delay, bool K2Node_CustomEvent_bExplode, AActor* K2Node_Event_Instigator_2, ASpellTool* K2Node_Event_SpellTool, AActor* K2Node_Event_Instigator_1, USpellToolRecord* K2Node_Event_SpellToolRecord, FName K2Node_Event_SpellType, FHitResult K2Node_Event_Hit, FVector K2Node_Event_ImpactDirection, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, AActor* K2Node_Event_Instigator, UInteractionArchitectAsset* Temp_object_Variable_1, bool CallFunc_BooleanOR_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, bool Temp_bool_IsClosed_Variable_2, FVector CallFunc_GetComponentBounds_Origin_1, FVector CallFunc_GetComponentBounds_BoxExtent_1, float CallFunc_GetComponentBounds_SphereRadius_1, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, FTransform CallFunc_Conv_VectorToTransform_ReturnValue) {}
void ABP_EggSackA_C::ScaleInteraction__DelegateSignature(bool bStart, bool bScaleUp) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.ScaleInteraction__DelegateSignature"));
    struct Params_ScaleInteraction__DelegateSignature {
        bool bStart; // 0x0
        bool bScaleUp; // 0x1
    }; // Size: 0x2
    Params_ScaleInteraction__DelegateSignature params{};
    params.bStart = (bool)bStart;
    params.bScaleUp = (bool)bScaleUp;
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::WingardiumInteraction__DelegateSignature(bool bStart) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.WingardiumInteraction__DelegateSignature"));
    struct Params_WingardiumInteraction__DelegateSignature {
        bool bStart; // 0x0
    }; // Size: 0x1
    Params_WingardiumInteraction__DelegateSignature params{};
    params.bStart = (bool)bStart;
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::DescendoInteraction__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.DescendoInteraction__DelegateSignature"));
    struct Params_DescendoInteraction__DelegateSignature {
    }; // Size: 0x0
    Params_DescendoInteraction__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::AccioInteraction__DelegateSignature(bool bStarted, float Time) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.AccioInteraction__DelegateSignature"));
    struct Params_AccioInteraction__DelegateSignature {
        bool bStarted; // 0x0
        char pad_1[0x3];
        float Time; // 0x4
    }; // Size: 0x8
    Params_AccioInteraction__DelegateSignature params{};
    params.bStarted = (bool)bStarted;
    params.Time = (float)Time;
    ProcessEvent(func, &params);
}
void ABP_EggSackA_C::Wake__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_EggSackA.BP_EggSackA_C.Wake__DelegateSignature"));
    struct Params_Wake__DelegateSignature {
    }; // Size: 0x0
    Params_Wake__DelegateSignature params{};
    ProcessEvent(func, &params);
}
