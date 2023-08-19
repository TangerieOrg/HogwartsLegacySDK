#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMeshInstancingReplacementMethod : uint8_t {
    RemoveOriginalActors = 0,
    KeepOriginalActorsAsEditorOnly = 1,
    EMeshInstancingReplacementMethod_MAX = 2,
};
#pragma pack(pop)
