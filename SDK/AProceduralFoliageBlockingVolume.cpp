#include "AProceduralFoliageBlockingVolume.hpp"
#include "AProceduralFoliageVolume.hpp"
#include "AVolume.hpp"
AProceduralFoliageBlockingVolume* AProceduralFoliageBlockingVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Foliage.ProceduralFoliageBlockingVolume");
    return (AProceduralFoliageBlockingVolume*)res;
}
