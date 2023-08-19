#pragma once
#include <cstdint>
#include "FDirectoryPath.hpp"
#pragma pack(push, 1)
struct FBuildPromotionNewProjectSettings {
    FDirectoryPath NewProjectFolderOverride; // 0x0
    FString NewProjectNameOverride; // 0x10
}; // Size: 0x20
#pragma pack(pop)
