#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWInstrumentedProfilerAutomatedResumeSettings : int32_t {
    Never = 0,
    FirstFrame = 1,
    Start = 2,
    StartProgram = 3,
    LoadingPhasePostConfigInit = 4,
    LoadingPhasePreDefault = 5,
    LoadingPhaseDefault = 6,
    LoadingPhasePostDefault = 7,
    LoadingPhasePreLoadingScreen = 8,
    LoadingPhasePostEngineInit = 9,
    EWInstrumentedProfilerAutomatedResumeSettings_MAX = 10,
};
#pragma pack(pop)
