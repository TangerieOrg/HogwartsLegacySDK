#pragma once
#include <cstdint>
#include "ECameraStackResetType.hpp"
#include "FRotator.hpp"
#include "FVector2D.hpp"
#include "USceneRigActionBase.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_CameraReset : public USceneRigActionBase {
public:
    ECameraStackResetType ResetType; // 0x88
    char pad_89[0x7];
    UTransformProvider* ResetLookAtLocation; // 0x90
    FRotator FixedArmRotationValue; // 0x98
    FVector2D RotationOffset; // 0xa4
    char pad_ac[0x4];
    static USceneAction_CameraReset* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
