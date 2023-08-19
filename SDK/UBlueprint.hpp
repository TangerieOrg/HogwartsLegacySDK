#pragma once
#include <cstdint>
#include "EBlueprintType.hpp"
#include "FBPComponentClassOverride.hpp"
#include "UBlueprintCore.hpp"
class UClass;
class UInheritableComponentHandler;
class USimpleConstructionScript;
class UActorComponent;
class UTimelineTemplate;
#pragma pack(push, 1)
class UBlueprint : public UBlueprintCore {
public:
    UClass* ParentClass; // 0x50
    EBlueprintType BlueprintType; // 0x58
    uint8_t bRecompileOnLoad : 1; // 0x59
    uint8_t bHasBeenRegenerated : 1; // 0x59
    uint8_t bIsRegeneratingOnLoad : 1; // 0x59
    uint8_t pad_bitfield_59_3 : 5;
    char pad_5a[0x2];
    int32_t BlueprintSystemVersion; // 0x5c
    USimpleConstructionScript* SimpleConstructionScript; // 0x60
    TArray<UActorComponent*> ComponentTemplates; // 0x68
    TArray<UTimelineTemplate*> Timelines; // 0x78
    TArray<FBPComponentClassOverride> ComponentClassOverrides; // 0x88
    UInheritableComponentHandler* InheritableComponentHandler; // 0x98
    static UBlueprint* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
