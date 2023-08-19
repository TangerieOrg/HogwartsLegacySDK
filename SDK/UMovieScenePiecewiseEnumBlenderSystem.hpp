#pragma once
#include <cstdint>
#include "UMovieSceneBlenderSystem.hpp"
#pragma pack(push, 1)
class UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem {
public:
    char pad_68[0x28];
    static UMovieScenePiecewiseEnumBlenderSystem* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
