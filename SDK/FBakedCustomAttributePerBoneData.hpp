#pragma once
#include <cstdint>
#include "FBakedFloatCustomAttribute.hpp"
#include "FBakedIntegerCustomAttribute.hpp"
#include "FBakedStringCustomAttribute.hpp"
#pragma pack(push, 1)
struct FBakedCustomAttributePerBoneData {
    int32_t BoneTreeIndex; // 0x0
    char pad_4[0x4];
    TArray<FBakedStringCustomAttribute> StringAttributes; // 0x8
    TArray<FBakedIntegerCustomAttribute> IntAttributes; // 0x18
    TArray<FBakedFloatCustomAttribute> FloatAttributes; // 0x28
}; // Size: 0x38
#pragma pack(pop)
