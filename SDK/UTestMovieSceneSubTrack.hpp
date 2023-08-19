#pragma once
#include <cstdint>
#include "UMovieSceneSubTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack {
public:
    TArray<UMovieSceneSection*> SectionArray; // 0xa0
    static UTestMovieSceneSubTrack* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
