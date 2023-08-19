#pragma once
#include <cstdint>
#include "UHapticFeedbackEffect_Base.hpp"
#pragma pack(push, 1)
class UHapticFeedbackEffect_Buffer : public UHapticFeedbackEffect_Base {
public:
    TArray<uint8_t> Amplitudes; // 0x28
    int32_t SampleRate; // 0x38
    char pad_3c[0x4];
    static UHapticFeedbackEffect_Buffer* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
