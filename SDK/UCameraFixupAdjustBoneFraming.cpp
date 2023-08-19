#include "UCameraFixupAdjustBoneFraming.hpp"
#include "UCameraFixupOperation.hpp"
#include "UFloatProvider.hpp"
#include "UTransformProvider.hpp"
UCameraFixupAdjustBoneFraming* UCameraFixupAdjustBoneFraming::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraFixupAdjustBoneFraming");
    return (UCameraFixupAdjustBoneFraming*)res;
}
