#pragma once
#include <cstdint>
#include "FPrimitiveMaterialRef.hpp"
#include "UInterpTrackInst.hpp"
class UMaterialInstanceDynamic;
class UInterpTrackFloatMaterialParam;
#pragma pack(push, 1)
class UInterpTrackInstFloatMaterialParam : public UInterpTrackInst {
public:
    TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
    TArray<float> ResetFloats; // 0x38
    TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
    UInterpTrackFloatMaterialParam* InstancedTrack; // 0x58
    static UInterpTrackInstFloatMaterialParam* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
