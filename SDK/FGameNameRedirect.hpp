#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGameNameRedirect {
    FName OldGameName; // 0x0
    FName NewGameName; // 0x8
}; // Size: 0x10
#pragma pack(pop)
