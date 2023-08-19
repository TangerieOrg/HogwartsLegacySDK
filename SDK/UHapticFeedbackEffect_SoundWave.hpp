#pragma once
#include <cstdint>
#include "UHapticFeedbackEffect_Base.hpp"
class USoundWave;
#pragma pack(push, 1)
class UHapticFeedbackEffect_SoundWave : public UHapticFeedbackEffect_Base {
public:
    USoundWave* SoundWave; // 0x28
    char pad_30[0x18];
    static UHapticFeedbackEffect_SoundWave* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
