#pragma once
#include <cstdint>
#include "FDatasmithMeshBuildSettingsTemplate.hpp"
#include "FDatasmithMeshSectionInfoMapTemplate.hpp"
#include "FDatasmithStaticMaterialTemplate.hpp"
#include "UDatasmithObjectTemplate.hpp"
#pragma pack(push, 1)
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate {
public:
    FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x30
    int32_t LightMapCoordinateIndex; // 0x80
    int32_t LightMapResolution; // 0x84
    TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x88
    TArray<FDatasmithStaticMaterialTemplate> StaticMaterials; // 0x98
    static UDatasmithStaticMeshTemplate* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
