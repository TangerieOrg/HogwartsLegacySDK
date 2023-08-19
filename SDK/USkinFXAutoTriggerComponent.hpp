#pragma once
#include <cstdint>
#include "FSkinFXAutoTriggerDriverTracker.hpp"
#include "UActorComponent.hpp"
class USkinFXAutoTriggerDriver;
class AActor;
class UObject;
#pragma pack(push, 1)
class USkinFXAutoTriggerComponent : public UActorComponent {
public:
    TArray<USkinFXAutoTriggerDriver*> Drivers; // 0xc8
    char pad_d8[0x10];
    FSkinFXAutoTriggerDriverTracker Tracker; // 0xe8
    bool bDisabled; // 0x148
    char pad_149[0x7];
    static USkinFXAutoTriggerComponent* StaticClass();
    void SetEnabled(bool Enabled);
    void RemoveDriverByName(FName TriggerName);
    void RemoveDriver(USkinFXAutoTriggerDriver* Driver);
    static void RefreshAll(UObject* WorldContextObject);
    static void Refresh(AActor* Actor);
    bool IsEnabled();
    bool HasDriverByName(FName TriggerName);
    bool HasDriver(USkinFXAutoTriggerDriver* Driver);
    void AddDriver(USkinFXAutoTriggerDriver* Driver);
}; // Size: 0x150
#pragma pack(pop)
