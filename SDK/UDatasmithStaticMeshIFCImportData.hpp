#pragma once
#include <cstdint>
#include "UDatasmithStaticMeshImportData.hpp"
#pragma pack(push, 1)
class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData {
public:
    FString SourceGlobalId; // 0x28
    static UDatasmithStaticMeshIFCImportData* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
