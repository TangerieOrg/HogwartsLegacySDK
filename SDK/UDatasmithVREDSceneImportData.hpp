#pragma once
#include <cstdint>
#include "UDatasmithFBXSceneImportData.hpp"
#pragma pack(push, 1)
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData {
public:
    bool bMergeNodes; // 0x48
    bool bOptimizeDuplicatedNodes; // 0x49
    bool bImportMats; // 0x4a
    char pad_4b[0x5];
    FString MatsPath; // 0x50
    bool bImportVar; // 0x60
    bool bCleanVar; // 0x61
    char pad_62[0x6];
    FString VarPath; // 0x68
    bool bImportLightInfo; // 0x78
    char pad_79[0x7];
    FString LightInfoPath; // 0x80
    bool bImportClipInfo; // 0x90
    char pad_91[0x7];
    FString ClipInfoPath; // 0x98
    static UDatasmithVREDSceneImportData* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
