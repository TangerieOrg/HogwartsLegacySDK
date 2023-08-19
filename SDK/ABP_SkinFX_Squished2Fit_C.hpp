#pragma once
#include <cstdint>
#include "ABP_SkinFX_Graph_Parent_C.hpp"
class USkinFXPreviewComponent;
#pragma pack(push, 1)
class ABP_SkinFX_Squished2Fit_C : public ABP_SkinFX_Graph_Parent_C {
public:
    USkinFXPreviewComponent* SkinFXPreview; // 0x5d0
    static ABP_SkinFX_Squished2Fit_C* StaticClass();
}; // Size: 0x5d8
#pragma pack(pop)
