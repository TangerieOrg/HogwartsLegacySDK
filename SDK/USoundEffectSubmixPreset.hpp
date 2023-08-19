#pragma once
#include <cstdint>
#include "USoundEffectPreset.hpp"
#pragma pack(push, 1)
class USoundEffectSubmixPreset : public USoundEffectPreset {
public:
    static USoundEffectSubmixPreset* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
