#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESelectedObjectsModificationType {
    Replace = 0,
    Add = 1,
    Remove = 2,
    Clear = 3,
    ESelectedObjectsModificationType_MAX = 4,
};
#pragma pack(pop)
