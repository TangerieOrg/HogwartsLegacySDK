#pragma once
#include <cstdint>
#include "UMovieSceneEntityInstantiatorSystem.hpp"
#pragma pack(push, 1)
class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem {
public:
    char pad_40[0x1a8];
    static UMovieSceneInterrogatedPropertyInstantiatorSystem* StaticClass();
}; // Size: 0x1e8
#pragma pack(pop)
