#include "UAnimInstance.hpp"
#include "UAnimSharingAdditiveInstance.hpp"
UAnimSharingAdditiveInstance* UAnimSharingAdditiveInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationSharing.AnimSharingAdditiveInstance");
    return (UAnimSharingAdditiveInstance*)res;
}
