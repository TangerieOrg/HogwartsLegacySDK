#pragma once
#include <cstdint>
#include "UMovieSceneEntitySystem.hpp"
#pragma pack(push, 1)
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem {
public:
    char pad_40[0x10];
    static UMovieSceneEvalTimeSystem* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
