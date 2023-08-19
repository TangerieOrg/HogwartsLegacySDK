#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#pragma pack(push, 1)
struct FMovieSceneMarkedFrame {
    FFrameNumber FrameNumber; // 0x0
    char pad_4[0x4];
    FString Label; // 0x8
    bool bIsDeterminismFence; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
