#pragma once
#include <cstdint>
#include "UMovieSceneBoolSection.hpp"
#pragma pack(push, 1)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection {
public:
    char pad_180[0x8];
    static UMovieSceneSpawnSection* StaticClass();
}; // Size: 0x188
#pragma pack(pop)
