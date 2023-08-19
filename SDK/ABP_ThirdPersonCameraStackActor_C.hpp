#pragma once
#include <cstdint>
#include "ACameraStackActor.hpp"
class UCameraStackAnimationComponent;
class UCameraStackVolumeInfluenceComponent;
#pragma pack(push, 1)
class ABP_ThirdPersonCameraStackActor_C : public ACameraStackActor {
public:
    UCameraStackAnimationComponent* CameraStackAnimation; // 0x408
    UCameraStackVolumeInfluenceComponent* CameraStackVolumeInfluence; // 0x410
    static ABP_ThirdPersonCameraStackActor_C* StaticClass();
}; // Size: 0x418
#pragma pack(pop)
