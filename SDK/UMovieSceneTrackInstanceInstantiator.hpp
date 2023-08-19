#pragma once
#include <cstdint>
#include "UMovieSceneEntityInstantiatorSystem.hpp"
#pragma pack(push, 1)
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem {
public:
    char pad_40[0xb0];
    static UMovieSceneTrackInstanceInstantiator* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
