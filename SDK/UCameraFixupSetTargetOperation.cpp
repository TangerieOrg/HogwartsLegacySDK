#include "UCameraFixupOperation.hpp"
#include "UCameraFixupSetTargetOperation.hpp"
#include "UTransformProvider.hpp"
UCameraFixupSetTargetOperation* UCameraFixupSetTargetOperation::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupSetTargetOperation");
    return (UCameraFixupSetTargetOperation*)res;
}
