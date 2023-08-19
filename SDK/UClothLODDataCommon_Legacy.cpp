#include "FClothCollisionData.hpp"
#include "FClothPhysicalMeshData.hpp"
#include "UClothLODDataCommon_Legacy.hpp"
#include "UClothPhysicalMeshDataBase_Legacy.hpp"
#include "UObject.hpp"
UClothLODDataCommon_Legacy* UClothLODDataCommon_Legacy::StaticClass() {
    static auto res = find_uobject("Class /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy");
    return (UClothLODDataCommon_Legacy*)res;
}
