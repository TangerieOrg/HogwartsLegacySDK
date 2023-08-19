#include "FProceduralFoliageInstance.hpp"
#include "UObject.hpp"
#include "UProceduralFoliageSpawner.hpp"
#include "UProceduralFoliageTile.hpp"
UProceduralFoliageTile* UProceduralFoliageTile::StaticClass() {
    static auto res = find_uobject("Class /Script/Foliage.ProceduralFoliageTile");
    return (UProceduralFoliageTile*)res;
}
