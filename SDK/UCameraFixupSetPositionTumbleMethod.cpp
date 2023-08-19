#include "UCameraFixupSetPositionMethod.hpp"
#include "UCameraFixupSetPositionTumbleMethod.hpp"
#include "UFloatProvider.hpp"
#include "UTransformProvider.hpp"
UCameraFixupSetPositionTumbleMethod* UCameraFixupSetPositionTumbleMethod::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupSetPositionTumbleMethod");
    return (UCameraFixupSetPositionTumbleMethod*)res;
}
