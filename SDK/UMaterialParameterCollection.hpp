#pragma once
#include <cstdint>
#include "FCollectionScalarParameter.hpp"
#include "FCollectionVectorParameter.hpp"
#include "FGuid.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMaterialParameterCollection : public UObject {
public:
    FGuid StateId; // 0x28
    TArray<FCollectionScalarParameter> ScalarParameters; // 0x38
    TArray<FCollectionVectorParameter> VectorParameters; // 0x48
    char pad_58[0x18];
    static UMaterialParameterCollection* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
