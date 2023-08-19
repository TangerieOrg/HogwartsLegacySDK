#include "FWindAffectedParameters.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UWindAffectedScaleOrientToTickingComponent.hpp"
#include "UWindAffectedUberTickingComponent.hpp"
UWindAffectedUberTickingComponent* UWindAffectedUberTickingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindAffectedUberTickingComponent");
    return (UWindAffectedUberTickingComponent*)res;
}
