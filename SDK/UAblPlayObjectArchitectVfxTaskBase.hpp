#pragma once
#include <cstdint>
#include "EAttachLocation\Type.hpp"
#include "EObjectArchitectVfxWorldLocalType.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
class UAblObjectArchitectTagChooser;
class UAblTaskCondition;
#pragma pack(push, 1)
class UAblPlayObjectArchitectVfxTaskBase : public UAblAbilityTask {
public:
    FGameplayTagContainer BaseObjectArchitectTags; // 0x70
    TArray<UAblObjectArchitectTagChooser*> TagChoosers; // 0x90
    TArray<UAblTaskCondition*> Conditions; // 0xa0
    bool bSpawnSystemAttached; // 0xb0
    char pad_b1[0x3];
    FName AttachPointName; // 0xb4
    bool bAutoDestroy; // 0xbc
    bool bDeactivateAtTaskEnd; // 0xbd
    bool bDestroyAtTaskEnd; // 0xbe
    bool bIncludeActorScale; // 0xbf
    EAttachLocation::Type AttachLocation; // 0xc0
    EObjectArchitectVfxWorldLocalType WorldOrLocalSpace; // 0xc1
    char pad_c2[0x6];
    static UAblPlayObjectArchitectVfxTaskBase* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
