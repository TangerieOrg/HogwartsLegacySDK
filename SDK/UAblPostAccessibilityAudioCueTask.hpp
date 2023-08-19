#pragma once
#include <cstdint>
#include "EAccessibilityAudioCueEventType.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblPostAccessibilityAudioCueTask : public UAblAbilityTask {
public:
    EAccessibilityAudioCueEventType AudioCueEventType; // 0x70
    bool bOneShot; // 0x71
    char pad_72[0x6];
    static UAblPostAccessibilityAudioCueTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
