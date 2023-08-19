#pragma once
#include <cstdint>
#include "UMovieScenePropertyTrack.hpp"
#pragma pack(push, 1)
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack {
public:
    char pad_c0[0x8];
    int32_t MaterialIndex; // 0xc8
    char pad_cc[0x4];
    static UMovieScenePrimitiveMaterialTrack* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
