#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDayNightReportEmissiveAdaptation {
    EmissiveAdaptationMinExposure = 0,
    EmissiveAdaptationMaxExposure = 1,
    EmissiveAdaptationTargetExposureEV = 2,
    EmissiveAdaptationFinalMultiplier = 3,
    EmissiveAdaptationOutdoorsDayTime = 4,
    EmissiveAdaptationEnabled = 5,
    EDayNightReportEmissiveAdaptation_MAX = 6,
};
#pragma pack(pop)
