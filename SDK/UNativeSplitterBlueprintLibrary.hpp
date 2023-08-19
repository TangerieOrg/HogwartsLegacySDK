#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UStaticMeshComponent;
class UActorComponent;
#pragma pack(push, 1)
class UNativeSplitterBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UNativeSplitterBlueprintLibrary* StaticClass();
    static bool RequiresOverrideVertexColorsFixup(UStaticMeshComponent* StaticMeshComponent);
    static bool RemoveInstanceVertexColorsFromLOD(UStaticMeshComponent* StaticMeshComponent, int32_t LODToRemoveColorsFrom);
    static bool RemoveInstanceVertexColors(UStaticMeshComponent* StaticMeshComponent);
    static bool FixupOverrideColorsIfNecessary(UStaticMeshComponent* StaticMeshComponent, bool bRebuildingStaticMesh);
    static bool CopyProperties(UActorComponent* SourceComponent, UActorComponent* TargetComponent);
    static bool CopyInstanceVertexColorsIfCompatible(UStaticMeshComponent* SourceComponent, UStaticMeshComponent* TargetComponent);
    static bool CachePaintedDataIfNecessary(UStaticMeshComponent* StaticMeshComponent);
}; // Size: 0x28
#pragma pack(pop)
