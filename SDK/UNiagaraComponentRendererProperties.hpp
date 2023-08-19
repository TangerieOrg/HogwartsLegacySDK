#pragma once
#include <cstdint>
#include "FNiagaraComponentPropertyBinding.hpp"
#include "FNiagaraVariableAttributeBinding.hpp"
#include "UNiagaraRendererProperties.hpp"
class UClass;
class USceneComponent;
#pragma pack(push, 1)
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties {
public:
    UClass* ComponentType; // 0x78
    uint32_t ComponentCountLimit; // 0x80
    char pad_84[0x4];
    FNiagaraVariableAttributeBinding EnabledBinding; // 0x88
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0xe0
    bool bAssignComponentsOnParticleID; // 0x138
    bool bOnlyCreateComponentsOnParticleSpawn; // 0x139
    char pad_13a[0x2];
    int32_t RendererVisibility; // 0x13c
    USceneComponent* TemplateComponent; // 0x140
    TArray<FNiagaraComponentPropertyBinding> PropertyBindings; // 0x148
    char pad_158[0x58];
    static UNiagaraComponentRendererProperties* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
