#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FRandomPlayerSequenceEntry.hpp"
#pragma pack(push, 1)
struct FAnimNode_RandomPlayer : public FAnimNode_Base {
    TArray<FRandomPlayerSequenceEntry> Entries; // 0x10
    char pad_20[0x50];
    bool bShuffleMode; // 0x70
    char pad_71[0x7];
}; // Size: 0x78
#pragma pack(pop)
