#pragma once
#include <cstdint>
class UFunction;
#pragma pack(push, 1)
struct FMovieSceneEventPtrs {
    UFunction* Function; // 0x0
    char pad_8[0x20];
}; // Size: 0x28
#pragma pack(pop)
