#pragma once
#include <cstdint>
#include "UGameplayTask.hpp"
#pragma pack(push, 1)
class UGameplayTask_ClaimResource : public UGameplayTask {
public:
    static UGameplayTask_ClaimResource* StaticClass();
    static void ClaimResources();
    static void ClaimResource();
}; // Size: 0x68
#pragma pack(pop)
