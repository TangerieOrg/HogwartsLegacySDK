#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UGameplayPropertyMod;
class UObject;
#pragma pack(push, 1)
class UGameplayPropertyModGroup : public UDataAsset {
public:
    TArray<UGameplayPropertyMod*> Modifiers; // 0x30
    static UGameplayPropertyModGroup* StaticClass();
    void OnRemoved(UObject* TargetObject);
    void OnAdded(UObject* TargetObject);
}; // Size: 0x40
#pragma pack(pop)
