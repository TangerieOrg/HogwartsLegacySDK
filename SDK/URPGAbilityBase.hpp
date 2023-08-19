#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "FRPGUIInfo.hpp"
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class URPGAbilityBase : public UObject {
public:
    bool bIsStackable; // 0x28
    char pad_29[0x7];
    FDateTime StartInGameTimeStamp; // 0x30
    FDateTime EndInGameTimeStamp; // 0x38
    float RemainingLifeTime; // 0x40
    char pad_44[0x4];
    AActor* OwnerActor; // 0x48
    FName OwnerID; // 0x50
    bool bShowIcon; // 0x58
    char pad_59[0x3];
    FRPGUIInfo UIIconInfo; // 0x5c
    char pad_6c[0x4];
    static URPGAbilityBase* StaticClass();
    void OnUnequipped();
    void OnReequipped();
    void OnEquipped();
}; // Size: 0x70
#pragma pack(pop)
