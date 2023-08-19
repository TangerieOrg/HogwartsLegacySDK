#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraScriptLibraryVisibility {
    Invalid = 0,
    Unexposed = 1,
    Library = 2,
    Hidden = 3,
    ENiagaraScriptLibraryVisibility_MAX = 4,
};
#pragma pack(pop)
