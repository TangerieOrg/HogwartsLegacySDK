#pragma once
#include <cstdint>
#include "UMovieSceneTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UTestMovieSceneTrack : public UMovieSceneTrack {
public:
    char pad_90[0x8];
    bool bHighPassFilter; // 0x98
    char pad_99[0x7];
    TArray<UMovieSceneSection*> SectionArray; // 0xa0
    static UTestMovieSceneTrack* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
