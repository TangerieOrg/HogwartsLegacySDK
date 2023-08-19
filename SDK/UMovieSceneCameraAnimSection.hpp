#pragma once
#include <cstdint>
#include "FMovieSceneCameraAnimSectionData.hpp"
#include "UMovieSceneSection.hpp"
class UCameraAnim;
#pragma pack(push, 1)
class UMovieSceneCameraAnimSection : public UMovieSceneSection {
public:
    FMovieSceneCameraAnimSectionData AnimData; // 0xe8
    UCameraAnim* CameraAnim; // 0x108
    float PlayRate; // 0x110
    float PlayScale; // 0x114
    float BlendInTime; // 0x118
    float BlendOutTime; // 0x11c
    bool bLooping; // 0x120
    char pad_121[0x7];
    static UMovieSceneCameraAnimSection* StaticClass();
}; // Size: 0x128
#pragma pack(pop)
