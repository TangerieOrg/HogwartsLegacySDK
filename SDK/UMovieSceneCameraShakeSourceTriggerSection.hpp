#pragma once
#include <cstdint>
#include "FMovieSceneCameraShakeSourceTriggerChannel.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection {
public:
    FMovieSceneCameraShakeSourceTriggerChannel Channel; // 0xe8
    static UMovieSceneCameraShakeSourceTriggerSection* StaticClass();
}; // Size: 0x170
#pragma pack(pop)
