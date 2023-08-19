#include "UCameraFixupAimWithPivotOperation.hpp"
#include "UCameraFixupOperation.hpp"
#include "UFloatProvider.hpp"
#include "UTransformProvider.hpp"
UCameraFixupAimWithPivotOperation* UCameraFixupAimWithPivotOperation::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupAimWithPivotOperation");
    return (UCameraFixupAimWithPivotOperation*)res;
}
