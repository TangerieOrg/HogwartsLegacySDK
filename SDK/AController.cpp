#include "AActor.hpp"
#include "ACharacter.hpp"
#include "AController.hpp"
#include "APawn.hpp"
#include "APlayerController.hpp"
#include "APlayerState.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UDamageType.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
void AController::ReceiveUnPossess(APawn* UnpossessedPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.ReceiveUnPossess"));
    struct Params_ReceiveUnPossess {
        APawn* UnpossessedPawn; // 0x0
    }; // Size: 0x8
    Params_ReceiveUnPossess params{};
    params.UnpossessedPawn = (APawn*)UnpossessedPawn;
    ProcessEvent(func, &params);
}
AController* AController::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Controller");
    return (AController*)res;
}
void AController::UnPossess() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.UnPossess"));
    struct Params_UnPossess {
    }; // Size: 0x0
    Params_UnPossess params{};
    ProcessEvent(func, &params);
}
void AController::SetInitialLocationAndRotation(FVector& NewLocation, FRotator& NewRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.SetInitialLocationAndRotation"));
    struct Params_SetInitialLocationAndRotation {
        FVector NewLocation; // 0x0
        FRotator NewRotation; // 0xc
    }; // Size: 0x18
    Params_SetInitialLocationAndRotation params{};
    params.NewLocation = (FVector)NewLocation;
    params.NewRotation = (FRotator)NewRotation;
    ProcessEvent(func, &params);
    NewLocation = params.NewLocation;
    NewRotation = params.NewRotation;
}
void AController::StopMovement() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.StopMovement"));
    struct Params_StopMovement {
    }; // Size: 0x0
    Params_StopMovement params{};
    ProcessEvent(func, &params);
}
void AController::SetIgnoreMoveInput(bool bNewMoveInput) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.SetIgnoreMoveInput"));
    struct Params_SetIgnoreMoveInput {
        bool bNewMoveInput; // 0x0
    }; // Size: 0x1
    Params_SetIgnoreMoveInput params{};
    params.bNewMoveInput = (bool)bNewMoveInput;
    ProcessEvent(func, &params);
}
void AController::ResetIgnoreMoveInput() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.ResetIgnoreMoveInput"));
    struct Params_ResetIgnoreMoveInput {
    }; // Size: 0x0
    Params_ResetIgnoreMoveInput params{};
    ProcessEvent(func, &params);
}
void AController::SetIgnoreLookInput(bool bNewLookInput) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.SetIgnoreLookInput"));
    struct Params_SetIgnoreLookInput {
        bool bNewLookInput; // 0x0
    }; // Size: 0x1
    Params_SetIgnoreLookInput params{};
    params.bNewLookInput = (bool)bNewLookInput;
    ProcessEvent(func, &params);
}
void AController::SetControlRotation(FRotator& NewRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.SetControlRotation"));
    struct Params_SetControlRotation {
        FRotator NewRotation; // 0x0
    }; // Size: 0xc
    Params_SetControlRotation params{};
    params.NewRotation = (FRotator)NewRotation;
    ProcessEvent(func, &params);
    NewRotation = params.NewRotation;
}
void AController::ResetIgnoreLookInput() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.ResetIgnoreLookInput"));
    struct Params_ResetIgnoreLookInput {
    }; // Size: 0x0
    Params_ResetIgnoreLookInput params{};
    ProcessEvent(func, &params);
}
void AController::ResetIgnoreInputFlags() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.ResetIgnoreInputFlags"));
    struct Params_ResetIgnoreInputFlags {
    }; // Size: 0x0
    Params_ResetIgnoreInputFlags params{};
    ProcessEvent(func, &params);
}
bool AController::IsPlayerController() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.IsPlayerController"));
    struct Params_IsPlayerController {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayerController params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AController::ReceivePossess(APawn* PossessedPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.ReceivePossess"));
    struct Params_ReceivePossess {
        APawn* PossessedPawn; // 0x0
    }; // Size: 0x8
    Params_ReceivePossess params{};
    params.PossessedPawn = (APawn*)PossessedPawn;
    ProcessEvent(func, &params);
}
FRotator AController::GetDesiredRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.GetDesiredRotation"));
    struct Params_GetDesiredRotation {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetDesiredRotation params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
void AController::ReceiveInstigatedAnyDamage(float Damage, UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.ReceiveInstigatedAnyDamage"));
    struct Params_ReceiveInstigatedAnyDamage {
        float Damage; // 0x0
        char pad_4[0x4];
        UDamageType* DamageType; // 0x8
        AActor* DamagedActor; // 0x10
        AActor* DamageCauser; // 0x18
    }; // Size: 0x20
    Params_ReceiveInstigatedAnyDamage params{};
    params.Damage = (float)Damage;
    params.DamageType = (UDamageType*)DamageType;
    params.DamagedActor = (AActor*)DamagedActor;
    params.DamageCauser = (AActor*)DamageCauser;
    ProcessEvent(func, &params);
}
void AController::Possess(APawn* InPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.Possess"));
    struct Params_Possess {
        APawn* InPawn; // 0x0
    }; // Size: 0x8
    Params_Possess params{};
    params.InPawn = (APawn*)InPawn;
    ProcessEvent(func, &params);
}
APawn* AController::K2_GetPawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.K2_GetPawn"));
    struct Params_K2_GetPawn {
        APawn* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_K2_GetPawn params{};
    ProcessEvent(func, &params);
    return (APawn*)params.ReturnValue;
}
void AController::OnRep_PlayerState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.OnRep_PlayerState"));
    struct Params_OnRep_PlayerState {
    }; // Size: 0x0
    Params_OnRep_PlayerState params{};
    ProcessEvent(func, &params);
}
void AController::OnRep_Pawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.OnRep_Pawn"));
    struct Params_OnRep_Pawn {
    }; // Size: 0x0
    Params_OnRep_Pawn params{};
    ProcessEvent(func, &params);
}
bool AController::LineOfSightTo(AActor* Other, FVector ViewPoint, bool bAlternateChecks) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.LineOfSightTo"));
    struct Params_LineOfSightTo {
        AActor* Other; // 0x0
        FVector ViewPoint; // 0x8
        bool bAlternateChecks; // 0x14
        bool ReturnValue; // 0x15
    }; // Size: 0x16
    Params_LineOfSightTo params{};
    params.Other = (AActor*)Other;
    params.ViewPoint = (FVector)ViewPoint;
    params.bAlternateChecks = (bool)bAlternateChecks;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AController::IsMoveInputIgnored() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.IsMoveInputIgnored"));
    struct Params_IsMoveInputIgnored {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMoveInputIgnored params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AController::IsLookInputIgnored() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.IsLookInputIgnored"));
    struct Params_IsLookInputIgnored {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLookInputIgnored params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AController::IsLocalPlayerController() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.IsLocalPlayerController"));
    struct Params_IsLocalPlayerController {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLocalPlayerController params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AController::IsLocalController() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.IsLocalController"));
    struct Params_IsLocalController {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLocalController params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AActor* AController::GetViewTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.GetViewTarget"));
    struct Params_GetViewTarget {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetViewTarget params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
FRotator AController::GetControlRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.GetControlRotation"));
    struct Params_GetControlRotation {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetControlRotation params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
void AController::ClientSetRotation(FRotator NewRotation, bool bResetCamera) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.ClientSetRotation"));
    struct Params_ClientSetRotation {
        FRotator NewRotation; // 0x0
        bool bResetCamera; // 0xc
    }; // Size: 0xd
    Params_ClientSetRotation params{};
    params.NewRotation = (FRotator)NewRotation;
    params.bResetCamera = (bool)bResetCamera;
    ProcessEvent(func, &params);
}
void AController::ClientSetLocation(FVector NewLocation, FRotator NewRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.ClientSetLocation"));
    struct Params_ClientSetLocation {
        FVector NewLocation; // 0x0
        FRotator NewRotation; // 0xc
    }; // Size: 0x18
    Params_ClientSetLocation params{};
    params.NewLocation = (FVector)NewLocation;
    params.NewRotation = (FRotator)NewRotation;
    ProcessEvent(func, &params);
}
APlayerController* AController::CastToPlayerController() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Controller.CastToPlayerController"));
    struct Params_CastToPlayerController {
        APlayerController* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_CastToPlayerController params{};
    ProcessEvent(func, &params);
    return (APlayerController*)params.ReturnValue;
}
