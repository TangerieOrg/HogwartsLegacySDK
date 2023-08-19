#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELipsyncFlags : uint8_t {
    NoLipsync = 0,
    Lipsync = 1,
    MouthOnlyLipsyncLocalizedLanguages = 2,
    MouthOnlyLipsync = 3,
    ELipsyncFlags_MAX = 4,
};
#pragma pack(pop)
