#pragma once
#include <cstdint>
#include "UMovieSceneBlenderSystem.hpp"
#pragma pack(push, 1)
class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem {
public:
    char pad_68[0x28];
    static UMovieScenePiecewiseByteBlenderSystem* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
