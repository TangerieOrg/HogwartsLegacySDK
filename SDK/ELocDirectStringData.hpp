#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELocDirectStringData {
    identifierName = 0,
    stringType = 1,
    folderPath = 2,
    lastModified = 3,
    text = 4,
    language = 5,
    INVALID = 6,
    ELocDirectStringData_MAX = 7,
};
#pragma pack(pop)
