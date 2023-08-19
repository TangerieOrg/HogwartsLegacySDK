#include "AActor.hpp"
#include "ABP_PuzzleCube_Levioso_C.hpp"
#include "ASpellTool.hpp"
#include "AWorldObject.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UStaticMeshComponent.hpp"
bool ABP_PuzzleCube_Levioso_C::DepulsoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.DepulsoStart"));
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
bool ABP_PuzzleCube_Levioso_C::DisallowFlipendo() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.DisallowFlipendo"));
    struct Params_DisallowFlipendo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowFlipendo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ABP_PuzzleCube_Levioso_C* ABP_PuzzleCube_Levioso_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C");
    return (ABP_PuzzleCube_Levioso_C*)res;
}
bool ABP_PuzzleCube_Levioso_C::AccioStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.AccioStart"));
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
bool ABP_PuzzleCube_Levioso_C::DisallowDepulso() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.DisallowDepulso"));
    struct Params_DisallowDepulso {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowDepulso params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_PuzzleCube_Levioso_C::WingardiumStart(ASpellTool* SpellTool, AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.WingardiumStart"));
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
bool ABP_PuzzleCube_Levioso_C::DescendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.DescendoStart"));
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
bool ABP_PuzzleCube_Levioso_C::DisallowAccio() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.DisallowAccio"));
    struct Params_DisallowAccio {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowAccio params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_PuzzleCube_Levioso_C::DisallowDescendo() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.DisallowDescendo"));
    struct Params_DisallowDescendo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowDescendo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_PuzzleCube_Levioso_C::DisallowLevioso() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.DisallowLevioso"));
    struct Params_DisallowLevioso {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowLevioso params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_PuzzleCube_Levioso_C::DisallowWingardium() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.DisallowWingardium"));
    struct Params_DisallowWingardium {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowWingardium params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_PuzzleCube_Levioso_C::ExpulsoStart(AActor* Instigator, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.ExpulsoStart"));
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
bool ABP_PuzzleCube_Levioso_C::FlipendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.FlipendoStart"));
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
bool ABP_PuzzleCube_Levioso_C::LeviosoChargedStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location, FVector Velocity, bool InitiatedByPlayer, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.LeviosoChargedStart"));
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
bool ABP_PuzzleCube_Levioso_C::LeviosoStart(AActor* Instigator, FVector Location, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.LeviosoStart"));
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
void ABP_PuzzleCube_Levioso_C::OnAccioEnd(AActor* Instigator, bool TransitioningToWingardium) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnAccioEnd"));
    struct Params_OnAccioEnd {
        AActor* Instigator; // 0x0
        bool TransitioningToWingardium; // 0x8
    }; // Size: 0x9
    Params_OnAccioEnd params{};
    params.Instigator = (AActor*)Instigator;
    params.TransitioningToWingardium = (bool)TransitioningToWingardium;
    ProcessEvent(func, &params);
}
void ABP_PuzzleCube_Levioso_C::OnAccioThrow(ASpellTool* SpellTool, AActor* Instigator, FVector ThrowVelocity, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnAccioThrow"));
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
void ABP_PuzzleCube_Levioso_C::OnAccioFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnAccioFailed"));
    struct Params_OnAccioFailed {
    }; // Size: 0x0
    Params_OnAccioFailed params{};
    ProcessEvent(func, &params);
}
void ABP_PuzzleCube_Levioso_C::OnDepulsoFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnDepulsoFailed"));
    struct Params_OnDepulsoFailed {
    }; // Size: 0x0
    Params_OnDepulsoFailed params{};
    ProcessEvent(func, &params);
}
void ABP_PuzzleCube_Levioso_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_PuzzleCube_Levioso_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_PuzzleCube_Levioso_C::OnDepulsoThrow(ASpellTool* SpellTool, FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnDepulsoThrow"));
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
void ABP_PuzzleCube_Levioso_C::OnExpulsoThrow(FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnExpulsoThrow"));
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
void ABP_PuzzleCube_Levioso_C::OnFlipendoFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnFlipendoFailed"));
    struct Params_OnFlipendoFailed {
    }; // Size: 0x0
    Params_OnFlipendoFailed params{};
    ProcessEvent(func, &params);
}
void ABP_PuzzleCube_Levioso_C::OnFlipendoThrow(ASpellTool* SpellTool, FVector ThrowDirection, FVector ThrowVelocity, FVector AngularVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnFlipendoThrow"));
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
void ABP_PuzzleCube_Levioso_C::OnLeviosoFailed(bool InitiatedByPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnLeviosoFailed"));
    struct Params_OnLeviosoFailed {
        bool InitiatedByPlayer; // 0x0
    }; // Size: 0x1
    Params_OnLeviosoFailed params{};
    params.InitiatedByPlayer = (bool)InitiatedByPlayer;
    ProcessEvent(func, &params);
}
void ABP_PuzzleCube_Levioso_C::OnWingardiumEnd(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnWingardiumEnd"));
    struct Params_OnWingardiumEnd {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnWingardiumEnd params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_PuzzleCube_Levioso_C::OnWingardiumFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnWingardiumFailed"));
    struct Params_OnWingardiumFailed {
    }; // Size: 0x0
    Params_OnWingardiumFailed params{};
    ProcessEvent(func, &params);
}
void ABP_PuzzleCube_Levioso_C::OnWingardiumGhostStart(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnWingardiumGhostStart"));
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
void ABP_PuzzleCube_Levioso_C::OnLeviosoEnd(AActor* Instigator, bool InitiatedByPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_PuzzleCube_Levioso.BP_PuzzleCube_Levioso_C.OnLeviosoEnd"));
    struct Params_OnLeviosoEnd {
        AActor* Instigator; // 0x0
        bool InitiatedByPlayer; // 0x8
    }; // Size: 0x9
    Params_OnLeviosoEnd params{};
    params.Instigator = (AActor*)Instigator;
    params.InitiatedByPlayer = (bool)InitiatedByPlayer;
    ProcessEvent(func, &params);
}
void ABP_PuzzleCube_Levioso_C::ExecuteUbergraph_BP_PuzzleCube_Levioso(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
