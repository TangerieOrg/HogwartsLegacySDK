#pragma once
#include <cstdint>
#include "EDatasmithImportLightmapMax.hpp"
#include "EDatasmithImportLightmapMin.hpp"
#pragma pack(push, 1)
struct FDatasmithStaticMeshImportOptions {
    EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
    EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
    bool bGenerateLightmapUVs; // 0x2
    bool bRemoveDegenerates; // 0x3
}; // Size: 0x4
#pragma pack(pop)
