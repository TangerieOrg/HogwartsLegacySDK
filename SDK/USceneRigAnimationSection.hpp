#pragma once
#include <cstdint>
#include "FSceneRigAnimationParams.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class USceneRigAnimationSection : public UMovieSceneSection {
public:
    FSceneRigAnimationParams Params; // 0xe8
    static USceneRigAnimationSection* StaticClass();
}; // Size: 0x628
#pragma pack(pop)
