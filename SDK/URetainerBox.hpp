#pragma once
#include <cstdint>
#include "UContentWidget.hpp"
class UMaterialInterface;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class URetainerBox : public UContentWidget {
public:
    bool bRetainRender; // 0x120
    bool RenderOnInvalidation; // 0x121
    bool RenderOnPhase; // 0x122
    char pad_123[0x1];
    int32_t Phase; // 0x124
    int32_t PhaseCount; // 0x128
    char pad_12c[0x4];
    UMaterialInterface* EffectMaterial; // 0x130
    FName TextureParameter; // 0x138
    char pad_140[0x10];
    static URetainerBox* StaticClass();
    void SetTextureParameter(FName TextureParameter);
    void SetRetainRendering(bool bInRetainRendering);
    void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases);
    void SetEffectMaterial(UMaterialInterface* EffectMaterial);
    void RequestRender();
    UMaterialInstanceDynamic* GetEffectMaterial();
}; // Size: 0x150
#pragma pack(pop)
