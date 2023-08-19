#pragma once
#include <cstdint>
#include "FSkinFXEffectEnd.hpp"
class UWorld;
class ASkinFXDefinition;
class USkinFXComponent;
class AActor;
#pragma pack(push, 1)
struct FSkinFXParameterDriverContext {
    UWorld* World; // 0x0
    ASkinFXDefinition* Effect; // 0x8
    USkinFXComponent* Component; // 0x10
    AActor* Owner; // 0x18
    char pad_20[0x820];
    FSkinFXEffectEnd ForceEnd; // 0x840
    bool bSignalledEnd; // 0x842
    char pad_843[0xd];
}; // Size: 0x850
#pragma pack(pop)
