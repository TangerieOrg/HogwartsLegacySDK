#pragma once
#include <cstdint>
#include "ASkinFXDefinition.hpp"
class USkinFXPreviewComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_SkinFX_NoGraph_Parent_C : public ASkinFXDefinition {
public:
    USkinFXPreviewComponent* SkinFXPreview; // 0x5c0
    USceneComponent* DefaultSceneRoot; // 0x5c8
    static ABP_SkinFX_NoGraph_Parent_C* StaticClass();
    void UserConstructionScript();
}; // Size: 0x5d0
#pragma pack(pop)
