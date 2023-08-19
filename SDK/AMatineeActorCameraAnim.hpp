#pragma once
#include <cstdint>
#include "AMatineeActor.hpp"
class UCameraAnim;
#pragma pack(push, 1)
class AMatineeActorCameraAnim : public AMatineeActor {
public:
    UCameraAnim* CameraAnim; // 0x2f0
    static AMatineeActorCameraAnim* StaticClass();
}; // Size: 0x2f8
#pragma pack(pop)
