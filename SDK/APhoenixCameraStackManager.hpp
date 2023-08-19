#pragma once
#include <cstdint>
#include "ACameraStackManager.hpp"
#pragma pack(push, 1)
class APhoenixCameraStackManager : public ACameraStackManager {
public:
    float MinObjectFadeOpacity; // 0x2e70
    float ObjectFadingProbeSize; // 0x2e74
    float MinFadeCameraDistanceToAvatar; // 0x2e78
    float AvatarCapsuleRefRadius; // 0x2e7c
    char pad_2e80[0x1b0];
    static APhoenixCameraStackManager* StaticClass();
    void StartFadeToZeroOpacity();
    void OnCurtainRaised();
    void FinishFadeToZeroOpacity();
    void EnableForceFadeAll();
    void DisableForceFadeAll();
}; // Size: 0x3030
#pragma pack(pop)
