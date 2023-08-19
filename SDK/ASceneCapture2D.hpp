#pragma once
#include <cstdint>
#include "ASceneCapture.hpp"
class USceneCaptureComponent2D;
#pragma pack(push, 1)
class ASceneCapture2D : public ASceneCapture {
public:
    USceneCaptureComponent2D* CaptureComponent2D; // 0x258
    static ASceneCapture2D* StaticClass();
    void OnInterpToggle(bool bEnable);
}; // Size: 0x260
#pragma pack(pop)
