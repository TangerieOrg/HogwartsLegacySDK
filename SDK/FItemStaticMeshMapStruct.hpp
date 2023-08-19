#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
class UStaticMesh;
#pragma pack(push, 1)
struct FItemStaticMeshMapStruct : public FTableRowBase {
    UStaticMesh* StaticMesh; // 0x8
}; // Size: 0x10
#pragma pack(pop)
