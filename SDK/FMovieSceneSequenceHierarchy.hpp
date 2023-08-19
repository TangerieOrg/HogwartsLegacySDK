#pragma once
#include <cstdint>
#include "FMovieSceneSequenceHierarchyNode.hpp"
#include "FMovieSceneSubSequenceTree.hpp"
#pragma pack(push, 1)
struct FMovieSceneSequenceHierarchy {
    FMovieSceneSequenceHierarchyNode RootNode; // 0x0
    FMovieSceneSubSequenceTree Tree; // 0x18
    char pad_78[0xa0];
}; // Size: 0x118
#pragma pack(pop)
