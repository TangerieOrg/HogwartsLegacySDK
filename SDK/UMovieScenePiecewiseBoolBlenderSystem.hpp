#pragma once
#include <cstdint>
#include "UMovieSceneBlenderSystem.hpp"
#pragma pack(push, 1)
class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem {
public:
    char pad_68[0x28];
    static UMovieScenePiecewiseBoolBlenderSystem* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
