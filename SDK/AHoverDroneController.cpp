#include "AActor.hpp"
#include "AHoverDroneController.hpp"
#include "APhoenixHoverDronePawn.hpp"
#include "APlayerController.hpp"
#include "EHoverDroneControlMode\Type.hpp"
#include "FHoverDroneConfigStruct.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInputComponent.hpp"
AHoverDroneController* AHoverDroneController::StaticClass() {
    static auto res = find_uobject("Class /Script/HoverDrone.HoverDroneController");
    return (AHoverDroneController*)res;
}
APhoenixHoverDronePawn* AHoverDroneController::GetDronePawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoverDrone.HoverDroneController.GetDronePawn"));
    struct Params_GetDronePawn {
        APhoenixHoverDronePawn* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDronePawn params{};
    ProcessEvent(func, &params);
    return (APhoenixHoverDronePawn*)params.ReturnValue;
}
EHoverDroneControlMode::Type AHoverDroneController::GetControlMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoverDrone.HoverDroneController.GetControlMode"));
    struct Params_GetControlMode {
        EHoverDroneControlMode::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetControlMode params{};
    ProcessEvent(func, &params);
    return (EHoverDroneControlMode::Type)params.ReturnValue;
}
void AHoverDroneController::SetPlayerBounds(FVector BoundsMin, FVector BoundsMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoverDrone.HoverDroneController.SetPlayerBounds"));
    struct Params_SetPlayerBounds {
        FVector BoundsMin; // 0x0
        FVector BoundsMax; // 0xc
    }; // Size: 0x18
    Params_SetPlayerBounds params{};
    params.BoundsMin = (FVector)BoundsMin;
    params.BoundsMax = (FVector)BoundsMax;
    ProcessEvent(func, &params);
}
void AHoverDroneController::ToggleHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoverDrone.HoverDroneController.ToggleHUD"));
    struct Params_ToggleHUD {
    }; // Size: 0x0
    Params_ToggleHUD params{};
    ProcessEvent(func, &params);
}
void AHoverDroneController::StartHoverDroneFromSystemMenu() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoverDrone.HoverDroneController.StartHoverDroneFromSystemMenu"));
    struct Params_StartHoverDroneFromSystemMenu {
    }; // Size: 0x0
    Params_StartHoverDroneFromSystemMenu params{};
    ProcessEvent(func, &params);
}
void AHoverDroneController::GetPlayerBounds(FVector& Max, FVector& Min) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoverDrone.HoverDroneController.GetPlayerBounds"));
    struct Params_GetPlayerBounds {
        FVector Max; // 0x0
        FVector Min; // 0xc
    }; // Size: 0x18
    Params_GetPlayerBounds params{};
    params.Max = (FVector)Max;
    params.Min = (FVector)Min;
    ProcessEvent(func, &params);
    Min = params.Min;
    Max = params.Max;
}
float AHoverDroneController::GetPawnAltitude() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoverDrone.HoverDroneController.GetPawnAltitude"));
    struct Params_GetPawnAltitude {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPawnAltitude params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FString AHoverDroneController::GetControlModeString() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoverDrone.HoverDroneController.GetControlModeString"));
    struct Params_GetControlModeString {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetControlModeString params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
