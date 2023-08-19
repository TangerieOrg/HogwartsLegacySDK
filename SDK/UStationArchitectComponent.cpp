#include "UBaseArchitectComponent.hpp"
#include "UStationArchitectComponent.hpp"
UStationArchitectComponent* UStationArchitectComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.StationArchitectComponent");
    return (UStationArchitectComponent*)res;
}
