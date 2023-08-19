#include "FPhysicalAnimationProfile.hpp"
#include "UBodySetup.hpp"
#include "USkeletalBodySetup.hpp"
USkeletalBodySetup* USkeletalBodySetup::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SkeletalBodySetup");
    return (USkeletalBodySetup*)res;
}
