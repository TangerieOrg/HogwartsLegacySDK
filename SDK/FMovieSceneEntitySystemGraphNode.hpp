#pragma once
#include <cstdint>
class UMovieSceneEntitySystem;
#pragma pack(push, 1)
struct FMovieSceneEntitySystemGraphNode {
    char pad_0[0x20];
    UMovieSceneEntitySystem* System; // 0x20
}; // Size: 0x28
#pragma pack(pop)
