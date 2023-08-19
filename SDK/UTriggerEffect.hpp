#pragma once
#include <cstdint>
#include "TriggerModeEnum.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UTriggerEffect : public UObject {
public:
    TriggerModeEnum TriggerMode; // 0x28
    bool RightTrigger; // 0x29
    bool LeftTrigger; // 0x2a
    uint8_t WeaponStartPosition; // 0x2b
    uint8_t WeaponEndPosition; // 0x2c
    uint8_t WeaponStrength; // 0x2d
    uint8_t VibrationPosition; // 0x2e
    uint8_t VibrationFrequency; // 0x2f
    uint8_t VibrationAmplitude; // 0x30
    uint8_t FeedbackPosition; // 0x31
    uint8_t FeedbackStrength; // 0x32
    char pad_33[0x15];
    static UTriggerEffect* StaticClass();
    void MarkForUpdate();
}; // Size: 0x48
#pragma pack(pop)
