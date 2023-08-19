#include "AActor.hpp"
#include "ABP_BreakableRockPileB_C.hpp"
#include "ABP_Breakable_Persistent_C.hpp"
#include "ACharacter.hpp"
#include "ASpellTool.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UGeometryCollectionComponent.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UOdcAuthoredObstacleSetupComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "URepairComponent.hpp"
ABP_BreakableRockPileB_C* ABP_BreakableRockPileB_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C");
    return (ABP_BreakableRockPileB_C*)res;
}
bool ABP_BreakableRockPileB_C::DescendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.DescendoStart"));
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
bool ABP_BreakableRockPileB_C::DisallowFlipendo() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.DisallowFlipendo"));
    struct Params_DisallowFlipendo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowFlipendo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_BreakableRockPileB_C::OnDoneRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnDoneRepairing"));
    struct Params_OnDoneRepairing {
    }; // Size: 0x0
    Params_OnDoneRepairing params{};
    ProcessEvent(func, &params);
}
bool ABP_BreakableRockPileB_C::DisallowDepulso() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.DisallowDepulso"));
    struct Params_DisallowDepulso {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowDepulso params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_BreakableRockPileB_C::OnFailedToBeDamaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnFailedToBeDamaged"));
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
bool ABP_BreakableRockPileB_C::Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.Destroyed"));
    struct Params_Destroyed {
        float DamageAmount; // 0x0
        char pad_4[0x4];
        AActor* Instigator; // 0x8
        FGameplayTagContainer MunitionTagContainer; // 0x10
        FVector Velocity; // 0x30
        bool ReturnValue; // 0x3c
        char pad_3d[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x40
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x4c
    }; // Size: 0x58
    Params_Destroyed params{};
    params.DamageAmount = (float)DamageAmount;
    params.Instigator = (AActor*)Instigator;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Velocity = (FVector)Velocity;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_BreakableRockPileB_C::DisallowDescendo() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.DisallowDescendo"));
    struct Params_DisallowDescendo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowDescendo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_BreakableRockPileB_C::OnAttemptToRepair() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnAttemptToRepair"));
    struct Params_OnAttemptToRepair {
    }; // Size: 0x0
    Params_OnAttemptToRepair params{};
    ProcessEvent(func, &params);
}
bool ABP_BreakableRockPileB_C::AccioStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.AccioStart"));
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
void ABP_BreakableRockPileB_C::OnWingardiumFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnWingardiumFailed"));
    struct Params_OnWingardiumFailed {
    }; // Size: 0x0
    Params_OnWingardiumFailed params{};
    ProcessEvent(func, &params);
}
void ABP_BreakableRockPileB_C::OnDepulsoThrow(ASpellTool* SpellTool, FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnDepulsoThrow"));
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
bool ABP_BreakableRockPileB_C::DepulsoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location, FHitResult NewLocalVar_0, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TArray<UInteractionArchitectAsset*>& K2Node_MakeArray_Array, bool CallFunc_DoDamage_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.DepulsoStart"));
    struct Params_DepulsoStart {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        FVector Location; // 0x10
        bool ReturnValue; // 0x1c
        char pad_1d[0x3];
        FHitResult NewLocalVar_0; // 0x20
        ACharacter* CallFunc_GetPlayerCharacter_ReturnValue; // 0xa8
        TArray<UInteractionArchitectAsset*> K2Node_MakeArray_Array; // 0xb0
        bool CallFunc_DoDamage_ReturnValue; // 0xc0
    }; // Size: 0xc1
    Params_DepulsoStart params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.Location = (FVector)Location;
    params.NewLocalVar_0 = (FHitResult)NewLocalVar_0;
    params.CallFunc_GetPlayerCharacter_ReturnValue = (ACharacter*)CallFunc_GetPlayerCharacter_ReturnValue;
    params.K2Node_MakeArray_Array = (TArray<UInteractionArchitectAsset*>)K2Node_MakeArray_Array;
    params.CallFunc_DoDamage_ReturnValue = (bool)CallFunc_DoDamage_ReturnValue;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    return (bool)params.ReturnValue;
}
void ABP_BreakableRockPileB_C::OnGeometryCollectionSpawned(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection, bool bCompletelyBroken) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnGeometryCollectionSpawned"));
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
bool ABP_BreakableRockPileB_C::DisallowAccio() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.DisallowAccio"));
    struct Params_DisallowAccio {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowAccio params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_BreakableRockPileB_C::DisallowLevioso() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.DisallowLevioso"));
    struct Params_DisallowLevioso {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowLevioso params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_BreakableRockPileB_C::DisallowWingardium() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.DisallowWingardium"));
    struct Params_DisallowWingardium {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowWingardium params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_BreakableRockPileB_C::OnCriticalHealthReached() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnCriticalHealthReached"));
    struct Params_OnCriticalHealthReached {
    }; // Size: 0x0
    Params_OnCriticalHealthReached params{};
    ProcessEvent(func, &params);
}
void ABP_BreakableRockPileB_C::OnAccioEnd(AActor* Instigator, bool TransitioningToWingardium) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnAccioEnd"));
    struct Params_OnAccioEnd {
        AActor* Instigator; // 0x0
        bool TransitioningToWingardium; // 0x8
    }; // Size: 0x9
    Params_OnAccioEnd params{};
    params.Instigator = (AActor*)Instigator;
    params.TransitioningToWingardium = (bool)TransitioningToWingardium;
    ProcessEvent(func, &params);
}
bool ABP_BreakableRockPileB_C::ExpulsoStart(AActor* Instigator, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.ExpulsoStart"));
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
bool ABP_BreakableRockPileB_C::FlipendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.FlipendoStart"));
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
bool ABP_BreakableRockPileB_C::LeviosoChargedStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location, FVector Velocity, bool InitiatedByPlayer, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.LeviosoChargedStart"));
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
bool ABP_BreakableRockPileB_C::LeviosoStart(AActor* Instigator, FVector Location, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.LeviosoStart"));
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
bool ABP_BreakableRockPileB_C::WingardiumStart(ASpellTool* SpellTool, AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.WingardiumStart"));
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
void ABP_BreakableRockPileB_C::OnFlipendoThrow(ASpellTool* SpellTool, FVector ThrowDirection, FVector ThrowVelocity, FVector AngularVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnFlipendoThrow"));
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
bool ABP_BreakableRockPileB_C::NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.NearDeathKneeling"));
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
bool ABP_BreakableRockPileB_C::Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.Damaged"));
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
void ABP_BreakableRockPileB_C::OnAccioFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnAccioFailed"));
    struct Params_OnAccioFailed {
    }; // Size: 0x0
    Params_OnAccioFailed params{};
    ProcessEvent(func, &params);
}
void ABP_BreakableRockPileB_C::OnAccioThrow(ASpellTool* SpellTool, AActor* Instigator, FVector ThrowVelocity, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnAccioThrow"));
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
void ABP_BreakableRockPileB_C::OnDepulsoFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnDepulsoFailed"));
    struct Params_OnDepulsoFailed {
    }; // Size: 0x0
    Params_OnDepulsoFailed params{};
    ProcessEvent(func, &params);
}
void ABP_BreakableRockPileB_C::OnExpulsoThrow(FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnExpulsoThrow"));
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
void ABP_BreakableRockPileB_C::OnFlipendoFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnFlipendoFailed"));
    struct Params_OnFlipendoFailed {
    }; // Size: 0x0
    Params_OnFlipendoFailed params{};
    ProcessEvent(func, &params);
}
void ABP_BreakableRockPileB_C::OnBeginRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnBeginRepairing"));
    struct Params_OnBeginRepairing {
    }; // Size: 0x0
    Params_OnBeginRepairing params{};
    ProcessEvent(func, &params);
}
void ABP_BreakableRockPileB_C::OnLeviosoEnd(AActor* Instigator, bool InitiatedByPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnLeviosoEnd"));
    struct Params_OnLeviosoEnd {
        AActor* Instigator; // 0x0
        bool InitiatedByPlayer; // 0x8
    }; // Size: 0x9
    Params_OnLeviosoEnd params{};
    params.Instigator = (AActor*)Instigator;
    params.InitiatedByPlayer = (bool)InitiatedByPlayer;
    ProcessEvent(func, &params);
}
void ABP_BreakableRockPileB_C::OnLeviosoFailed(bool InitiatedByPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnLeviosoFailed"));
    struct Params_OnLeviosoFailed {
        bool InitiatedByPlayer; // 0x0
    }; // Size: 0x1
    Params_OnLeviosoFailed params{};
    params.InitiatedByPlayer = (bool)InitiatedByPlayer;
    ProcessEvent(func, &params);
}
void ABP_BreakableRockPileB_C::OnWingardiumEnd(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnWingardiumEnd"));
    struct Params_OnWingardiumEnd {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnWingardiumEnd params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_BreakableRockPileB_C::OnWingardiumGhostStart(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnWingardiumGhostStart"));
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
void ABP_BreakableRockPileB_C::OnAttemptToHeal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnAttemptToHeal"));
    struct Params_OnAttemptToHeal {
    }; // Size: 0x0
    Params_OnAttemptToHeal params{};
    ProcessEvent(func, &params);
}
void ABP_BreakableRockPileB_C::OnFailedToBeDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnFailedToBeDestroyed"));
    struct Params_OnFailedToBeDestroyed {
    }; // Size: 0x0
    Params_OnFailedToBeDestroyed params{};
    ProcessEvent(func, &params);
}
void ABP_BreakableRockPileB_C::OnFailedToBeHealed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnFailedToBeHealed"));
    struct Params_OnFailedToBeHealed {
    }; // Size: 0x0
    Params_OnFailedToBeHealed params{};
    ProcessEvent(func, &params);
}
void ABP_BreakableRockPileB_C::OnGeometryCollectionCompletelyBroken(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnGeometryCollectionCompletelyBroken"));
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
void ABP_BreakableRockPileB_C::OnGeometryCollectionDamaged(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnGeometryCollectionDamaged"));
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
void ABP_BreakableRockPileB_C::OnHealed(float healAmount, UPrimitiveComponent* PrimComp) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.OnHealed"));
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
void ABP_BreakableRockPileB_C::ExecuteUbergraph_BP_BreakableRockPileB(int32_t EntryPoint, float K2Node_Event_healAmount, UPrimitiveComponent* K2Node_Event_primComp, AActor* K2Node_Event_Instigator_8, bool K2Node_Event_TransitioningToWingardium, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_7, FVector K2Node_Event_ThrowVelocity_3, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_4, FGameplayTagContainer K2Node_Event_Impact_3, ASpellTool* K2Node_Event_SpellTool_2, FVector K2Node_Event_ThrowVelocity_2, FVector K2Node_Event_Target_2, AActor* K2Node_Event_Instigator_6, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_3, FGameplayTagContainer K2Node_Event_Impact_2, FVector K2Node_Event_ThrowVelocity_1, FVector K2Node_Event_Target_1, AActor* K2Node_Event_Instigator_5, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_2, FGameplayTagContainer K2Node_Event_Impact_1, ASpellTool* K2Node_Event_SpellTool_1, FVector K2Node_Event_ThrowDirection, FVector K2Node_Event_ThrowVelocity, FVector K2Node_Event_AngularVelocity, FVector K2Node_Event_Target, AActor* K2Node_Event_Instigator_4, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_1, FGameplayTagContainer K2Node_Event_Impact, AActor* K2Node_Event_Instigator_3, bool K2Node_Event_InitiatedByPlayer_1, bool K2Node_Event_InitiatedByPlayer, AActor* K2Node_Event_Instigator_2, ASpellTool* K2Node_Event_SpellTool, AActor* K2Node_Event_Instigator_1, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets, float K2Node_Event_damageAmount, FVector K2Node_Event_hitLocation_3, FVector K2Node_Event_hitDirection_3, UPrimitiveComponent* K2Node_Event_primComp_1, FGameplayTagContainer K2Node_Event_MunitionTagContainer, AActor* K2Node_Event_Instigator, FVector K2Node_Event_Velocity, URepairComponent* K2Node_Event_RepairComponent_2, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2, float K2Node_Event_impulseStr_2, float K2Node_Event_Radius_2, FVector K2Node_Event_hitLocation_2, FVector K2Node_Event_hitDirection_2, URepairComponent* K2Node_Event_RepairComponent_1, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1, float K2Node_Event_impulseStr_1, float K2Node_Event_Radius_1, FVector K2Node_Event_hitLocation_1, FVector K2Node_Event_hitDirection_1, URepairComponent* K2Node_Event_RepairComponent, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent, float K2Node_Event_impulseStr, float K2Node_Event_Radius, FVector K2Node_Event_hitLocation, FVector K2Node_Event_hitDirection, bool K2Node_Event_bCompletelyBroken) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_BreakableRockPileB.BP_BreakableRockPileB_C.ExecuteUbergraph_BP_BreakableRockPileB"));
    struct Params_ExecuteUbergraph_BP_BreakableRockPileB {
        int32_t EntryPoint; // 0x0
        float K2Node_Event_healAmount; // 0x4
        UPrimitiveComponent* K2Node_Event_primComp; // 0x8
        AActor* K2Node_Event_Instigator_8; // 0x10
        bool K2Node_Event_TransitioningToWingardium; // 0x18
        char pad_19[0x7];
        ASpellTool* K2Node_Event_SpellTool_3; // 0x20
        AActor* K2Node_Event_Instigator_7; // 0x28
        FVector K2Node_Event_ThrowVelocity_3; // 0x30
        char pad_3c[0x4];
        TArray<UInteractionArchitectAsset*> K2Node_Event_DataAssets_4; // 0x40
        FGameplayTagContainer K2Node_Event_Impact_3; // 0x50
        ASpellTool* K2Node_Event_SpellTool_2; // 0x70
        FVector K2Node_Event_ThrowVelocity_2; // 0x78
        FVector K2Node_Event_Target_2; // 0x84
        AActor* K2Node_Event_Instigator_6; // 0x90
        TArray<UInteractionArchitectAsset*> K2Node_Event_DataAssets_3; // 0x98
        FGameplayTagContainer K2Node_Event_Impact_2; // 0xa8
        FVector K2Node_Event_ThrowVelocity_1; // 0xc8
        FVector K2Node_Event_Target_1; // 0xd4
        AActor* K2Node_Event_Instigator_5; // 0xe0
        TArray<UInteractionArchitectAsset*> K2Node_Event_DataAssets_2; // 0xe8
        FGameplayTagContainer K2Node_Event_Impact_1; // 0xf8
        ASpellTool* K2Node_Event_SpellTool_1; // 0x118
        FVector K2Node_Event_ThrowDirection; // 0x120
        FVector K2Node_Event_ThrowVelocity; // 0x12c
        FVector K2Node_Event_AngularVelocity; // 0x138
        FVector K2Node_Event_Target; // 0x144
        AActor* K2Node_Event_Instigator_4; // 0x150
        TArray<UInteractionArchitectAsset*> K2Node_Event_DataAssets_1; // 0x158
        FGameplayTagContainer K2Node_Event_Impact; // 0x168
        AActor* K2Node_Event_Instigator_3; // 0x188
        bool K2Node_Event_InitiatedByPlayer_1; // 0x190
        bool K2Node_Event_InitiatedByPlayer; // 0x191
        char pad_192[0x6];
        AActor* K2Node_Event_Instigator_2; // 0x198
        ASpellTool* K2Node_Event_SpellTool; // 0x1a0
        AActor* K2Node_Event_Instigator_1; // 0x1a8
        TArray<UInteractionArchitectAsset*> K2Node_Event_DataAssets; // 0x1b0
        float K2Node_Event_damageAmount; // 0x1c0
        FVector K2Node_Event_hitLocation_3; // 0x1c4
        FVector K2Node_Event_hitDirection_3; // 0x1d0
        char pad_1dc[0x4];
        UPrimitiveComponent* K2Node_Event_primComp_1; // 0x1e0
        FGameplayTagContainer K2Node_Event_MunitionTagContainer; // 0x1e8
        AActor* K2Node_Event_Instigator; // 0x208
        FVector K2Node_Event_Velocity; // 0x210
        char pad_21c[0x4];
        URepairComponent* K2Node_Event_RepairComponent_2; // 0x220
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2; // 0x228
        float K2Node_Event_impulseStr_2; // 0x230
        float K2Node_Event_Radius_2; // 0x234
        FVector K2Node_Event_hitLocation_2; // 0x238
        FVector K2Node_Event_hitDirection_2; // 0x244
        URepairComponent* K2Node_Event_RepairComponent_1; // 0x250
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1; // 0x258
        float K2Node_Event_impulseStr_1; // 0x260
        float K2Node_Event_Radius_1; // 0x264
        FVector K2Node_Event_hitLocation_1; // 0x268
        FVector K2Node_Event_hitDirection_1; // 0x274
        URepairComponent* K2Node_Event_RepairComponent; // 0x280
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent; // 0x288
        float K2Node_Event_impulseStr; // 0x290
        float K2Node_Event_Radius; // 0x294
        FVector K2Node_Event_hitLocation; // 0x298
        FVector K2Node_Event_hitDirection; // 0x2a4
        bool K2Node_Event_bCompletelyBroken; // 0x2b0
    }; // Size: 0x2b1
    Params_ExecuteUbergraph_BP_BreakableRockPileB params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_healAmount = (float)K2Node_Event_healAmount;
    params.K2Node_Event_primComp = (UPrimitiveComponent*)K2Node_Event_primComp;
    params.K2Node_Event_Instigator_8 = (AActor*)K2Node_Event_Instigator_8;
    params.K2Node_Event_TransitioningToWingardium = (bool)K2Node_Event_TransitioningToWingardium;
    params.K2Node_Event_SpellTool_3 = (ASpellTool*)K2Node_Event_SpellTool_3;
    params.K2Node_Event_Instigator_7 = (AActor*)K2Node_Event_Instigator_7;
    params.K2Node_Event_ThrowVelocity_3 = (FVector)K2Node_Event_ThrowVelocity_3;
    params.K2Node_Event_DataAssets_4 = (TArray<UInteractionArchitectAsset*>)K2Node_Event_DataAssets_4;
    params.K2Node_Event_Impact_3 = (FGameplayTagContainer)K2Node_Event_Impact_3;
    params.K2Node_Event_SpellTool_2 = (ASpellTool*)K2Node_Event_SpellTool_2;
    params.K2Node_Event_ThrowVelocity_2 = (FVector)K2Node_Event_ThrowVelocity_2;
    params.K2Node_Event_Target_2 = (FVector)K2Node_Event_Target_2;
    params.K2Node_Event_Instigator_6 = (AActor*)K2Node_Event_Instigator_6;
    params.K2Node_Event_DataAssets_3 = (TArray<UInteractionArchitectAsset*>)K2Node_Event_DataAssets_3;
    params.K2Node_Event_Impact_2 = (FGameplayTagContainer)K2Node_Event_Impact_2;
    params.K2Node_Event_ThrowVelocity_1 = (FVector)K2Node_Event_ThrowVelocity_1;
    params.K2Node_Event_Target_1 = (FVector)K2Node_Event_Target_1;
    params.K2Node_Event_Instigator_5 = (AActor*)K2Node_Event_Instigator_5;
    params.K2Node_Event_DataAssets_2 = (TArray<UInteractionArchitectAsset*>)K2Node_Event_DataAssets_2;
    params.K2Node_Event_Impact_1 = (FGameplayTagContainer)K2Node_Event_Impact_1;
    params.K2Node_Event_SpellTool_1 = (ASpellTool*)K2Node_Event_SpellTool_1;
    params.K2Node_Event_ThrowDirection = (FVector)K2Node_Event_ThrowDirection;
    params.K2Node_Event_ThrowVelocity = (FVector)K2Node_Event_ThrowVelocity;
    params.K2Node_Event_AngularVelocity = (FVector)K2Node_Event_AngularVelocity;
    params.K2Node_Event_Target = (FVector)K2Node_Event_Target;
    params.K2Node_Event_Instigator_4 = (AActor*)K2Node_Event_Instigator_4;
    params.K2Node_Event_DataAssets_1 = (TArray<UInteractionArchitectAsset*>)K2Node_Event_DataAssets_1;
    params.K2Node_Event_Impact = (FGameplayTagContainer)K2Node_Event_Impact;
    params.K2Node_Event_Instigator_3 = (AActor*)K2Node_Event_Instigator_3;
    params.K2Node_Event_InitiatedByPlayer_1 = (bool)K2Node_Event_InitiatedByPlayer_1;
    params.K2Node_Event_InitiatedByPlayer = (bool)K2Node_Event_InitiatedByPlayer;
    params.K2Node_Event_Instigator_2 = (AActor*)K2Node_Event_Instigator_2;
    params.K2Node_Event_SpellTool = (ASpellTool*)K2Node_Event_SpellTool;
    params.K2Node_Event_Instigator_1 = (AActor*)K2Node_Event_Instigator_1;
    params.K2Node_Event_DataAssets = (TArray<UInteractionArchitectAsset*>)K2Node_Event_DataAssets;
    params.K2Node_Event_damageAmount = (float)K2Node_Event_damageAmount;
    params.K2Node_Event_hitLocation_3 = (FVector)K2Node_Event_hitLocation_3;
    params.K2Node_Event_hitDirection_3 = (FVector)K2Node_Event_hitDirection_3;
    params.K2Node_Event_primComp_1 = (UPrimitiveComponent*)K2Node_Event_primComp_1;
    params.K2Node_Event_MunitionTagContainer = (FGameplayTagContainer)K2Node_Event_MunitionTagContainer;
    params.K2Node_Event_Instigator = (AActor*)K2Node_Event_Instigator;
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
    ProcessEvent(func, &params);
    K2Node_Event_DataAssets_4 = params.K2Node_Event_DataAssets_4;
    K2Node_Event_DataAssets_3 = params.K2Node_Event_DataAssets_3;
    K2Node_Event_DataAssets_2 = params.K2Node_Event_DataAssets_2;
    K2Node_Event_DataAssets_1 = params.K2Node_Event_DataAssets_1;
    K2Node_Event_DataAssets = params.K2Node_Event_DataAssets;
}
