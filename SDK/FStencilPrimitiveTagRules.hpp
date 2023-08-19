#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStencilPrimitiveTagRules {
    TArray<FName> DoNotStencil; // 0x0
    TArray<FName> StencilOnly; // 0x10
    TArray<FName> ConditionalStencil; // 0x20
    TArray<FName> ShowOnStencil; // 0x30
    TArray<FName> HideOnStencil; // 0x40
}; // Size: 0x50
#pragma pack(pop)
