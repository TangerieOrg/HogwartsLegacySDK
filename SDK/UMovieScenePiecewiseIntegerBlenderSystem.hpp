#pragma once
#include <cstdint>
#include "UMovieSceneBlenderSystem.hpp"
#pragma pack(push, 1)
class UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem {
public:
    char pad_68[0x48];
    static UMovieScenePiecewiseIntegerBlenderSystem* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
