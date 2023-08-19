#pragma once
#include <cstdint>
#include "EWInstrumentedProfilerAutomatedResumeSettings.hpp"
#include "FWInstrumentedProfilerCategoryAvailability.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UWTelemetrySettings : public UObject {
public:
    EWInstrumentedProfilerAutomatedResumeSettings AutomatedResume; // 0x28
    bool bEnableTelemetry; // 0x2c
    char pad_2d[0x3];
    int32_t TelemetrySizeInKB; // 0x30
    char pad_34[0x4];
    FString ConnectionAddress; // 0x38
    TArray<FWInstrumentedProfilerCategoryAvailability> Categories; // 0x48
    bool bBreakOnMismatchedZone; // 0x58
    char pad_59[0x3];
    int32_t TelemetryMaxThreadCount; // 0x5c
    int32_t TelemetryMaxTimeSpanTrackCount; // 0x60
    bool bEnableContextSwitches; // 0x64
    bool bEnableMessages; // 0x65
    bool bEnableOutputDebugInfo; // 0x66
    bool bBreakOnWarning; // 0x67
    static UWTelemetrySettings* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
