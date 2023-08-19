#include "UCameraFixupOperation.hpp"
#include "UObject.hpp"
UCameraFixupOperation* UCameraFixupOperation::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupOperation");
    return (UCameraFixupOperation*)res;
}
