#include "FVector.hpp"
#include "UCameraFixupSetPositionMethod.hpp"
#include "UCameraFixupSetPositionXYZMethod.hpp"
#include "UTransformProvider.hpp"
#include "UVectorProvider.hpp"
UCameraFixupSetPositionXYZMethod* UCameraFixupSetPositionXYZMethod::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupSetPositionXYZMethod");
    return (UCameraFixupSetPositionXYZMethod*)res;
}
