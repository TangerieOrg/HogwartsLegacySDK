#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EConversationImport : int8_t {
    ImportFromArticy = 0,
    DoNotImportFromArticy = 1,
    EConversationImport_MAX = 2,
};
#pragma pack(pop)
