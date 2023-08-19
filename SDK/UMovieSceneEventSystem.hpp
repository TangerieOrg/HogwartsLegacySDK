#pragma once
#include <cstdint>
#include "UMovieSceneEntitySystem.hpp"
#pragma pack(push, 1)
class UMovieSceneEventSystem : public UMovieSceneEntitySystem {
public:
    char pad_40[0x50];
    static UMovieSceneEventSystem* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
