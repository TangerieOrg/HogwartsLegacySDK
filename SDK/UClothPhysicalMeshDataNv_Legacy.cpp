#include "UClothPhysicalMeshDataBase_Legacy.hpp"
#include "UClothPhysicalMeshDataNv_Legacy.hpp"
UClothPhysicalMeshDataNv_Legacy* UClothPhysicalMeshDataNv_Legacy::StaticClass() {
    static auto res = find_uobject("Class /Script/ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy");
    return (UClothPhysicalMeshDataNv_Legacy*)res;
}
