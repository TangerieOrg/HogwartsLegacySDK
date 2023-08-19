#pragma once
#include <cstdint>
#include "EWInstrumentedProfilerAutomatedResumeSettings.hpp"
#include "FWInstrumentedProfilerCategoryAvailability.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UWExternalProfilersSettings : public UObject {
public:
    EWInstrumentedProfilerAutomatedResumeSettings AutomatedResume; // 0x28
    char pad_2c[0x4];
    TArray<FWInstrumentedProfilerCategoryAvailability> Categories; // 0x30
    static UWExternalProfilersSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
