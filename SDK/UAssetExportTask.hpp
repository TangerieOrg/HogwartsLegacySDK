#pragma once
#include <cstdint>
#include "UObject.hpp"
class UExporter;
#pragma pack(push, 1)
class UAssetExportTask : public UObject {
public:
    UObject* Object; // 0x28
    UExporter* Exporter; // 0x30
    FString Filename; // 0x38
    bool bSelected; // 0x48
    bool bReplaceIdentical; // 0x49
    bool bPrompt; // 0x4a
    bool bAutomated; // 0x4b
    bool bUseFileArchive; // 0x4c
    bool bWriteEmptyFiles; // 0x4d
    char pad_4e[0x2];
    TArray<UObject*> IgnoreObjectList; // 0x50
    UObject* OPTIONS; // 0x60
    TArray<FString> Errors; // 0x68
    static UAssetExportTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
