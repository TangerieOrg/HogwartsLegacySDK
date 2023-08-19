#pragma once
#include <cstdint>
#include "EInteractiveState.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UFlooListEntry : public UObject {
public:
    FName Name; // 0x28
    int32_t UID; // 0x30
    EInteractiveState State; // 0x34
    char pad_35[0x3];
    FVector Location; // 0x38
    float ZRotation; // 0x44
    static UFlooListEntry* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
