#include "AActor.hpp"
#include "ACameraStackActor.hpp"
#include "ACameraStackTransitionController.hpp"
#include "APlayerController.hpp"
#include "FVector.hpp"
#include "UCameraStackSettings.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
ACameraStackTransitionController* ACameraStackTransitionController::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackTransitionController");
    return (ACameraStackTransitionController*)res;
}
void ACameraStackTransitionController::TransitionToCameraAndTargetLocation(AActor* InCameraActor, FVector InTargetLocation, float InTransitionDuration, float InDelay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackTransitionController.TransitionToCameraAndTargetLocation"));
    struct Params_TransitionToCameraAndTargetLocation {
        AActor* InCameraActor; // 0x0
        FVector InTargetLocation; // 0x8
        float InTransitionDuration; // 0x14
        float InDelay; // 0x18
    }; // Size: 0x1c
    Params_TransitionToCameraAndTargetLocation params{};
    params.InCameraActor = (AActor*)InCameraActor;
    params.InTargetLocation = (FVector)InTargetLocation;
    params.InTransitionDuration = (float)InTransitionDuration;
    params.InDelay = (float)InDelay;
    ProcessEvent(func, &params);
}
APlayerController* ACameraStackTransitionController::GetPlayerController() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackTransitionController.GetPlayerController"));
    struct Params_GetPlayerController {
        APlayerController* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPlayerController params{};
    ProcessEvent(func, &params);
    return (APlayerController*)params.ReturnValue;
}
void ACameraStackTransitionController::TransitionToCameraAndTargetActor(AActor* InCameraActor, AActor* InTargetLocationActor, float InTransitionDuration, float InDelay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackTransitionController.TransitionToCameraAndTargetActor"));
    struct Params_TransitionToCameraAndTargetActor {
        AActor* InCameraActor; // 0x0
        AActor* InTargetLocationActor; // 0x8
        float InTransitionDuration; // 0x10
        float InDelay; // 0x14
    }; // Size: 0x18
    Params_TransitionToCameraAndTargetActor params{};
    params.InCameraActor = (AActor*)InCameraActor;
    params.InTargetLocationActor = (AActor*)InTargetLocationActor;
    params.InTransitionDuration = (float)InTransitionDuration;
    params.InDelay = (float)InDelay;
    ProcessEvent(func, &params);
}
void ACameraStackTransitionController::TransitionToCamera(AActor* InCameraActor, float InTransitionDuration, float InDelay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackTransitionController.TransitionToCamera"));
    struct Params_TransitionToCamera {
        AActor* InCameraActor; // 0x0
        float InTransitionDuration; // 0x8
        float InDelay; // 0xc
    }; // Size: 0x10
    Params_TransitionToCamera params{};
    params.InCameraActor = (AActor*)InCameraActor;
    params.InTransitionDuration = (float)InTransitionDuration;
    params.InDelay = (float)InDelay;
    ProcessEvent(func, &params);
}
