#pragma once
#include <cstdint>
#include "UMovieSceneBlenderSystem.hpp"
#pragma pack(push, 1)
class UMovieScenePiecewiseFloatBlenderSystem : public UMovieSceneBlenderSystem {
public:
    char pad_68[0xc0];
    static UMovieScenePiecewiseFloatBlenderSystem* StaticClass();
}; // Size: 0x128
#pragma pack(pop)
