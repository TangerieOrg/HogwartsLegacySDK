#pragma once
#include <cstdint>
#include "UObject.hpp"
class UPrimitiveComponent;
class UEditableMesh;
#pragma pack(push, 1)
class UEditableMeshFactory : public UObject {
public:
    static UEditableMeshFactory* StaticClass();
    static UEditableMesh* MakeEditableMesh(UPrimitiveComponent* PrimitiveComponent, int32_t LODIndex);
}; // Size: 0x28
#pragma pack(pop)
