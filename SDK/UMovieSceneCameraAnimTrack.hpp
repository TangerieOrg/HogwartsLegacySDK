#pragma once
#include <cstdint>
#include "UMovieSceneNameableTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack {
public:
    char pad_90[0x8];
    TArray<UMovieSceneSection*> CameraAnimSections; // 0x98
    static UMovieSceneCameraAnimTrack* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
