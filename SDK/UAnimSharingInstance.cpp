#include "AActor.hpp"
#include "UAnimSequence.hpp"
#include "UAnimSharingInstance.hpp"
#include "UAnimationSharingStateProcessor.hpp"
#include "UEnum.hpp"
#include "UObject.hpp"
UAnimSharingInstance* UAnimSharingInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationSharing.AnimSharingInstance");
    return (UAnimSharingInstance*)res;
}
