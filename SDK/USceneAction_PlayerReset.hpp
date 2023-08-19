#pragma once
#include <cstdint>
#include "ECameraStackResetType.hpp"
#include "USceneRigActionBase.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_PlayerReset : public USceneRigActionBase {
public:
    UTransformProvider* TeleportTransform; // 0x88
    ECameraStackResetType CameraResetType; // 0x90
    char pad_91[0x7];
    UTransformProvider* CameraResetLookAtLocation; // 0x98
    static USceneAction_PlayerReset* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
