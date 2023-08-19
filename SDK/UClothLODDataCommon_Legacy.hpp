#pragma once
#include <cstdint>
#include "FClothCollisionData.hpp"
#include "FClothPhysicalMeshData.hpp"
#include "UObject.hpp"
class UClothPhysicalMeshDataBase_Legacy;
#pragma pack(push, 1)
class UClothLODDataCommon_Legacy : public UObject {
public:
    UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x28
    FClothPhysicalMeshData ClothPhysicalMeshData; // 0x30
    FClothCollisionData CollisionData; // 0x108
    char pad_148[0x20];
    static UClothLODDataCommon_Legacy* StaticClass();
}; // Size: 0x168
#pragma pack(pop)
