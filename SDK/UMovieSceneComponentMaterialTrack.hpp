#pragma once
#include <cstdint>
#include "UMovieSceneMaterialTrack.hpp"
#pragma pack(push, 1)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack {
public:
    char pad_a0[0x8];
    int32_t MaterialIndex; // 0xa8
    char pad_ac[0x4];
    static UMovieSceneComponentMaterialTrack* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
