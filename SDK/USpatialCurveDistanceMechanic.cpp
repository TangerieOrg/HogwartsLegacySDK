#include "UInteractionMechanic.hpp"
#include "USpatialCurveDistanceMechanic.hpp"
USpatialCurveDistanceMechanic* USpatialCurveDistanceMechanic::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.SpatialCurveDistanceMechanic");
    return (USpatialCurveDistanceMechanic*)res;
}
