#include "UActorComponent.hpp"
#include "UVRNotificationsComponent.hpp"
UVRNotificationsComponent* UVRNotificationsComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/HeadMountedDisplay.VRNotificationsComponent");
    return (UVRNotificationsComponent*)res;
}
