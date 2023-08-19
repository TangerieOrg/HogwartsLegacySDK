#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
class AActor;
#pragma pack(push, 1)
class USceneActionState_Camera : public USceneRigActionState {
public:
    char pad_50[0x8];
    AActor* CameraActor; // 0x58
    char pad_60[0x8];
    static USceneActionState_Camera* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
