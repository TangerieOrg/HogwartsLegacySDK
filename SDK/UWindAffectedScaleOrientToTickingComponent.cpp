#include "FWindAffectedScales.hpp"
#include "UWindAffectedOrientToTickingComponent.hpp"
#include "UWindAffectedScaleOrientToTickingComponent.hpp"
UWindAffectedScaleOrientToTickingComponent* UWindAffectedScaleOrientToTickingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindAffectedScaleOrientToTickingComponent");
    return (UWindAffectedScaleOrientToTickingComponent*)res;
}
