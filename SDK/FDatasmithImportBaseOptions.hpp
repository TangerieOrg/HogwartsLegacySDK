#pragma once
#include <cstdint>
#include "EDatasmithImportScene.hpp"
#include "FDatasmithAssetImportOptions.hpp"
#include "FDatasmithStaticMeshImportOptions.hpp"
#pragma pack(push, 1)
struct FDatasmithImportBaseOptions {
    EDatasmithImportScene SceneHandling; // 0x0
    bool bIncludeGeometry; // 0x1
    bool bIncludeMaterial; // 0x2
    bool bIncludeLight; // 0x3
    bool bIncludeCamera; // 0x4
    bool bIncludeAnimation; // 0x5
    char pad_6[0x2];
    FDatasmithAssetImportOptions AssetOptions; // 0x8
    FDatasmithStaticMeshImportOptions StaticMeshOptions; // 0x10
}; // Size: 0x14
#pragma pack(pop)
