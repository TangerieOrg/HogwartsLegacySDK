#include "UActorComponent.hpp"
#include "UMountStreamingComponent.hpp"
UMountStreamingComponent* UMountStreamingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MountStreamingComponent");
    return (UMountStreamingComponent*)res;
}
