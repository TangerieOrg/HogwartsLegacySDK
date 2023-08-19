#pragma once
#include <cstdint>
#include "FMovieSceneTrackIdentifier.hpp"
#pragma pack(push, 1)
struct FMovieSceneTemplateGenerationLedger {
    FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
    char pad_4[0xa4];
}; // Size: 0xa8
#pragma pack(pop)
