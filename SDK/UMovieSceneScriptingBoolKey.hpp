#pragma once
#include <cstdint>
#include "ESequenceTimeUnit.hpp"
#include "FFrameTime.hpp"
#include "UMovieSceneScriptingKey.hpp"
struct FFrameNumber;
#pragma pack(push, 1)
class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey {
public:
    char pad_40[0x20];
    static UMovieSceneScriptingBoolKey* StaticClass();
    void SetValue(bool InNewValue);
    void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
    bool GetValue();
    FFrameTime GetTime(ESequenceTimeUnit TimeUnit);
}; // Size: 0x60
#pragma pack(pop)
