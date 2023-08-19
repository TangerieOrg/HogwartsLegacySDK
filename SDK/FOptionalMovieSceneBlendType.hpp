#pragma once
#include <cstdint>
#include "EMovieSceneBlendType.hpp"
#pragma pack(push, 1)
struct FOptionalMovieSceneBlendType {
    EMovieSceneBlendType BlendType; // 0x0
    bool bIsValid; // 0x1
}; // Size: 0x2
#pragma pack(pop)
