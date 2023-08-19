#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDatasmithImportScene : uint8_t {
    NewLevel = 0,
    CurrentLevel = 1,
    AssetsOnly = 2,
    EDatasmithImportScene_MAX = 3,
};
#pragma pack(pop)
