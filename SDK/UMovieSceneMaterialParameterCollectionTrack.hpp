#pragma once
#include <cstdint>
#include "UMovieSceneMaterialTrack.hpp"
class UMaterialParameterCollection;
#pragma pack(push, 1)
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack {
public:
    char pad_a0[0x8];
    UMaterialParameterCollection* MPC; // 0xa8
    static UMovieSceneMaterialParameterCollectionTrack* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
