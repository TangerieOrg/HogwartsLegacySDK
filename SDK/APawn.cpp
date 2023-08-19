#include "AActor.hpp"
#include "AController.hpp"
#include "APawn.hpp"
#include "APlayerState.hpp"
#include "EAutoPossessAI.hpp"
#include "EAutoReceiveInput\Type.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UPawnMovementComponent.hpp"
APawn* APawn::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Pawn");
    return (APawn*)res;
}
void APawn::SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.SetCanAffectNavigationGeneration"));
    struct Params_SetCanAffectNavigationGeneration {
        bool bNewValue; // 0x0
        bool bForceUpdate; // 0x1
    }; // Size: 0x2
    Params_SetCanAffectNavigationGeneration params{};
    params.bNewValue = (bool)bNewValue;
    params.bForceUpdate = (bool)bForceUpdate;
    ProcessEvent(func, &params);
}
void APawn::SpawnDefaultController() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.SpawnDefaultController"));
    struct Params_SpawnDefaultController {
    }; // Size: 0x0
    Params_SpawnDefaultController params{};
    ProcessEvent(func, &params);
}
void APawn::ReceiveUnpossessed(AController* OldController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.ReceiveUnpossessed"));
    struct Params_ReceiveUnpossessed {
        AController* OldController; // 0x0
    }; // Size: 0x8
    Params_ReceiveUnpossessed params{};
    params.OldController = (AController*)OldController;
    ProcessEvent(func, &params);
}
void APawn::ReceivePossessed(AController* NewController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.ReceivePossessed"));
    struct Params_ReceivePossessed {
        AController* NewController; // 0x0
    }; // Size: 0x8
    Params_ReceivePossessed params{};
    params.NewController = (AController*)NewController;
    ProcessEvent(func, &params);
}
void APawn::OnRep_PlayerState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.OnRep_PlayerState"));
    struct Params_OnRep_PlayerState {
    }; // Size: 0x0
    Params_OnRep_PlayerState params{};
    ProcessEvent(func, &params);
}
void APawn::PawnMakeNoise(float Loudness, FVector NoiseLocation, bool bUseNoiseMakerLocation, AActor* NoiseMaker) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.PawnMakeNoise"));
    struct Params_PawnMakeNoise {
        float Loudness; // 0x0
        FVector NoiseLocation; // 0x4
        bool bUseNoiseMakerLocation; // 0x10
        char pad_11[0x7];
        AActor* NoiseMaker; // 0x18
    }; // Size: 0x20
    Params_PawnMakeNoise params{};
    params.Loudness = (float)Loudness;
    params.NoiseLocation = (FVector)NoiseLocation;
    params.bUseNoiseMakerLocation = (bool)bUseNoiseMakerLocation;
    params.NoiseMaker = (AActor*)NoiseMaker;
    ProcessEvent(func, &params);
}
void APawn::OnRep_Controller() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.OnRep_Controller"));
    struct Params_OnRep_Controller {
    }; // Size: 0x0
    Params_OnRep_Controller params{};
    ProcessEvent(func, &params);
}
void APawn::LaunchPawn(FVector LaunchVelocity, bool bXYOverride, bool bZOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.LaunchPawn"));
    struct Params_LaunchPawn {
        FVector LaunchVelocity; // 0x0
        bool bXYOverride; // 0xc
        bool bZOverride; // 0xd
    }; // Size: 0xe
    Params_LaunchPawn params{};
    params.LaunchVelocity = (FVector)LaunchVelocity;
    params.bXYOverride = (bool)bXYOverride;
    params.bZOverride = (bool)bZOverride;
    ProcessEvent(func, &params);
}
FVector APawn::K2_GetMovementInputVector() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.K2_GetMovementInputVector"));
    struct Params_K2_GetMovementInputVector {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_K2_GetMovementInputVector params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool APawn::IsLocallyControlled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.IsLocallyControlled"));
    struct Params_IsLocallyControlled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLocallyControlled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool APawn::IsPlayerControlled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.IsPlayerControlled"));
    struct Params_IsPlayerControlled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayerControlled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool APawn::IsPawnControlled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.IsPawnControlled"));
    struct Params_IsPawnControlled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPawnControlled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool APawn::IsMoveInputIgnored() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.IsMoveInputIgnored"));
    struct Params_IsMoveInputIgnored {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMoveInputIgnored params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool APawn::IsControlled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.IsControlled"));
    struct Params_IsControlled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsControlled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool APawn::IsBotControlled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.IsBotControlled"));
    struct Params_IsBotControlled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBotControlled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector APawn::GetPendingMovementInputVector() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.GetPendingMovementInputVector"));
    struct Params_GetPendingMovementInputVector {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetPendingMovementInputVector params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FRotator APawn::GetControlRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.GetControlRotation"));
    struct Params_GetControlRotation {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetControlRotation params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FVector APawn::GetNavAgentLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.GetNavAgentLocation"));
    struct Params_GetNavAgentLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetNavAgentLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void APawn::AddControllerRollInput(float Val) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.AddControllerRollInput"));
    struct Params_AddControllerRollInput {
        float Val; // 0x0
    }; // Size: 0x4
    Params_AddControllerRollInput params{};
    params.Val = (float)Val;
    ProcessEvent(func, &params);
}
UPawnMovementComponent* APawn::GetMovementComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.GetMovementComponent"));
    struct Params_GetMovementComponent {
        UPawnMovementComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMovementComponent params{};
    ProcessEvent(func, &params);
    return (UPawnMovementComponent*)params.ReturnValue;
}
AActor* APawn::GetMovementBaseActor(APawn* Pawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.GetMovementBaseActor"));
    struct Params_GetMovementBaseActor {
        APawn* Pawn; // 0x0
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetMovementBaseActor params{};
    params.Pawn = (APawn*)Pawn;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
FVector APawn::GetLastMovementInputVector() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.GetLastMovementInputVector"));
    struct Params_GetLastMovementInputVector {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetLastMovementInputVector params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void APawn::AddControllerYawInput(float Val) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.AddControllerYawInput"));
    struct Params_AddControllerYawInput {
        float Val; // 0x0
    }; // Size: 0x4
    Params_AddControllerYawInput params{};
    params.Val = (float)Val;
    ProcessEvent(func, &params);
}
AController* APawn::GetController() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.GetController"));
    struct Params_GetController {
        AController* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetController params{};
    ProcessEvent(func, &params);
    return (AController*)params.ReturnValue;
}
FRotator APawn::GetBaseAimRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.GetBaseAimRotation"));
    struct Params_GetBaseAimRotation {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetBaseAimRotation params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
void APawn::AddControllerPitchInput(float Val) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.AddControllerPitchInput"));
    struct Params_AddControllerPitchInput {
        float Val; // 0x0
    }; // Size: 0x4
    Params_AddControllerPitchInput params{};
    params.Val = (float)Val;
    ProcessEvent(func, &params);
}
void APawn::DetachFromControllerPendingDestroy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.DetachFromControllerPendingDestroy"));
    struct Params_DetachFromControllerPendingDestroy {
    }; // Size: 0x0
    Params_DetachFromControllerPendingDestroy params{};
    ProcessEvent(func, &params);
}
FVector APawn::ConsumeMovementInputVector() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.ConsumeMovementInputVector"));
    struct Params_ConsumeMovementInputVector {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_ConsumeMovementInputVector params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void APawn::AddMovementInput(FVector WorldDirection, float ScaleValue, bool bForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Pawn.AddMovementInput"));
    struct Params_AddMovementInput {
        FVector WorldDirection; // 0x0
        float ScaleValue; // 0xc
        bool bForce; // 0x10
    }; // Size: 0x11
    Params_AddMovementInput params{};
    params.WorldDirection = (FVector)WorldDirection;
    params.ScaleValue = (float)ScaleValue;
    params.bForce = (bool)bForce;
    ProcessEvent(func, &params);
}
