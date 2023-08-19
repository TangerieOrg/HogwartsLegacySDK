#pragma once
#include <cstdint>
#include "FMovieSceneVectorKeyStructBase.hpp"
#include "FVector4.hpp"
#pragma pack(push, 1)
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase {
    char pad_28[0x8];
    FVector4 Vector; // 0x30
}; // Size: 0x40
#pragma pack(pop)
