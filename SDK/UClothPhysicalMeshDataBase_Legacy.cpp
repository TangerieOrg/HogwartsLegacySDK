#include "FClothVertBoneData.hpp"
#include "FVector.hpp"
#include "UClothPhysicalMeshDataBase_Legacy.hpp"
#include "UObject.hpp"
UClothPhysicalMeshDataBase_Legacy* UClothPhysicalMeshDataBase_Legacy::StaticClass() {
    static auto res = find_uobject("Class /Script/ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy");
    return (UClothPhysicalMeshDataBase_Legacy*)res;
}
