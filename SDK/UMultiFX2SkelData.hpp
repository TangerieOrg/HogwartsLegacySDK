#pragma once
#include <cstdint>
#include "UObject.hpp"
class USkeletalMesh;
#pragma pack(push, 1)
class UMultiFX2SkelData : public UObject {
public:
    TArray<USkeletalMesh*> ReferenceSkeletonArray; // 0x28
    static UMultiFX2SkelData* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
