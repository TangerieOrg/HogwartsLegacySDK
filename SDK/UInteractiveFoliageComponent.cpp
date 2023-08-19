#include "UInteractiveFoliageComponent.hpp"
#include "UStaticMeshComponent.hpp"
UInteractiveFoliageComponent* UInteractiveFoliageComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Foliage.InteractiveFoliageComponent");
    return (UInteractiveFoliageComponent*)res;
}
