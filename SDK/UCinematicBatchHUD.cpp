#include "APlayerCameraManager.hpp"
#include "UAnimationComponent.hpp"
#include "UCinematicBatchHUD.hpp"
#include "UFunction.hpp"
#include "USceneRig.hpp"
#include "USceneRigPlayer.hpp"
#include "UUserWidget.hpp"
UCinematicBatchHUD* UCinematicBatchHUD::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CinematicBatchHUD");
    return (UCinematicBatchHUD*)res;
}
float UCinematicBatchHUD::GetActiveSRCurrentFrame(USceneRigPlayer* SceneRigPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicBatchHUD.GetActiveSRCurrentFrame"));
    struct Params_GetActiveSRCurrentFrame {
        USceneRigPlayer* SceneRigPlayer; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetActiveSRCurrentFrame params{};
    params.SceneRigPlayer = (USceneRigPlayer*)SceneRigPlayer;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCinematicBatchHUD::SetFixedFrameRate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicBatchHUD.SetFixedFrameRate"));
    struct Params_SetFixedFrameRate {
    }; // Size: 0x0
    Params_SetFixedFrameRate params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UAnimationComponent* UCinematicBatchHUD::GetAnimationComponent(APlayerCameraManager* CameraManager) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicBatchHUD.GetAnimationComponent"));
    struct Params_GetAnimationComponent {
        APlayerCameraManager* CameraManager; // 0x0
        UAnimationComponent* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetAnimationComponent params{};
    params.CameraManager = (APlayerCameraManager*)CameraManager;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAnimationComponent*)params.ReturnValue;
}
float UCinematicBatchHUD::GetCinematicBatchHUDSRLength(USceneRigPlayer* SceneRigPlayer, USceneRig* SceneRig, bool bInFrames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicBatchHUD.GetCinematicBatchHUDSRLength"));
    struct Params_GetCinematicBatchHUDSRLength {
        USceneRigPlayer* SceneRigPlayer; // 0x0
        USceneRig* SceneRig; // 0x8
        bool bInFrames; // 0x10
        char pad_11[0x3];
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetCinematicBatchHUDSRLength params{};
    params.SceneRigPlayer = (USceneRigPlayer*)SceneRigPlayer;
    params.SceneRig = (USceneRig*)SceneRig;
    params.bInFrames = (bool)bInFrames;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UCinematicBatchHUD::GetActiveShotTotalFrames(UAnimationComponent* AnimationComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicBatchHUD.GetActiveShotTotalFrames"));
    struct Params_GetActiveShotTotalFrames {
        UAnimationComponent* AnimationComponent; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetActiveShotTotalFrames params{};
    params.AnimationComponent = (UAnimationComponent*)AnimationComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FString UCinematicBatchHUD::GetActiveShotName(UAnimationComponent* AnimationComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicBatchHUD.GetActiveShotName"));
    struct Params_GetActiveShotName {
        UAnimationComponent* AnimationComponent; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetActiveShotName params{};
    params.AnimationComponent = (UAnimationComponent*)AnimationComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
float UCinematicBatchHUD::GetActiveShotFrame(UAnimationComponent* AnimationComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CinematicBatchHUD.GetActiveShotFrame"));
    struct Params_GetActiveShotFrame {
        UAnimationComponent* AnimationComponent; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetActiveShotFrame params{};
    params.AnimationComponent = (UAnimationComponent*)AnimationComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
