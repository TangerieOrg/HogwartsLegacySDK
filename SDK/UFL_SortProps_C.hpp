#pragma once
#include <cstdint>
#include "EEnvironment\Type.hpp"
#include "FPropList.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UStaticMeshComponent;
#pragma pack(push, 1)
class UFL_SortProps_C : public UBlueprintFunctionLibrary {
public:
    static UFL_SortProps_C* StaticClass();
    static void PropSort(UStaticMeshComponent* StaticMesh, EEnvironment::Type Environment, int32_t PropIndex, FPropList Props);
}; // Size: 0x28
#pragma pack(pop)
