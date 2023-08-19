#include "UActorProvider.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_FromAttachParentActor.hpp"
UTransform_FromAttachParentActor* UTransform_FromAttachParentActor::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_FromAttachParentActor");
    return (UTransform_FromAttachParentActor*)res;
}
