#pragma once
#include <cstdint>
#include "UObject.hpp"
class UMaterialParameterCollection;
#pragma pack(push, 1)
class UMaterialParameterCollectionInstance : public UObject {
public:
    char pad_28[0x8];
    UMaterialParameterCollection* Collection; // 0x30
    char pad_38[0xe8];
    static UMaterialParameterCollectionInstance* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
