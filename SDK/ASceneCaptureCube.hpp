#pragma once
#include <cstdint>
#include "ASceneCapture.hpp"
class USceneCaptureComponentCube;
#pragma pack(push, 1)
class ASceneCaptureCube : public ASceneCapture {
public:
    USceneCaptureComponentCube* CaptureComponentCube; // 0x258
    static ASceneCaptureCube* StaticClass();
    void OnInterpToggle(bool bEnable);
}; // Size: 0x260
#pragma pack(pop)
