#pragma once
#include <cstdint>
#include "AActor.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ACameraRig_Crane : public AActor {
public:
    float CranePitch; // 0x248
    float CraneYaw; // 0x24c
    float CraneArmLength; // 0x250
    bool bLockMountPitch; // 0x254
    bool bLockMountYaw; // 0x255
    char pad_256[0x2];
    USceneComponent* TransformComponent; // 0x258
    USceneComponent* CraneYawControl; // 0x260
    USceneComponent* CranePitchControl; // 0x268
    USceneComponent* CraneCameraMount; // 0x270
    static ACameraRig_Crane* StaticClass();
}; // Size: 0x278
#pragma pack(pop)
