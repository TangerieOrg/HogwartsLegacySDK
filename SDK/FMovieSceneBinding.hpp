#pragma once
#include <cstdint>
#include "FGuid.hpp"
class UMovieSceneTrack;
#pragma pack(push, 1)
struct FMovieSceneBinding {
    FGuid ObjectGuid; // 0x0
    FString BindingName; // 0x10
    TArray<UMovieSceneTrack*> Tracks; // 0x20
}; // Size: 0x30
#pragma pack(pop)
