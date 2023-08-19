#pragma once
#include <cstdint>
#include "FHierarchicalSimplification.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UHierarchicalLODSetup : public UObject {
public:
    TArray<FHierarchicalSimplification> HierarchicalLODSetup; // 0x28
    char pad_38[0x28];
    static UHierarchicalLODSetup* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
