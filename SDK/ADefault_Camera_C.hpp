#pragma once
#include <cstdint>
#include "ASceneRigCamera.hpp"
class UCameraFixupComponent;
class UAnimationComponent;
#pragma pack(push, 1)
class ADefault_Camera_C : public ASceneRigCamera {
public:
    UCameraFixupComponent* CameraFixup; // 0x1310
    UAnimationComponent* Animation; // 0x1318
    static ADefault_Camera_C* StaticClass();
}; // Size: 0x1320
#pragma pack(pop)
