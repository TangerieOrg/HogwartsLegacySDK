#include "EFollowCameraType.hpp"
#include "UActorComponent.hpp"
#include "UFollowCameraComponent.hpp"
UFollowCameraComponent* UFollowCameraComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FollowCameraComponent");
    return (UFollowCameraComponent*)res;
}
