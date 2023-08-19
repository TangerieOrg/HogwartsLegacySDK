#include "UObjectProvider.hpp"
#include "UPoseGroupProvider.hpp"
UPoseGroupProvider* UPoseGroupProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.PoseGroupProvider");
    return (UPoseGroupProvider*)res;
}
