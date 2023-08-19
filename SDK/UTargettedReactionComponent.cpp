#include "FGameplayTagContainer.hpp"
#include "UActorComponent.hpp"
#include "UTargettedReactionComponent.hpp"
UTargettedReactionComponent* UTargettedReactionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TargettedReactionComponent");
    return (UTargettedReactionComponent*)res;
}
