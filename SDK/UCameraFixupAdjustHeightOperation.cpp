#include "UCameraFixupAdjustHeightOperation.hpp"
#include "UCameraFixupOperation.hpp"
#include "UFloatProvider.hpp"
#include "UTransformProvider.hpp"
UCameraFixupAdjustHeightOperation* UCameraFixupAdjustHeightOperation::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupAdjustHeightOperation");
    return (UCameraFixupAdjustHeightOperation*)res;
}
