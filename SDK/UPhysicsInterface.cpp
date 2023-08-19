#include "AActor.hpp"
#include "ASpellTool.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UInterface.hpp"
#include "UPhysicsInterface.hpp"
UPhysicsInterface* UPhysicsInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhysicsInterface");
    return (UPhysicsInterface*)res;
}
void UPhysicsInterface::OnWingardiumFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.OnWingardiumFailed"));
    struct Params_OnWingardiumFailed {
    }; // Size: 0x0
    Params_OnWingardiumFailed params{};
    ProcessEvent(func, &params);
}
bool UPhysicsInterface::WingardiumStart(ASpellTool* SpellTool, AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.WingardiumStart"));
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
void UPhysicsInterface::OnFlipendoThrow(ASpellTool* SpellTool, FVector ThrowDirection, FVector ThrowVelocity, FVector AngularVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.OnFlipendoThrow"));
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
void UPhysicsInterface::OnWingardiumGhostStart(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.OnWingardiumGhostStart"));
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
void UPhysicsInterface::OnWingardiumEnd(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.OnWingardiumEnd"));
    struct Params_OnWingardiumEnd {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnWingardiumEnd params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void UPhysicsInterface::OnLeviosoFailed(bool InitiatedByPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.OnLeviosoFailed"));
    struct Params_OnLeviosoFailed {
        bool InitiatedByPlayer; // 0x0
    }; // Size: 0x1
    Params_OnLeviosoFailed params{};
    params.InitiatedByPlayer = (bool)InitiatedByPlayer;
    ProcessEvent(func, &params);
}
void UPhysicsInterface::OnLeviosoEnd(AActor* Instigator, bool InitiatedByPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.OnLeviosoEnd"));
    struct Params_OnLeviosoEnd {
        AActor* Instigator; // 0x0
        bool InitiatedByPlayer; // 0x8
    }; // Size: 0x9
    Params_OnLeviosoEnd params{};
    params.Instigator = (AActor*)Instigator;
    params.InitiatedByPlayer = (bool)InitiatedByPlayer;
    ProcessEvent(func, &params);
}
void UPhysicsInterface::OnFlipendoFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.OnFlipendoFailed"));
    struct Params_OnFlipendoFailed {
    }; // Size: 0x0
    Params_OnFlipendoFailed params{};
    ProcessEvent(func, &params);
}
void UPhysicsInterface::OnExpulsoThrow(FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.OnExpulsoThrow"));
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
void UPhysicsInterface::OnDepulsoThrow(ASpellTool* SpellTool, FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.OnDepulsoThrow"));
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
bool UPhysicsInterface::DisallowDescendo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.DisallowDescendo"));
    struct Params_DisallowDescendo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowDescendo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhysicsInterface::OnDepulsoFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.OnDepulsoFailed"));
    struct Params_OnDepulsoFailed {
    }; // Size: 0x0
    Params_OnDepulsoFailed params{};
    ProcessEvent(func, &params);
}
void UPhysicsInterface::OnAccioThrow(ASpellTool* SpellTool, AActor* Instigator, FVector ThrowVelocity, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.OnAccioThrow"));
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
void UPhysicsInterface::OnAccioFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.OnAccioFailed"));
    struct Params_OnAccioFailed {
    }; // Size: 0x0
    Params_OnAccioFailed params{};
    ProcessEvent(func, &params);
}
bool UPhysicsInterface::DisallowAccio() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.DisallowAccio"));
    struct Params_DisallowAccio {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowAccio params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhysicsInterface::OnAccioEnd(AActor* Instigator, bool TransitioningToWingardium) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.OnAccioEnd"));
    struct Params_OnAccioEnd {
        AActor* Instigator; // 0x0
        bool TransitioningToWingardium; // 0x8
    }; // Size: 0x9
    Params_OnAccioEnd params{};
    params.Instigator = (AActor*)Instigator;
    params.TransitioningToWingardium = (bool)TransitioningToWingardium;
    ProcessEvent(func, &params);
}
bool UPhysicsInterface::LeviosoStart(AActor* Instigator, FVector Location, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.LeviosoStart"));
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
bool UPhysicsInterface::LeviosoChargedStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location, FVector Velocity, bool InitiatedByPlayer, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.LeviosoChargedStart"));
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
bool UPhysicsInterface::AccioStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.AccioStart"));
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
bool UPhysicsInterface::DisallowLevioso() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.DisallowLevioso"));
    struct Params_DisallowLevioso {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowLevioso params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhysicsInterface::FlipendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.FlipendoStart"));
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
bool UPhysicsInterface::ExpulsoStart(AActor* Instigator, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.ExpulsoStart"));
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
bool UPhysicsInterface::DisallowWingardium() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.DisallowWingardium"));
    struct Params_DisallowWingardium {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowWingardium params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhysicsInterface::DisallowFlipendo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.DisallowFlipendo"));
    struct Params_DisallowFlipendo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowFlipendo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhysicsInterface::DisallowDepulso() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.DisallowDepulso"));
    struct Params_DisallowDepulso {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowDepulso params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhysicsInterface::DescendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.DescendoStart"));
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
bool UPhysicsInterface::DepulsoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsInterface.DepulsoStart"));
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
