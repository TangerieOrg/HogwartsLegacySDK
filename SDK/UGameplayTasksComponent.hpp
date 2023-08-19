#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UGameplayTask;
#pragma pack(push, 1)
class UGameplayTasksComponent : public UActorComponent {
public:
    char pad_c8[0xc];
    uint8_t pad_bitfield_d4_0 : 1;
    uint8_t bIsNetDirty : 1; // 0xd4
    uint8_t pad_bitfield_d4_2 : 6;
    char pad_d5[0x3];
    TArray<UGameplayTask*> SimulatedTasks; // 0xd8
    TArray<UGameplayTask*> TaskPriorityQueue; // 0xe8
    char pad_f8[0x10];
    TArray<UGameplayTask*> TickingTasks; // 0x108
    TArray<UGameplayTask*> KnownTasks; // 0x118
    char pad_128[0x10];
    static UGameplayTasksComponent* StaticClass();
    void OnRep_SimulatedTasks();
    static void K2_RunGameplayTask();
}; // Size: 0x138
#pragma pack(pop)
