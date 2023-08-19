#include "UARTrackableNotifyComponent.hpp"
#include "UActorComponent.hpp"
UARTrackableNotifyComponent* UARTrackableNotifyComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARTrackableNotifyComponent");
    return (UARTrackableNotifyComponent*)res;
}
