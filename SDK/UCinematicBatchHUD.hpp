#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class USceneRig;
class UAnimationComponent;
class USceneRigPlayer;
class APlayerCameraManager;
#pragma pack(push, 1)
class UCinematicBatchHUD : public UUserWidget {
public:
    USceneRig* SceneRig; // 0x268
    UAnimationComponent* CameraAnimationComponent; // 0x270
    static UCinematicBatchHUD* StaticClass();
    static void SetFixedFrameRate();
    static float GetCinematicBatchHUDSRLength(USceneRigPlayer* SceneRigPlayer, USceneRig* SceneRig, bool bInFrames);
    static UAnimationComponent* GetAnimationComponent(APlayerCameraManager* CameraManager);
    static float GetActiveSRCurrentFrame(USceneRigPlayer* SceneRigPlayer);
    static float GetActiveShotTotalFrames(UAnimationComponent* AnimationComponent);
    static FString GetActiveShotName(UAnimationComponent* AnimationComponent);
    static float GetActiveShotFrame(UAnimationComponent* AnimationComponent);
}; // Size: 0x278
#pragma pack(pop)
