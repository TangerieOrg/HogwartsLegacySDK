#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UBaseObjectCopyComponent : public USceneComponent {
public:
    TArray<FName> ExcludedComponentNames; // 0x220
    bool bHideObjectWhileAlive; // 0x230
    char pad_231[0x7];
    TArray<USceneComponent*> CopiedComponents; // 0x238
    char pad_248[0x8];
    static UBaseObjectCopyComponent* StaticClass();
    void SetExistingTemplateActorHidden(bool bIsHidden);
}; // Size: 0x250
#pragma pack(pop)
