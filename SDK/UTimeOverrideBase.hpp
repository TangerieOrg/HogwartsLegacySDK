#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "FTimespan.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UTimeOverrideBase : public UObject {
public:
    char pad_28[0x8];
    static UTimeOverrideBase* StaticClass();
    void TimeOverrideSetTime(FTimespan Time, bool& bSupported);
    void TimeOverrideSetNormalizedTime(float Time, bool& bSupported);
    void TimeOverrideSetEnable(bool bEnable, bool& bSupported);
    void TimeOverrideSetDateTime(FDateTime DateTime, bool& bSupported);
    void TimeOverrideIsEnabled(bool& bEnabled);
    void TimeOverrideHasTime(bool& bSupported);
    void TimeOverrideHasNormalizedTime(bool& bSupported);
    void TimeOverrideHasDateTime(bool& bSupported);
    void TimeOverrideGetTime(FTimespan& CurrentTime, bool& bSupported);
    void TimeOverrideGetPriority(float& Priority);
    void TimeOverrideGetNormalizedTime(float& CurrentNormalizedTime, bool& bSupported);
    void TimeOverrideGetDateTime(FDateTime& CurrentDateTime, bool& bSupported);
    void TimeOverrideCanSetTime(bool& bSupported);
    void TimeOverrideCanSetNormalizedTime(bool& bSupported);
    void TimeOverrideCanSetEnable(bool& bSupported);
    void TimeOverrideCanSetDateTime(bool& bSupported);
}; // Size: 0x30
#pragma pack(pop)
