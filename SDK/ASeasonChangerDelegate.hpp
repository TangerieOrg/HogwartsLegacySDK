#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ESeasonOverride.hpp"
#pragma pack(push, 1)
class ASeasonChangerDelegate : public AActor {
public:
    bool DisableSeasonChanges; // 0x248
    ESeasonOverride SeasonOverride; // 0x249
    char pad_24a[0x6];
    static ASeasonChangerDelegate* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
