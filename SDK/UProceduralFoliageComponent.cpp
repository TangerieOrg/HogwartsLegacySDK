#include "AVolume.hpp"
#include "FGuid.hpp"
#include "UActorComponent.hpp"
#include "UProceduralFoliageComponent.hpp"
#include "UProceduralFoliageSpawner.hpp"
UProceduralFoliageComponent* UProceduralFoliageComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Foliage.ProceduralFoliageComponent");
    return (UProceduralFoliageComponent*)res;
}
