#pragma once
#include <cstdint>
#include "FBoolParameterNameAndCurve.hpp"
#include "FColorParameterNameAndCurves.hpp"
#include "FFrameNumber.hpp"
#include "FLinearColor.hpp"
#include "FScalarParameterNameAndCurve.hpp"
#include "FTransformParameterNameAndCurves.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVector2DParameterNameAndCurves.hpp"
#include "FVectorParameterNameAndCurves.hpp"
#include "UMovieSceneSection.hpp"
struct FTransform;
#pragma pack(push, 1)
class UMovieSceneParameterSection : public UMovieSceneSection {
public:
    TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xe8
    TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf8
    TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x108
    TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x118
    TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x128
    TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x138
    static UMovieSceneParameterSection* StaticClass();
    bool RemoveVectorParameter(FName InParameterName);
    bool RemoveVector2DParameter(FName InParameterName);
    bool RemoveTransformParameter(FName InParameterName);
    bool RemoveScalarParameter(FName InParameterName);
    bool RemoveColorParameter(FName InParameterName);
    bool RemoveBoolParameter(FName InParameterName);
    void GetParameterNames();
    void AddVectorParameterKey(FName InParameterName, FFrameNumber InTime, FVector InValue);
    void AddVector2DParameterKey(FName InParameterName, FFrameNumber InTime, FVector2D InValue);
    void AddTransformParameterKey(FName InParameterName, FFrameNumber InTime, FTransform& InValue);
    void AddScalarParameterKey(FName InParameterName, FFrameNumber InTime, float InValue);
    void AddColorParameterKey(FName InParameterName, FFrameNumber InTime, FLinearColor InValue);
    void AddBoolParameterKey(FName InParameterName, FFrameNumber InTime, bool InValue);
}; // Size: 0x148
#pragma pack(pop)
