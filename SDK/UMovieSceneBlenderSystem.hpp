#pragma once
#include <cstdint>
#include "UMovieSceneEntitySystem.hpp"
#pragma pack(push, 1)
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem {
public:
    char pad_40[0x28];
    static UMovieSceneBlenderSystem* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
