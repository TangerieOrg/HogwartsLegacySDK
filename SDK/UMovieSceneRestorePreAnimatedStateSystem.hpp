#pragma once
#include <cstdint>
#include "UMovieSceneEntityInstantiatorSystem.hpp"
#pragma pack(push, 1)
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem {
public:
    char pad_40[0x10];
    static UMovieSceneRestorePreAnimatedStateSystem* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
