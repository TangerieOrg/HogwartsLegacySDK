#pragma once
#include <cstdint>
#include "UMovieSceneNameableTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack {
public:
    TArray<UMovieSceneSection*> Sections; // 0x90
    static UMovieSceneLevelVisibilityTrack* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
