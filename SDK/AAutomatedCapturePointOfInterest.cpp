#include "AAutomatedCapturePointOfInterest.hpp"
#include "ANavigationObjectBase.hpp"
AAutomatedCapturePointOfInterest* AAutomatedCapturePointOfInterest::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AutomatedCapturePointOfInterest");
    return (AAutomatedCapturePointOfInterest*)res;
}
