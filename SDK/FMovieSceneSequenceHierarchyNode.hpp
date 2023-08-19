#pragma once
#include <cstdint>
#include "FMovieSceneSequenceID.hpp"
#pragma pack(push, 1)
struct FMovieSceneSequenceHierarchyNode {
    FMovieSceneSequenceID ParentID; // 0x0
    char pad_4[0x4];
    TArray<FMovieSceneSequenceID> Children; // 0x8
}; // Size: 0x18
#pragma pack(pop)
