#include "FOrientToSlerp.hpp"
#include "FVector.hpp"
#include "UPointAtActorBaseComponent.hpp"
#include "UPointAtComponent.hpp"
UPointAtActorBaseComponent* UPointAtActorBaseComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PointAtActorBaseComponent");
    return (UPointAtActorBaseComponent*)res;
}
