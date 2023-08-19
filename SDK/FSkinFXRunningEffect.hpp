#pragma once
#include <cstdint>
#include "FSkinFXEffectDefinition.hpp"
class ASkinFXDefinitionGraph;
#pragma pack(push, 1)
struct FSkinFXRunningEffect {
    FSkinFXEffectDefinition EffectDefinition; // 0x0
    ASkinFXDefinitionGraph* BlueprintGraph; // 0x18
}; // Size: 0x20
#pragma pack(pop)
