#pragma once
#include <cstdint>
#include "FBoolParameterNameAndCurve.hpp"
#include "FColorParameterNameAndCurves.hpp"
#include "FMovieSceneEvalTemplate.hpp"
#include "FScalarParameterNameAndCurve.hpp"
#include "FTransformParameterNameAndCurves.hpp"
#include "FVector2DParameterNameAndCurves.hpp"
#include "FVectorParameterNameAndCurves.hpp"
#pragma pack(push, 1)
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate {
    TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
    TArray<FBoolParameterNameAndCurve> Bools; // 0x30
    TArray<FVector2DParameterNameAndCurves> Vector2Ds; // 0x40
    TArray<FVectorParameterNameAndCurves> Vectors; // 0x50
    TArray<FColorParameterNameAndCurves> Colors; // 0x60
    TArray<FTransformParameterNameAndCurves> Transforms; // 0x70
}; // Size: 0x80
#pragma pack(pop)
