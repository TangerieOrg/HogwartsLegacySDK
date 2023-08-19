#pragma once
#include <cstdint>
#include "FMovieSceneCameraShakeSectionData.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection {
public:
    FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
    static UMovieSceneCameraShakeSourceShakeSection* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
