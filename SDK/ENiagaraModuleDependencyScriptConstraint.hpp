#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t {
    SameScript = 0,
    AllScripts = 1,
    ENiagaraModuleDependencyScriptConstraint_MAX = 2,
};
#pragma pack(pop)
