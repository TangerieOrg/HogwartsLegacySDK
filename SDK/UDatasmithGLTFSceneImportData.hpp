#pragma once
#include <cstdint>
#include "UDatasmithSceneImportData.hpp"
#pragma pack(push, 1)
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData {
public:
    FString Generator; // 0x28
    float Version; // 0x38
    char pad_3c[0x4];
    FString Author; // 0x40
    FString License; // 0x50
    FString Source; // 0x60
    static UDatasmithGLTFSceneImportData* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
