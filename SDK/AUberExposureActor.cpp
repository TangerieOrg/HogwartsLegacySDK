#include "AActor.hpp"
#include "AUberExposureActor.hpp"
#include "UUberExposureComponent.hpp"
AUberExposureActor* AUberExposureActor::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.UberExposureActor");
    return (AUberExposureActor*)res;
}
