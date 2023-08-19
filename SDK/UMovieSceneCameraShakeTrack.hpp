#pragma once
#include <cstdint>
#include "UMovieSceneNameableTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack {
public:
    char pad_90[0x8];
    TArray<UMovieSceneSection*> CameraShakeSections; // 0x98
    static UMovieSceneCameraShakeTrack* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
