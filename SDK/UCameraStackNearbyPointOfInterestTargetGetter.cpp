#include "UCameraStackNearbyPointOfInterestTargetGetter.hpp"
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
UCameraStackNearbyPointOfInterestTargetGetter* UCameraStackNearbyPointOfInterestTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackNearbyPointOfInterestTargetGetter");
    return (UCameraStackNearbyPointOfInterestTargetGetter*)res;
}
