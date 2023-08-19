#pragma once
#include <cstdint>
#include "UObject.hpp"
class UClass;
class UAssetExportTask;
#pragma pack(push, 1)
class UExporter : public UObject {
public:
    UClass* SupportedClass; // 0x28
    UObject* ExportRootScope; // 0x30
    TArray<FString> FormatExtension; // 0x38
    TArray<FString> FormatDescription; // 0x48
    int32_t PreferredFormatIndex; // 0x58
    int32_t TextIndent; // 0x5c
    uint8_t bText : 1; // 0x60
    uint8_t bSelectedOnly : 1; // 0x60
    uint8_t bForceFileOperations : 1; // 0x60
    uint8_t pad_bitfield_60_3 : 5;
    char pad_61[0x7];
    UAssetExportTask* ExportTask; // 0x68
    char pad_70[0x8];
    static UExporter* StaticClass();
    bool ScriptRunAssetExportTask(UAssetExportTask* Task);
    static bool RunAssetExportTasks(TArray<UAssetExportTask*>& ExportTasks);
    static bool RunAssetExportTask(UAssetExportTask* Task);
}; // Size: 0x78
#pragma pack(pop)
