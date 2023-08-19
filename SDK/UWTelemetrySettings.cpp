#include "EWInstrumentedProfilerAutomatedResumeSettings.hpp"
#include "FWInstrumentedProfilerCategoryAvailability.hpp"
#include "UObject.hpp"
#include "UWTelemetrySettings.hpp"
UWTelemetrySettings* UWTelemetrySettings::StaticClass() {
    static auto res = find_uobject("Class /Script/WInstrumentedProfilersSettings.WTelemetrySettings");
    return (UWTelemetrySettings*)res;
}
