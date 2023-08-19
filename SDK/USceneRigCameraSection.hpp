#pragma once
#include <cstdint>
#include "FSceneRigCameraParams.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class USceneRigCameraSection : public UMovieSceneSection {
public:
    FSceneRigCameraParams Params; // 0xe8
    static USceneRigCameraSection* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
