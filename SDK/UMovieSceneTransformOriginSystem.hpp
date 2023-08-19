#pragma once
#include <cstdint>
#include "UMovieSceneEntitySystem.hpp"
#pragma pack(push, 1)
class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem {
public:
    char pad_40[0x38];
    static UMovieSceneTransformOriginSystem* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
