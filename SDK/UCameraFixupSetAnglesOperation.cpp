#include "UCameraFixupOperation.hpp"
#include "UCameraFixupSetAnglesOperation.hpp"
#include "UFloatProvider.hpp"
UCameraFixupSetAnglesOperation* UCameraFixupSetAnglesOperation::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupSetAnglesOperation");
    return (UCameraFixupSetAnglesOperation*)res;
}
