#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
class UAblPlayPostAkEvent : public UAblAbilityTask {
public:
    UAkAudioEvent* AkEvent; // 0x70
    FName EventName; // 0x78
    bool bStopWhenAttachedToDestroyed; // 0x80
    bool bPlayerOnly; // 0x81
    bool bPlayerInstigationOnly; // 0x82
    char pad_83[0x5];
    UAkAudioEvent* EventToPostOnTaskEnd; // 0x88
    static UAblPlayPostAkEvent* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
