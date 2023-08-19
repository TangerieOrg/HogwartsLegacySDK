#pragma once
#include <cstdint>
#include "UMovieSceneTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack {
public:
    char pad_90[0x8];
    TArray<UMovieSceneSection*> Sections; // 0x98
    static UMovieSceneCameraShakeSourceTriggerTrack* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
