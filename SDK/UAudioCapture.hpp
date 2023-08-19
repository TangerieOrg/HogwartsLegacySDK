#pragma once
#include <cstdint>
#include "UAudioGenerator.hpp"
struct FAudioCaptureDeviceInfo;
#pragma pack(push, 1)
class UAudioCapture : public UAudioGenerator {
public:
    char pad_a8[0x8];
    static UAudioCapture* StaticClass();
    void StopCapturingAudio();
    void StartCapturingAudio();
    bool IsCapturingAudio();
    bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo);
}; // Size: 0xb0
#pragma pack(pop)
