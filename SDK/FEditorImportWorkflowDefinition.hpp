#pragma once
#include <cstdint>
#include "FFilePath.hpp"
#include "FImportFactorySettingValues.hpp"
#pragma pack(push, 1)
struct FEditorImportWorkflowDefinition {
    FFilePath ImportFilePath; // 0x0
    TArray<FImportFactorySettingValues> FactorySettings; // 0x10
}; // Size: 0x20
#pragma pack(pop)
