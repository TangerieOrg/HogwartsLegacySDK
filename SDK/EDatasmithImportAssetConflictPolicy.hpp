#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDatasmithImportAssetConflictPolicy : uint8_t {
    Replace = 0,
    Update = 1,
    Use = 2,
    Ignore = 3,
    EDatasmithImportAssetConflictPolicy_MAX = 4,
};
#pragma pack(pop)
