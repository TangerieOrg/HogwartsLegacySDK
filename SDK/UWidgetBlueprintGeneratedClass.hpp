#pragma once
#include <cstdint>
#include "FDelegateRuntimeBinding.hpp"
#include "UBlueprintGeneratedClass.hpp"
class UWidgetTree;
class UWidgetAnimation;
#pragma pack(push, 1)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass {
public:
    UWidgetTree* WidgetTree; // 0x328
    uint8_t bClassRequiresNativeTick : 1; // 0x330
    uint8_t pad_bitfield_330_1 : 7;
    char pad_331[0x7];
    TArray<FDelegateRuntimeBinding> Bindings; // 0x338
    TArray<UWidgetAnimation*> Animations; // 0x348
    TArray<FName> NamedSlots; // 0x358
    static UWidgetBlueprintGeneratedClass* StaticClass();
}; // Size: 0x368
#pragma pack(pop)
