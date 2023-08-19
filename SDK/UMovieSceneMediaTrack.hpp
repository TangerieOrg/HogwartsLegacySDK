#pragma once
#include <cstdint>
#include "UMovieSceneNameableTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack {
public:
    char pad_90[0x8];
    TArray<UMovieSceneSection*> MediaSections; // 0x98
    static UMovieSceneMediaTrack* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
