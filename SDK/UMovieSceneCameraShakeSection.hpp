#pragma once
#include <cstdint>
#include "ECameraShakePlaySpace.hpp"
#include "FMovieSceneCameraShakeSectionData.hpp"
#include "FRotator.hpp"
#include "UMovieSceneSection.hpp"
class UClass;
#pragma pack(push, 1)
class UMovieSceneCameraShakeSection : public UMovieSceneSection {
public:
    FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
    UClass* ShakeClass; // 0x108
    float PlayScale; // 0x110
    ECameraShakePlaySpace PlaySpace; // 0x114
    char pad_115[0x3];
    FRotator UserDefinedPlaySpace; // 0x118
    char pad_124[0x4];
    static UMovieSceneCameraShakeSection* StaticClass();
}; // Size: 0x128
#pragma pack(pop)
