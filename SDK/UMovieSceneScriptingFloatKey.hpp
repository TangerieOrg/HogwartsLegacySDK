#pragma once
#include <cstdint>
#include "ERichCurveInterpMode.hpp"
#include "ERichCurveTangentMode.hpp"
#include "ERichCurveTangentWeightMode.hpp"
#include "ESequenceTimeUnit.hpp"
#include "FFrameTime.hpp"
#include "UMovieSceneScriptingKey.hpp"
struct FFrameNumber;
#pragma pack(push, 1)
class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey {
public:
    char pad_40[0x20];
    static UMovieSceneScriptingFloatKey* StaticClass();
    void SetValue(float InNewValue);
    void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
    void SetTangentWeightMode(ERichCurveTangentWeightMode InNewValue);
    void SetTangentMode(ERichCurveTangentMode InNewValue);
    void SetLeaveTangentWeight(float InNewValue);
    void SetLeaveTangent(float InNewValue);
    void SetInterpolationMode(ERichCurveInterpMode InNewValue);
    void SetArriveTangentWeight(float InNewValue);
    void SetArriveTangent(float InNewValue);
    float GetValue();
    FFrameTime GetTime(ESequenceTimeUnit TimeUnit);
    ERichCurveTangentWeightMode GetTangentWeightMode();
    ERichCurveTangentMode GetTangentMode();
    float GetLeaveTangentWeight();
    float GetLeaveTangent();
    ERichCurveInterpMode GetInterpolationMode();
    float GetArriveTangentWeight();
    float GetArriveTangent();
}; // Size: 0x60
#pragma pack(pop)
