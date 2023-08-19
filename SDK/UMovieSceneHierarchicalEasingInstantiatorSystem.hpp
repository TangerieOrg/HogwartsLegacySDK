#pragma once
#include <cstdint>
#include "UMovieSceneEntityInstantiatorSystem.hpp"
#pragma pack(push, 1)
class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem {
public:
    char pad_40[0x50];
    static UMovieSceneHierarchicalEasingInstantiatorSystem* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
