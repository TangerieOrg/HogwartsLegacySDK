#include "FAnimationSharingScalability.hpp"
#include "FPerSkeletonAnimationSharingSetup.hpp"
#include "UAnimationSharingSetup.hpp"
#include "UObject.hpp"
UAnimationSharingSetup* UAnimationSharingSetup::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationSharing.AnimationSharingSetup");
    return (UAnimationSharingSetup*)res;
}
