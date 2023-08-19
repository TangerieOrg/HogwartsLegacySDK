#pragma once
#include <cstdint>
#include "ESequenceTimeUnit.hpp"
#include "FFrameTime.hpp"
#include "UMovieSceneScriptingKey.hpp"
class UObject;
struct FFrameNumber;
#pragma pack(push, 1)
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey {
public:
    char pad_40[0x20];
    static UMovieSceneScriptingObjectPathKey* StaticClass();
    void SetValue(UObject* InNewValue);
    void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
    UObject* GetValue();
    FFrameTime GetTime(ESequenceTimeUnit TimeUnit);
}; // Size: 0x60
#pragma pack(pop)
