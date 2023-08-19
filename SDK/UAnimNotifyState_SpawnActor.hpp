#pragma once
#include <cstdint>
#include "UAnimNotifyState_SpawnActorBase.hpp"
class UClass;
#pragma pack(push, 1)
class UAnimNotifyState_SpawnActor : public UAnimNotifyState_SpawnActorBase {
public:
    UClass* SpawnActorClass; // 0x50
    static UAnimNotifyState_SpawnActor* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
