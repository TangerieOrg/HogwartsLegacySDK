#pragma once
#include <cstdint>
#include "EDatasmithImportActorPolicy.hpp"
#include "EDatasmithImportAssetConflictPolicy.hpp"
#include "EDatasmithImportMaterialQuality.hpp"
#include "EDatasmithImportSearchPackagePolicy.hpp"
#include "FDatasmithImportBaseOptions.hpp"
#include "FDatasmithReimportOptions.hpp"
#include "UDatasmithOptionsBase.hpp"
#pragma pack(push, 1)
class UDatasmithImportOptions : public UDatasmithOptionsBase {
public:
    EDatasmithImportSearchPackagePolicy SearchPackagePolicy; // 0x28
    EDatasmithImportAssetConflictPolicy MaterialConflictPolicy; // 0x29
    EDatasmithImportAssetConflictPolicy TextureConflictPolicy; // 0x2a
    EDatasmithImportActorPolicy StaticMeshActorImportPolicy; // 0x2b
    EDatasmithImportActorPolicy LightImportPolicy; // 0x2c
    EDatasmithImportActorPolicy CameraImportPolicy; // 0x2d
    EDatasmithImportActorPolicy OtherActorImportPolicy; // 0x2e
    EDatasmithImportMaterialQuality MaterialQuality; // 0x2f
    FDatasmithImportBaseOptions BaseOptions; // 0x30
    FDatasmithReimportOptions ReimportOptions; // 0x44
    char pad_46[0x2];
    FString Filename; // 0x48
    FString FilePath; // 0x58
    char pad_68[0x8];
    static UDatasmithImportOptions* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
