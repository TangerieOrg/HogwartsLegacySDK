#pragma once
#include <cstdint>
#include "USoundBase.hpp"
#pragma pack(push, 1)
class UDialogueSoundWaveProxy : public USoundBase {
public:
    char pad_170[0x18];
    static UDialogueSoundWaveProxy* StaticClass();
}; // Size: 0x188
#pragma pack(pop)
