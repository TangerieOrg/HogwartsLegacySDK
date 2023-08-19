#pragma once
#include <cstdint>
#include "UDatasmithStaticMeshImportData.hpp"
#pragma pack(push, 1)
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData {
public:
    FString SourceMeshName; // 0x28
    static UDatasmithStaticMeshGLTFImportData* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
