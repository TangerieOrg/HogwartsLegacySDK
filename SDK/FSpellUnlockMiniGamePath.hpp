#pragma once
#include <cstdint>
#include "FSpellUnlockMiniGamePathSegment.hpp"
#pragma pack(push, 1)
struct FSpellUnlockMiniGamePath {
    TArray<FSpellUnlockMiniGamePathSegment> PathSegments; // 0x0
}; // Size: 0x10
#pragma pack(pop)
