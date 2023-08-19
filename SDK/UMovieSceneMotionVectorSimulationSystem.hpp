#pragma once
#include <cstdint>
#include "UMovieSceneEntitySystem.hpp"
#pragma pack(push, 1)
class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem {
public:
    char pad_40[0x58];
    static UMovieSceneMotionVectorSimulationSystem* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
