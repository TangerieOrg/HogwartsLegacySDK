#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
#include "FSceneRigCameraParams.hpp"
#pragma pack(push, 1)
struct FSceneRigCameraSectionTemplate : public FMovieSceneEvalTemplate {
    FSceneRigCameraParams Params; // 0x20
    char pad_38[0x10];
}; // Size: 0x48
#pragma pack(pop)
