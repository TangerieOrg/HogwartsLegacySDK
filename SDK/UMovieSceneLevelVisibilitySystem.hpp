#pragma once
#include <cstdint>
#include "UMovieSceneEntitySystem.hpp"
#pragma pack(push, 1)
class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem {
public:
    char pad_40[0x168];
    static UMovieSceneLevelVisibilitySystem* StaticClass();
}; // Size: 0x1a8
#pragma pack(pop)
