#pragma once
#include <cstdint>
#include "UMovieSceneEntityInstantiatorSystem.hpp"
#pragma pack(push, 1)
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem {
public:
    char pad_40[0x20];
    static UMovieSceneCachePreAnimatedStateSystem* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
