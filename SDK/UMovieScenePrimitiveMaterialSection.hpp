#pragma once
#include <cstdint>
#include "FMovieSceneObjectPathChannel.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection {
public:
    FMovieSceneObjectPathChannel MaterialChannel; // 0xe8
    static UMovieScenePrimitiveMaterialSection* StaticClass();
}; // Size: 0x1a8
#pragma pack(pop)
