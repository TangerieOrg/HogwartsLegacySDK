#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UNavRelevantComponent.hpp"
class UClass;
#pragma pack(push, 1)
class UNavModifierComponent : public UNavRelevantComponent {
public:
    UClass* AreaClass; // 0xf8
    FVector FailsafeExtent; // 0x100
    uint8_t bIncludeAgentHeight : 1; // 0x10c
    uint8_t pad_bitfield_10c_1 : 7;
    char pad_10d[0x53];
    static UNavModifierComponent* StaticClass();
    void SetAreaClass(UClass* NewAreaClass);
}; // Size: 0x160
#pragma pack(pop)
