#pragma once
#include <cstdint>
#include "FEnumParameterNameAndCurve.hpp"
#include "FIntegerParameterNameAndCurve.hpp"
#include "FMovieSceneFloatChannel.hpp"
#include "FMovieSceneTransformMask.hpp"
#include "UMovieSceneParameterSection.hpp"
class UControlRig;
class UClass;
#pragma pack(push, 1)
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection {
public:
    UControlRig* ControlRig; // 0x148
    UClass* ControlRigClass; // 0x150
    TArray<bool> ControlsMask; // 0x158
    FMovieSceneTransformMask TransformMask; // 0x168
    char pad_16c[0x4];
    FMovieSceneFloatChannel weight; // 0x170
    char pad_210[0x50];
    TArray<FEnumParameterNameAndCurve> EnumParameterNamesAndCurves; // 0x260
    TArray<FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves; // 0x270
    char pad_280[0x68];
    static UMovieSceneControlRigParameterSection* StaticClass();
}; // Size: 0x2e8
#pragma pack(pop)
