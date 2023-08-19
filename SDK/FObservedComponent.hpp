#pragma once
#include <cstdint>
#include "FComponentReference.hpp"
#pragma pack(push, 1)
struct FObservedComponent {
    FName CacheName; // 0x0
    FComponentReference ComponentRef; // 0x8
    bool bIsSimulating; // 0x30
    char pad_31[0xbf];
}; // Size: 0xf0
#pragma pack(pop)
