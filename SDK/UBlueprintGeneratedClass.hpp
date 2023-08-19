#pragma once
#include <cstdint>
#include "FBPComponentClassOverride.hpp"
#include "UClass.hpp"
class UDynamicBlueprintBinding;
class UActorComponent;
class UTimelineTemplate;
class USimpleConstructionScript;
class UInheritableComponentHandler;
class UStructProperty;
class UFunction;
#pragma pack(push, 1)
class UBlueprintGeneratedClass : public UClass {
public:
    int32_t NumReplicatedProperties; // 0x230
    uint8_t bHasNativizedParent : 1; // 0x234
    uint8_t bHasCookedComponentInstancingData : 1; // 0x234
    uint8_t pad_bitfield_234_2 : 6;
    char pad_235[0x3];
    TArray<UDynamicBlueprintBinding*> DynamicBindingObjects; // 0x238
    TArray<UActorComponent*> ComponentTemplates; // 0x248
    TArray<UTimelineTemplate*> Timelines; // 0x258
    TArray<FBPComponentClassOverride> ComponentClassOverrides; // 0x268
    USimpleConstructionScript* SimpleConstructionScript; // 0x278
    UInheritableComponentHandler* InheritableComponentHandler; // 0x280
    UStructProperty* UberGraphFramePointerProperty; // 0x288
    char pad_290[0x8];
    UFunction* UberGraphFunction; // 0x298
    char pad_2a0[0x88];
    static UBlueprintGeneratedClass* StaticClass();
}; // Size: 0x328
#pragma pack(pop)
