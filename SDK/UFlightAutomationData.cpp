#include "UActorComponent.hpp"
#include "UClass.hpp"
#include "UFlightAutomationData.hpp"
#include "UFlyingBroomPhysics.hpp"
UFlightAutomationData* UFlightAutomationData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlightAutomationData");
    return (UFlightAutomationData*)res;
}
