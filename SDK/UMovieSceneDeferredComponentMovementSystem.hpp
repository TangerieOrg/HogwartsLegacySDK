#pragma once
#include <cstdint>
#include "UMovieSceneEntitySystem.hpp"
#pragma pack(push, 1)
class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem {
public:
    char pad_40[0x18];
    static UMovieSceneDeferredComponentMovementSystem* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
