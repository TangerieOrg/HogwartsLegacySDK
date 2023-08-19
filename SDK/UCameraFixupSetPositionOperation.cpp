#include "UCameraFixupOperation.hpp"
#include "UCameraFixupSetPositionMethod.hpp"
#include "UCameraFixupSetPositionOperation.hpp"
UCameraFixupSetPositionOperation* UCameraFixupSetPositionOperation::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupSetPositionOperation");
    return (UCameraFixupSetPositionOperation*)res;
}
