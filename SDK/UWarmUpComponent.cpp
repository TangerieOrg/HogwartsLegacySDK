#include "UActorComponent.hpp"
#include "UWarmUpComponent.hpp"
UWarmUpComponent* UWarmUpComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.WarmUpComponent");
    return (UWarmUpComponent*)res;
}
