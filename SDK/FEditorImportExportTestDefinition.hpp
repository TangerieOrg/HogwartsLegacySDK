#pragma once
#include <cstdint>
#include "FFilePath.hpp"
#include "FImportFactorySettingValues.hpp"
#pragma pack(push, 1)
struct FEditorImportExportTestDefinition {
    FFilePath ImportFilePath; // 0x0
    FString ExportFileExtension; // 0x10
    bool bSkipExport; // 0x20
    char pad_21[0x7];
    TArray<FImportFactorySettingValues> FactorySettings; // 0x28
}; // Size: 0x38
#pragma pack(pop)
