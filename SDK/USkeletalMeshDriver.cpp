#include "UInterface.hpp"
#include "USkeletalMeshDriver.hpp"
USkeletalMeshDriver* USkeletalMeshDriver::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SkeletalMeshDriver");
    return (USkeletalMeshDriver*)res;
}
