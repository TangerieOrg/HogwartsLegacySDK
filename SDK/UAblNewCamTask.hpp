#pragma once
#include <cstdint>
#include "FCameraProperties.hpp"
#include "LookAtType.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNewCamTask : public UAblAbilityTask {
public:
    TArray<FCameraProperties> camProperties; // 0x70
    float customCameraWeight; // 0x80
    LookAtType LookAtTarget; // 0x84
    bool alwaysLookAtTarget; // 0x85
    bool SequentiallyPlayAllCameras; // 0x86
    bool Disable; // 0x87
    char pad_88[0x20];
    static UAblNewCamTask* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
