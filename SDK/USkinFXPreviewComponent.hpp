#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class USkinFXPreviewComponent : public USceneComponent {
public:
    static USkinFXPreviewComponent* StaticClass();
    void ResetEnvelope();
    void ResetAll();
    void ConstructPreview();
}; // Size: 0x220
#pragma pack(pop)
