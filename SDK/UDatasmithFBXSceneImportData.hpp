#pragma once
#include <cstdint>
#include "UDatasmithSceneImportData.hpp"
#pragma pack(push, 1)
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData {
public:
    bool bGenerateLightmapUVs; // 0x28
    char pad_29[0x7];
    FString TexturesDir; // 0x30
    uint8_t IntermediateSerialization; // 0x40
    bool bColorizeMaterials; // 0x41
    char pad_42[0x6];
    static UDatasmithFBXSceneImportData* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
