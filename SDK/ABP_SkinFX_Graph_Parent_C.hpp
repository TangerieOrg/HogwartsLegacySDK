#pragma once
#include <cstdint>
#include "ASkinFXDefinitionGraph.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_SkinFX_Graph_Parent_C : public ASkinFXDefinitionGraph {
public:
    USceneComponent* DefaultSceneRoot; // 0x5c8
    static ABP_SkinFX_Graph_Parent_C* StaticClass();
}; // Size: 0x5d0
#pragma pack(pop)
