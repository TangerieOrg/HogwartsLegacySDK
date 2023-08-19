#pragma once
#include <cstdint>
#include "UObject.hpp"
class USkeletalMesh;
#pragma pack(push, 1)
class UMorphTarget : public UObject {
public:
    USkeletalMesh* BaseSkelMesh; // 0x28
    char pad_30[0x10];
    static UMorphTarget* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
