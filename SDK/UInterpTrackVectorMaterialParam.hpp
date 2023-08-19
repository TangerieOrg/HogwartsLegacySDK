#pragma once
#include <cstdint>
#include "UInterpTrackVectorBase.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class UInterpTrackVectorMaterialParam : public UInterpTrackVectorBase {
public:
    TArray<UMaterialInterface*> TargetMaterials; // 0x90
    FName ParamName; // 0xa0
    static UInterpTrackVectorMaterialParam* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
