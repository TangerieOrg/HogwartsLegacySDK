#pragma once
#include <cstdint>
class UObject;
class UMovieSceneTrackInstance;
#pragma pack(push, 1)
struct FMovieSceneTrackInstanceEntry {
    UObject* BoundObject; // 0x0
    UMovieSceneTrackInstance* TrackInstance; // 0x8
}; // Size: 0x10
#pragma pack(pop)
