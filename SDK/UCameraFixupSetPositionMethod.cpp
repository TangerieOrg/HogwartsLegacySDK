#include "UCameraFixupSetPositionMethod.hpp"
#include "UObject.hpp"
UCameraFixupSetPositionMethod* UCameraFixupSetPositionMethod::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupSetPositionMethod");
    return (UCameraFixupSetPositionMethod*)res;
}
