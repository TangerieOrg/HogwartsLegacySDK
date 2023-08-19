#pragma once
#include <cstdint>
class UCameraAnim;
#pragma pack(push, 1)
struct FMovieSceneCameraAnimSectionData {
    UCameraAnim* CameraAnim; // 0x0
    float PlayRate; // 0x8
    float PlayScale; // 0xc
    float BlendInTime; // 0x10
    float BlendOutTime; // 0x14
    bool bLooping; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
