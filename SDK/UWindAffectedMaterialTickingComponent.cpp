#include "FWindAffectedParameters.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UWindAffectedMaterialTickingComponent.hpp"
#include "UWindAffectedTickingComponent.hpp"
UWindAffectedMaterialTickingComponent* UWindAffectedMaterialTickingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindAffectedMaterialTickingComponent");
    return (UWindAffectedMaterialTickingComponent*)res;
}
