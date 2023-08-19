#include "AProceduralFoliageVolume.hpp"
#include "AVolume.hpp"
#include "UProceduralFoliageComponent.hpp"
AProceduralFoliageVolume* AProceduralFoliageVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Foliage.ProceduralFoliageVolume");
    return (AProceduralFoliageVolume*)res;
}
