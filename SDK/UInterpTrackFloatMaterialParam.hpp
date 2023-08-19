#pragma once
#include <cstdint>
#include "UInterpTrackFloatBase.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class UInterpTrackFloatMaterialParam : public UInterpTrackFloatBase {
public:
    TArray<UMaterialInterface*> TargetMaterials; // 0x90
    FName ParamName; // 0xa0
    static UInterpTrackFloatMaterialParam* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
