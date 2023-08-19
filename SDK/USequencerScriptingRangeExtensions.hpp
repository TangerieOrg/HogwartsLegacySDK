#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
struct FSequencerScriptingRange;
#pragma pack(push, 1)
class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary {
public:
    static USequencerScriptingRangeExtensions* StaticClass();
    static void SetStartSeconds(FSequencerScriptingRange& Range, float Start);
    static void SetStartFrame(FSequencerScriptingRange& Range, int32_t Start);
    static void SetEndSeconds(FSequencerScriptingRange& Range, float End);
    static void SetEndFrame(FSequencerScriptingRange& Range, int32_t End);
    static void RemoveStart(FSequencerScriptingRange& Range);
    static void RemoveEnd(FSequencerScriptingRange& Range);
    static bool HasStart(FSequencerScriptingRange& Range);
    static bool HasEnd(FSequencerScriptingRange& Range);
    static float GetStartSeconds(FSequencerScriptingRange& Range);
    static int32_t GetStartFrame(FSequencerScriptingRange& Range);
    static float GetEndSeconds(FSequencerScriptingRange& Range);
    static int32_t GetEndFrame(FSequencerScriptingRange& Range);
}; // Size: 0x28
#pragma pack(pop)
