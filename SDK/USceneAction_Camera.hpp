#pragma once
#include <cstdint>
#include "EManagedCameraPriority.hpp"
#include "ESceneAction_CameraResetType.hpp"
#include "FCameraActionTransitionSettings.hpp"
#include "USceneRigActionBase.hpp"
class UActorProvider;
class UFloatProvider;
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_Camera : public USceneRigActionBase {
public:
    EManagedCameraPriority Priority; // 0x88
    char pad_89[0x7];
    UActorProvider* Camera; // 0x90
    FCameraActionTransitionSettings TransitionInSettings; // 0x98
    FCameraActionTransitionSettings TransitionOutSettings; // 0xc8
    bool bCameraTransitionOutDelayed; // 0xf8
    char pad_f9[0x7];
    UActorProvider* InitialCamera; // 0x100
    UActorProvider* FinalCamera; // 0x108
    UFloatProvider* BlendTime; // 0x110
    UFloatProvider* BlendTimeIntoGameCamera; // 0x118
    bool bLazyBlendIntoGameCamera; // 0x120
    ESceneAction_CameraResetType GameCameraResetType; // 0x121
    char pad_122[0x6];
    UTransformProvider* GameCameraLookAtLocation; // 0x128
    static USceneAction_Camera* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
