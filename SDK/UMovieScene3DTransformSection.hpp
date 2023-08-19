#pragma once
#include <cstdint>
#include "FMovieSceneFloatChannel.hpp"
#include "FMovieSceneTransformMask.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieScene3DTransformSection : public UMovieSceneSection {
public:
    char pad_e8[0x8];
    FMovieSceneTransformMask TransformMask; // 0xf0
    char pad_f4[0x4];
    FMovieSceneFloatChannel Translation[3]; // 0xf8
    FMovieSceneFloatChannel Rotation[3]; // 0x2d8
    FMovieSceneFloatChannel Scale[3]; // 0x4b8
    FMovieSceneFloatChannel ManualWeight; // 0x698
    bool bUseQuaternionInterpolation; // 0x738
    char pad_739[0x7];
    static UMovieScene3DTransformSection* StaticClass();
}; // Size: 0x740
#pragma pack(pop)
