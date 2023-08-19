#pragma once
#include <cstdint>
#include "USceneRigProvider.hpp"
#pragma pack(push, 1)
class USceneRig_Fallback : public USceneRigProvider {
public:
    TArray<USceneRigProvider*> Providers; // 0x28
    static USceneRig_Fallback* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
