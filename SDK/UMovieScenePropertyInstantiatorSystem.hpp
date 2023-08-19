#pragma once
#include <cstdint>
#include "UMovieSceneEntityInstantiatorSystem.hpp"
#pragma pack(push, 1)
class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem {
public:
    char pad_40[0x208];
    static UMovieScenePropertyInstantiatorSystem* StaticClass();
}; // Size: 0x248
#pragma pack(pop)
