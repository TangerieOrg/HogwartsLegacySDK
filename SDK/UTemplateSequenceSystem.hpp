#pragma once
#include <cstdint>
#include "UMovieSceneEntitySystem.hpp"
#pragma pack(push, 1)
class UTemplateSequenceSystem : public UMovieSceneEntitySystem {
public:
    char pad_40[0x70];
    static UTemplateSequenceSystem* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
