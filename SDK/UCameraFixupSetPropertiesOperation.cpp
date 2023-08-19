#include "UCameraFixupOperation.hpp"
#include "UCameraFixupSetPropertiesOperation.hpp"
#include "UFloatProvider.hpp"
UCameraFixupSetPropertiesOperation* UCameraFixupSetPropertiesOperation::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupSetPropertiesOperation");
    return (UCameraFixupSetPropertiesOperation*)res;
}
