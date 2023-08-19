#pragma once
#include <cstdint>
#include "UObject.hpp"
class UModel;
#pragma pack(push, 1)
class ULightmappedSurfaceCollection : public UObject {
public:
    UModel* SourceModel; // 0x28
    TArray<int32_t> Surfaces; // 0x30
    static ULightmappedSurfaceCollection* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
