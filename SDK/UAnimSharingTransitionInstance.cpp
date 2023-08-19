#include "UAnimInstance.hpp"
#include "UAnimSharingTransitionInstance.hpp"
UAnimSharingTransitionInstance* UAnimSharingTransitionInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationSharing.AnimSharingTransitionInstance");
    return (UAnimSharingTransitionInstance*)res;
}
