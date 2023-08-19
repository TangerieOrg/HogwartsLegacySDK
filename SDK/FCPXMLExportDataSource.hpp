#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class FCPXMLExportDataSource : uint8_t {
    OutputMetadata = 0,
    SequenceData = 1,
    FCPXMLExportDataSource_MAX = 2,
};
#pragma pack(pop)
