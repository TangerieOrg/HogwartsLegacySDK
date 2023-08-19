#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMovieScenePropertyBinding {
    FName PropertyName; // 0x0
    FName PropertyPath; // 0x8
    bool bCanUseClassLookup; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
