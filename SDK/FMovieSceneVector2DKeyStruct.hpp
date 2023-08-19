#pragma once
#include <cstdint>
#include "FMovieSceneVectorKeyStructBase.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase {
    FVector2D Vector; // 0x28
}; // Size: 0x30
#pragma pack(pop)
