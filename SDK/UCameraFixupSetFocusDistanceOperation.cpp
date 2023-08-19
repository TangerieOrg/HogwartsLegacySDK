#include "UCameraFixupOperation.hpp"
#include "UCameraFixupSetFocusDistanceOperation.hpp"
#include "UFloatProvider.hpp"
#include "UTransformProvider.hpp"
UCameraFixupSetFocusDistanceOperation* UCameraFixupSetFocusDistanceOperation::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupSetFocusDistanceOperation");
    return (UCameraFixupSetFocusDistanceOperation*)res;
}
