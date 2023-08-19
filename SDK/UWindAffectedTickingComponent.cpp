#include "UWindAffectedComponent.hpp"
#include "UWindAffectedTickingComponent.hpp"
UWindAffectedTickingComponent* UWindAffectedTickingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindAffectedTickingComponent");
    return (UWindAffectedTickingComponent*)res;
}
