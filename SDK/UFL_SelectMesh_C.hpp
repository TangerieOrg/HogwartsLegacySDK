#pragma once
#include <cstdint>
#include "FMeshList.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UStaticMeshComponent;
#pragma pack(push, 1)
class UFL_SelectMesh_C : public UBlueprintFunctionLibrary {
public:
    static UFL_SelectMesh_C* StaticClass();
    static void SelectMesh(UStaticMeshComponent* StaticMesh, int32_t PropIndex, FMeshList Props);
}; // Size: 0x28
#pragma pack(pop)
