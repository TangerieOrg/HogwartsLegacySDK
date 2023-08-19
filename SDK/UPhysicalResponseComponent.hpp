#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
class UPhysicalResponseConfig;
#pragma pack(push, 1)
class UPhysicalResponseComponent : public USceneComponent {
public:
    char pad_220[0x8];
    UPhysicalResponseConfig* CurResponse; // 0x228
    TArray<UPhysicalResponseConfig*> ValidResponses; // 0x230
    char pad_240[0x90];
    static UPhysicalResponseComponent* StaticClass();
}; // Size: 0x2d0
#pragma pack(pop)
