#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkeletalMeshGeoImportVersions {
    Before_Versionning = 0,
    SkeletalMeshBuildRefactor = 1,
    VersionPlusOne = 2,
    LatestVersion = 1,
    ESkeletalMeshGeoImportVersions_MAX = 3,
};
#pragma pack(pop)
