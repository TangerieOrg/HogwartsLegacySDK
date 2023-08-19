#include "FTransform.hpp"
#include "USceneComponent.hpp"
#include "UUprightAttachSceneComponent.hpp"
UUprightAttachSceneComponent* UUprightAttachSceneComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.UprightAttachSceneComponent");
    return (UUprightAttachSceneComponent*)res;
}
