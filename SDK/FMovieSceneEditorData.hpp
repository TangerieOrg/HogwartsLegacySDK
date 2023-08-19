#pragma once
#include <cstdint>
#include "FFloatRange.hpp"
#pragma pack(push, 1)
struct FMovieSceneEditorData {
    char pad_0[0x50];
    TArray<FString> PinnedNodes; // 0x50
    double ViewStart; // 0x60
    double ViewEnd; // 0x68
    double WorkStart; // 0x70
    double WorkEnd; // 0x78
    char pad_80[0x50];
    FFloatRange WorkingRange; // 0xd0
    FFloatRange ViewRange; // 0xe0
}; // Size: 0xf0
#pragma pack(pop)
