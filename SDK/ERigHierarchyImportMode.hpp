#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERigHierarchyImportMode {
    Append = 0,
    Replace = 1,
    ReplaceLocalTransform = 2,
    ReplaceGlobalTransform = 3,
    Max = 4,
};
#pragma pack(pop)
