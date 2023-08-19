#pragma once
#include <cstdint>
#include "FWeatherSequenceNoRedirectorsName.hpp"
#pragma pack(push, 1)
struct FWeatherSequenceRedirector {
    FName OldName; // 0x0
    FWeatherSequenceNoRedirectorsName RedirectTo; // 0x8
}; // Size: 0x18
#pragma pack(pop)
