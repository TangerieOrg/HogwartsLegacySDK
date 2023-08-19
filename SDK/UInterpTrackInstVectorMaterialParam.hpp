#pragma once
#include <cstdint>
#include "FPrimitiveMaterialRef.hpp"
#include "FVector.hpp"
#include "UInterpTrackInst.hpp"
class UMaterialInstanceDynamic;
class UInterpTrackVectorMaterialParam;
#pragma pack(push, 1)
class UInterpTrackInstVectorMaterialParam : public UInterpTrackInst {
public:
    TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
    TArray<FVector> ResetVectors; // 0x38
    TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
    UInterpTrackVectorMaterialParam* InstancedTrack; // 0x58
    static UInterpTrackInstVectorMaterialParam* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
