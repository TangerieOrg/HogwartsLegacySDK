#pragma once
#include <cstdint>
class UMovieSceneSection;
class UClass;
#pragma pack(push, 1)
struct FMovieSceneTrackInstanceComponent {
    UMovieSceneSection* Owner; // 0x0
    UClass* TrackInstanceClass; // 0x8
}; // Size: 0x10
#pragma pack(pop)
