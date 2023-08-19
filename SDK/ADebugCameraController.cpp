#include "AActor.hpp"
#include "ADebugCameraController.hpp"
#include "APlayerController.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UDrawFrustumComponent.hpp"
#include "UFunction.hpp"
#include "UPlayer.hpp"
#include "UPrimitiveComponent.hpp"
void ADebugCameraController::ShowDebugSelectedInfo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DebugCameraController.ShowDebugSelectedInfo"));
    struct Params_ShowDebugSelectedInfo {
    }; // Size: 0x0
    Params_ShowDebugSelectedInfo params{};
    ProcessEvent(func, &params);
}
ADebugCameraController* ADebugCameraController::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DebugCameraController");
    return (ADebugCameraController*)res;
}
void ADebugCameraController::ReceiveOnActivate(APlayerController* OriginalPC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DebugCameraController.ReceiveOnActivate"));
    struct Params_ReceiveOnActivate {
        APlayerController* OriginalPC; // 0x0
    }; // Size: 0x8
    Params_ReceiveOnActivate params{};
    params.OriginalPC = (APlayerController*)OriginalPC;
    ProcessEvent(func, &params);
}
void ADebugCameraController::ReceiveOnDeactivate(APlayerController* RestoredPC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DebugCameraController.ReceiveOnDeactivate"));
    struct Params_ReceiveOnDeactivate {
        APlayerController* RestoredPC; // 0x0
    }; // Size: 0x8
    Params_ReceiveOnDeactivate params{};
    params.RestoredPC = (APlayerController*)RestoredPC;
    ProcessEvent(func, &params);
}
void ADebugCameraController::ToggleDisplay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DebugCameraController.ToggleDisplay"));
    struct Params_ToggleDisplay {
    }; // Size: 0x0
    Params_ToggleDisplay params{};
    ProcessEvent(func, &params);
}
void ADebugCameraController::SetPawnMovementSpeedScale(float NewSpeedScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DebugCameraController.SetPawnMovementSpeedScale"));
    struct Params_SetPawnMovementSpeedScale {
        float NewSpeedScale; // 0x0
    }; // Size: 0x4
    Params_SetPawnMovementSpeedScale params{};
    params.NewSpeedScale = (float)NewSpeedScale;
    ProcessEvent(func, &params);
}
AActor* ADebugCameraController::GetSelectedActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DebugCameraController.GetSelectedActor"));
    struct Params_GetSelectedActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSelectedActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void ADebugCameraController::ReceiveOnActorSelected(AActor* NewSelectedActor, FVector& SelectHitLocation, FVector& SelectHitNormal, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DebugCameraController.ReceiveOnActorSelected"));
    struct Params_ReceiveOnActorSelected {
        AActor* NewSelectedActor; // 0x0
        FVector SelectHitLocation; // 0x8
        FVector SelectHitNormal; // 0x14
        FHitResult Hit; // 0x20
    }; // Size: 0xa8
    Params_ReceiveOnActorSelected params{};
    params.NewSelectedActor = (AActor*)NewSelectedActor;
    params.SelectHitLocation = (FVector)SelectHitLocation;
    params.SelectHitNormal = (FVector)SelectHitNormal;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
    SelectHitLocation = params.SelectHitLocation;
    SelectHitNormal = params.SelectHitNormal;
}
