#pragma once
#include <cstdint>
#include "USceneRigProvider.hpp"
class USceneRigVariants;
#pragma pack(push, 1)
class USceneRig_FromVariants : public USceneRigProvider {
public:
    USceneRigVariants* Variants; // 0x28
    static USceneRig_FromVariants* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
