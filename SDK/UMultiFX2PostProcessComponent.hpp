#pragma once
#include <cstdint>
#include "FPostProcessSettings.hpp"
#include "USceneComponent.hpp"
class UMultiFX2_PostProcessingDefinition;
#pragma pack(push, 1)
class UMultiFX2PostProcessComponent : public USceneComponent {
public:
    UMultiFX2_PostProcessingDefinition* Definition; // 0x220
    char pad_228[0x8];
    FPostProcessSettings Settings; // 0x230
    float BlendWeight; // 0x820
    float FadeBlendWeight; // 0x824
    float FadeSpeed; // 0x828
    float DefaultFadeOutTime; // 0x82c
    float AutoFadeOutTime; // 0x830
    float Birth; // 0x834
    float Priority; // 0x838
    char pad_83c[0x4];
    static UMultiFX2PostProcessComponent* StaticClass();
}; // Size: 0x840
#pragma pack(pop)
