#pragma once
#include <cstdint>
#include "UMovieSceneTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack {
public:
    TArray<UMovieSceneSection*> ConstraintSections; // 0x90
    static UMovieScene3DConstraintTrack* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
