#pragma once
#include <cstdint>
#include "UDatasmithFBXSceneImportData.hpp"
#pragma pack(push, 1)
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData {
public:
    bool bMergeNodes; // 0x48
    bool bOptimizeDuplicatedNodes; // 0x49
    bool bRemoveInvisibleNodes; // 0x4a
    bool bSimplifyNodeHierarchy; // 0x4b
    bool bImportVar; // 0x4c
    char pad_4d[0x3];
    FString VarPath; // 0x50
    bool bImportPos; // 0x60
    char pad_61[0x7];
    FString PosPath; // 0x68
    bool bImportTml; // 0x78
    char pad_79[0x7];
    FString TmlPath; // 0x80
    static UDatasmithDeltaGenSceneImportData* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
