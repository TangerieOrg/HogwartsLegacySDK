#pragma once
#include <cstdint>
#include "ESequenceTimeUnit.hpp"
#include "FFrameTime.hpp"
#include "UMovieSceneScriptingKey.hpp"
struct FFrameNumber;
#pragma pack(push, 1)
class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey {
public:
    char pad_40[0x20];
    static UMovieSceneScriptingStringKey* StaticClass();
    void SetValue(FString InNewValue);
    void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
    FString GetValue();
    FFrameTime GetTime(ESequenceTimeUnit TimeUnit);
}; // Size: 0x60
#pragma pack(pop)
