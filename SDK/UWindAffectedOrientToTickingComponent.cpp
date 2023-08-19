#include "UWindAffectedOrientToTickingComponent.hpp"
#include "UWindAffectedTickingComponent.hpp"
UWindAffectedOrientToTickingComponent* UWindAffectedOrientToTickingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindAffectedOrientToTickingComponent");
    return (UWindAffectedOrientToTickingComponent*)res;
}
