#include "FTimeRigCoordinate.hpp"
#include "UFloatProvider.hpp"
#include "UFloat_TimeRigCoordinate.hpp"
UFloat_TimeRigCoordinate* UFloat_TimeRigCoordinate::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Float_TimeRigCoordinate");
    return (UFloat_TimeRigCoordinate*)res;
}
