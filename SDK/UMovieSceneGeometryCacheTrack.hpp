#pragma once
#include <cstdint>
#include "UMovieSceneNameableTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack {
public:
    char pad_90[0x8];
    TArray<UMovieSceneSection*> AnimationSections; // 0x98
    static UMovieSceneGeometryCacheTrack* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
