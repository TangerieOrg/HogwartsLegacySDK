#pragma once
#include <cstdint>
#include "FCPXMLExportDataSource.hpp"
#include "UMoviePipelineOutputBase.hpp"
#pragma pack(push, 1)
class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase {
public:
    char pad_48[0x8];
    FString FileNameFormatOverride; // 0x50
    FCPXMLExportDataSource DataSource; // 0x60
    char pad_61[0x1f];
    static UMoviePipelineFCPXMLExporter* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
