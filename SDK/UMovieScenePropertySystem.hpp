#pragma once
#include <cstdint>
#include "UMovieSceneEntitySystem.hpp"
class UMovieScenePropertyInstantiatorSystem;
#pragma pack(push, 1)
class UMovieScenePropertySystem : public UMovieSceneEntitySystem {
public:
    char pad_40[0x8];
    UMovieScenePropertyInstantiatorSystem* InstantiatorSystem; // 0x48
    char pad_50[0x8];
    static UMovieScenePropertySystem* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
