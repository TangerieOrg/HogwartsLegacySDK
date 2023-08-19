#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
class ACameraStackLookAtTargetActor;
#pragma pack(push, 1)
class USceneActionState_CameraLookAtTarget : public USceneRigActionState {
public:
    ACameraStackLookAtTargetActor* LookAtTargetActor; // 0x50
    char pad_58[0x10];
    static USceneActionState_CameraLookAtTarget* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
