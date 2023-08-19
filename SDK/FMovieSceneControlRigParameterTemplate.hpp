#pragma once
#include <cstdint>
#include "FEnumParameterNameAndCurve.hpp"
#include "FIntegerParameterNameAndCurve.hpp"
#include "FMovieSceneParameterSectionTemplate.hpp"
#pragma pack(push, 1)
struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate {
    TArray<FEnumParameterNameAndCurve> Enums; // 0x80
    TArray<FIntegerParameterNameAndCurve> Integers; // 0x90
}; // Size: 0xa0
#pragma pack(pop)
