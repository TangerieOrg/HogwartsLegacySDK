#pragma once
#include <cstdint>
#include "FMovieSceneEntitySystemGraphNodes.hpp"
#pragma pack(push, 1)
struct FMovieSceneEntitySystemGraph {
    char pad_0[0x80];
    FMovieSceneEntitySystemGraphNodes Nodes; // 0x80
    char pad_b8[0x80];
}; // Size: 0x138
#pragma pack(pop)
