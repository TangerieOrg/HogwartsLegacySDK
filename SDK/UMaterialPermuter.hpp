#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UMeshComponent;
class UMaterialInterface;
class UObject;
class AActor;
#pragma pack(push, 1)
class UMaterialPermuter : public UBlueprintFunctionLibrary {
public:
    static UMaterialPermuter* StaticClass();
    static void MaterialPermuterSetBaseMaterial(UMeshComponent* Mesh, int32_t Index, UMaterialInterface* Material, bool& Success);
    static void MaterialPermuterPrepareSetBaseMaterials(UMeshComponent* Mesh, bool& Success);
    static void MaterialPermuterIsMeshSwapped(UMeshComponent* Mesh, bool& bIsSwapped);
    static void MaterialPermuterGetMeshSwapOwner(UMeshComponent* Mesh, UObject*& SwapOwner);
    static void MaterialPermuterClearMeshSwap(UMeshComponent* Mesh, bool& bSuccess);
    static void MaterialPermuterClearAllSwaps(AActor* Actor, bool& bSuccess);
}; // Size: 0x28
#pragma pack(pop)
