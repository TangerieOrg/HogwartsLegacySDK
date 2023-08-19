#include "AActor.hpp"
#include "ACharacter.hpp"
#include "AController.hpp"
#include "ACreatureMountHandler.hpp"
#include "ACreatureMountTransitionActor.hpp"
#include "ACreature_Character.hpp"
#include "EHoverDroneControlMode\Type.hpp"
#include "EMountTypes.hpp"
#include "FClothMountTargets.hpp"
#include "FCreatureMountSpawnLocationHandler.hpp"
#include "FGameplayTagContainer.hpp"
#include "FMountCognitionSenseParams.hpp"
#include "FNoMountZoneAvoidanceParams.hpp"
#include "FSpawnSelectInfo.hpp"
#include "UClass.hpp"
#include "UCreature_MountLandingDynamics.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UMaterialInstance.hpp"
#include "UPhysicsAsset.hpp"
#include "USkeletalMesh.hpp"
void ACreatureMountHandler::OnPostCreatureMountSpawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureMountHandler.OnPostCreatureMountSpawn"));
    struct Params_OnPostCreatureMountSpawn {
    }; // Size: 0x0
    Params_OnPostCreatureMountSpawn params{};
    ProcessEvent(func, &params);
}
ACreatureMountHandler* ACreatureMountHandler::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureMountHandler");
    return (ACreatureMountHandler*)res;
}
bool ACreatureMountHandler::ToggleCreatureMountCapsule(ACreature_Character* InCreatureCharacter, FName& InName, bool bInEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureMountHandler.ToggleCreatureMountCapsule"));
    struct Params_ToggleCreatureMountCapsule {
        ACreature_Character* InCreatureCharacter; // 0x0
        FName InName; // 0x8
        bool bInEnabled; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_ToggleCreatureMountCapsule params{};
    params.InCreatureCharacter = (ACreature_Character*)InCreatureCharacter;
    params.InName = (FName)InName;
    params.bInEnabled = (bool)bInEnabled;
    ProcessEvent(func, &params);
    InName = params.InName;
    return (bool)params.ReturnValue;
}
void ACreatureMountHandler::OnHoverDroneControlModeChanged(EHoverDroneControlMode::Type NewMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureMountHandler.OnHoverDroneControlModeChanged"));
    struct Params_OnHoverDroneControlModeChanged {
        EHoverDroneControlMode::Type NewMode; // 0x0
    }; // Size: 0x1
    Params_OnHoverDroneControlModeChanged params{};
    params.NewMode = (EHoverDroneControlMode::Type)NewMode;
    ProcessEvent(func, &params);
}
void ACreatureMountHandler::OnPostDismountCreature() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureMountHandler.OnPostDismountCreature"));
    struct Params_OnPostDismountCreature {
    }; // Size: 0x0
    Params_OnPostDismountCreature params{};
    ProcessEvent(func, &params);
}
void ACreatureMountHandler::PlayerPossessCreature() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureMountHandler.PlayerPossessCreature"));
    struct Params_PlayerPossessCreature {
    }; // Size: 0x0
    Params_PlayerPossessCreature params{};
    ProcessEvent(func, &params);
}
void ACreatureMountHandler::SpawnAndMountCreature(ACharacter* InRiderCharacter, bool bInUseTransition, bool bInInFlight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureMountHandler.SpawnAndMountCreature"));
    struct Params_SpawnAndMountCreature {
        ACharacter* InRiderCharacter; // 0x0
        bool bInUseTransition; // 0x8
        bool bInInFlight; // 0x9
    }; // Size: 0xa
    Params_SpawnAndMountCreature params{};
    params.InRiderCharacter = (ACharacter*)InRiderCharacter;
    params.bInUseTransition = (bool)bInUseTransition;
    params.bInInFlight = (bool)bInInFlight;
    ProcessEvent(func, &params);
}
void ACreatureMountHandler::PlayerPossessRider() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureMountHandler.PlayerPossessRider"));
    struct Params_PlayerPossessRider {
    }; // Size: 0x0
    Params_PlayerPossessRider params{};
    ProcessEvent(func, &params);
}
void ACreatureMountHandler::MountExistingCreature(ACharacter* InRiderCharacter, ACreature_Character* InCreatureCharacter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureMountHandler.MountExistingCreature"));
    struct Params_MountExistingCreature {
        ACharacter* InRiderCharacter; // 0x0
        ACreature_Character* InCreatureCharacter; // 0x8
    }; // Size: 0x10
    Params_MountExistingCreature params{};
    params.InRiderCharacter = (ACharacter*)InRiderCharacter;
    params.InCreatureCharacter = (ACreature_Character*)InCreatureCharacter;
    ProcessEvent(func, &params);
}
bool ACreatureMountHandler::IsMountType(EMountTypes InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureMountHandler.IsMountType"));
    struct Params_IsMountType {
        EMountTypes InType; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsMountType params{};
    params.InType = (EMountTypes)InType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ACreatureMountHandler::DismountCreature(bool bInUseTransition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureMountHandler.DismountCreature"));
    struct Params_DismountCreature {
        bool bInUseTransition; // 0x0
    }; // Size: 0x1
    Params_DismountCreature params{};
    params.bInUseTransition = (bool)bInUseTransition;
    ProcessEvent(func, &params);
}
