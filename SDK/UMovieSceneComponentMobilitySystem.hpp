#pragma once
#include <cstdint>
#include "UMovieSceneEntityInstantiatorSystem.hpp"
#pragma pack(push, 1)
class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem {
public:
    char pad_40[0x1e0];
    static UMovieSceneComponentMobilitySystem* StaticClass();
}; // Size: 0x220
#pragma pack(pop)
