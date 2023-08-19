#include "FVector.hpp"
#include "USceneComponent.hpp"
#include "UWindAffectedComponent.hpp"
UWindAffectedComponent* UWindAffectedComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WindAffectedComponent");
    return (UWindAffectedComponent*)res;
}
