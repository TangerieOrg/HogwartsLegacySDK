#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UMovieSceneTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieSceneSpawnTrack : public UMovieSceneTrack {
public:
    TArray<UMovieSceneSection*> Sections; // 0x90
    FGuid ObjectGuid; // 0xa0
    static UMovieSceneSpawnTrack* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
