#pragma once
#include <cstdint>
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FBPEditorBookmarkNode {
    FGuid NodeGuid; // 0x0
    FGuid ParentGuid; // 0x10
    char pad_20[0x18];
}; // Size: 0x38
#pragma pack(pop)
