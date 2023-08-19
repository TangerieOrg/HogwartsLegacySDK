#include "UActorComponent.hpp"
#include "UPT_Progression.hpp"
#include "UProgressionComponent.hpp"
UProgressionComponent* UProgressionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Progression.ProgressionComponent");
    return (UProgressionComponent*)res;
}
