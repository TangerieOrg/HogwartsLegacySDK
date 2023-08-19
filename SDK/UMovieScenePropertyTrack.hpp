#pragma once
#include <cstdint>
#include "FMovieScenePropertyBinding.hpp"
#include "UMovieSceneNameableTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack {
public:
    UMovieSceneSection* SectionToKey; // 0x90
    FMovieScenePropertyBinding PropertyBinding; // 0x98
    char pad_ac[0x4];
    TArray<UMovieSceneSection*> Sections; // 0xb0
    static UMovieScenePropertyTrack* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
