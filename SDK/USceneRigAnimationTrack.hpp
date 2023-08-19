#pragma once
#include <cstdint>
#include "UMovieSceneNameableTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class USceneRigAnimationTrack : public UMovieSceneNameableTrack {
public:
    TArray<UMovieSceneSection*> AnimationSections; // 0x90
    static USceneRigAnimationTrack* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
