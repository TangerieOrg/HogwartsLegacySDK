#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDatasmithCADRetessellationRule : uint8_t {
    All = 0,
    SkipDeletedSurfaces = 1,
    EDatasmithCADRetessellationRule_MAX = 2,
};
#pragma pack(pop)
