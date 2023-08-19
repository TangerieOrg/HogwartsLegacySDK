#pragma once
#include <cstdint>
#include "ECubeCaptureFace.hpp"
#include "USceneCaptureComponentCube.hpp"
#pragma pack(push, 1)
class USceneCaptureComponentCubeIncremental : public USceneCaptureComponentCube {
public:
    char pad_310[0x8];
    uint8_t NextFaceToCapture; // 0x318
    char pad_319[0x7];
    static USceneCaptureComponentCubeIncremental* StaticClass();
    void BeginCapture();
}; // Size: 0x320
#pragma pack(pop)
