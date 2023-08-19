#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraModuleDependencyType : uint8_t {
    PreDependency = 0,
    PostDependency = 1,
    ENiagaraModuleDependencyType_MAX = 2,
};
#pragma pack(pop)
