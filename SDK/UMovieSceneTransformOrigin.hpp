#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UInterface.hpp"
#pragma pack(push, 1)
class UMovieSceneTransformOrigin : public UInterface {
public:
    static UMovieSceneTransformOrigin* StaticClass();
    FTransform BP_GetTransformOrigin();
}; // Size: 0x28
#pragma pack(pop)
