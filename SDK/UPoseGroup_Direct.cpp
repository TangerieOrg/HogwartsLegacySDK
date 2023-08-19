#include "UPoseGroup.hpp"
#include "UPoseGroupProvider.hpp"
#include "UPoseGroup_Direct.hpp"
UPoseGroup_Direct* UPoseGroup_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.PoseGroup_Direct");
    return (UPoseGroup_Direct*)res;
}
