#pragma once
#include <cstdint>
#include "UMovieSceneTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack {
public:
    TArray<UMovieSceneSection*> SectionArray; // 0x90
    static UTestMovieSceneEvalHookTrack* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
