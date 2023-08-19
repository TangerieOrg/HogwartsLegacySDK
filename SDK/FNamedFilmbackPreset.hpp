#pragma once
#include <cstdint>
#include "FCameraFilmbackSettings.hpp"
#pragma pack(push, 1)
struct FNamedFilmbackPreset {
    FString Name; // 0x0
    FCameraFilmbackSettings FilmbackSettings; // 0x10
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
