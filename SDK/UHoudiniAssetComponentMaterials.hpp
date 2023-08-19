#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UHoudiniAssetComponentMaterials : public UObject {
public:
    char pad_28[0xa8];
    static UHoudiniAssetComponentMaterials* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
