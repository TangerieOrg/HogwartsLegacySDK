#pragma once
#include <cstdint>
#include "FSceneRigVariant.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USceneRigVariants : public UObject {
public:
    TArray<FSceneRigVariant> Variants; // 0x28
    static USceneRigVariants* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
