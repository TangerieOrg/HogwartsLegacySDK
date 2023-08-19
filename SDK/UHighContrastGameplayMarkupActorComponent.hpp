#pragma once
#include <cstdint>
#include "EHighContrastGameplayMarkup.hpp"
#include "FStencilValueRenderCustomDepthFilter.hpp"
#include "UHighContrastGameplayMarkupComponent.hpp"
#pragma pack(push, 1)
class UHighContrastGameplayMarkupActorComponent : public UHighContrastGameplayMarkupComponent {
public:
    EHighContrastGameplayMarkup Type; // 0xc8
    char pad_c9[0x7];
    FStencilValueRenderCustomDepthFilter Filter; // 0xd0
    char pad_e8[0x50];
    static UHighContrastGameplayMarkupActorComponent* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
