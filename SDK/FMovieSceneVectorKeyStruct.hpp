#pragma once
#include <cstdint>
#include "FMovieSceneVectorKeyStructBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase {
    FVector Vector; // 0x28
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
