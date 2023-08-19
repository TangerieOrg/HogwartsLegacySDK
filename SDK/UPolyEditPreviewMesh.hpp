#pragma once
#include <cstdint>
#include "UPreviewMesh.hpp"
#pragma pack(push, 1)
class UPolyEditPreviewMesh : public UPreviewMesh {
public:
    char pad_e0[0x3f0];
    static UPolyEditPreviewMesh* StaticClass();
}; // Size: 0x4d0
#pragma pack(pop)
