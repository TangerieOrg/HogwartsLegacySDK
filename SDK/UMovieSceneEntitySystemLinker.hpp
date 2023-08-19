#pragma once
#include <cstdint>
#include "FMovieSceneEntitySystemGraph.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMovieSceneEntitySystemLinker : public UObject {
public:
    char pad_28[0x270];
    FMovieSceneEntitySystemGraph SystemGraph; // 0x298
    char pad_3d0[0x120];
    static UMovieSceneEntitySystemLinker* StaticClass();
}; // Size: 0x4f0
#pragma pack(pop)
