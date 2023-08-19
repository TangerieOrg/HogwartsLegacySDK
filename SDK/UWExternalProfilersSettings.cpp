#include "EWInstrumentedProfilerAutomatedResumeSettings.hpp"
#include "FWInstrumentedProfilerCategoryAvailability.hpp"
#include "UObject.hpp"
#include "UWExternalProfilersSettings.hpp"
UWExternalProfilersSettings* UWExternalProfilersSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/WInstrumentedProfilersSettings.WExternalProfilersSettings");
    return (UWExternalProfilersSettings*)res;
}
