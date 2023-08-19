#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FVector.hpp"
#include "UTextRenderComponent.hpp"
#pragma pack(push, 1)
class UCreature_WorldDebugComponent : public UTextRenderComponent {
public:
    FColor TextStandardColor; // 0x4d0
    FColor TextErrorColor; // 0x4d4
    FVector AdditionalBoundsOffset; // 0x4d8
    char pad_4e4[0x1c];
    static UCreature_WorldDebugComponent* StaticClass();
}; // Size: 0x500
#pragma pack(pop)
