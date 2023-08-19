#include "UChildActorComponent.hpp"
#include "UStreamingPreviewChildActorComponent.hpp"
UStreamingPreviewChildActorComponent* UStreamingPreviewChildActorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StreamingPreviewChildActorComponent");
    return (UStreamingPreviewChildActorComponent*)res;
}
