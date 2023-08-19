#pragma once
#include <cstdint>
#include "UChannel.hpp"
class AActor;
class UObject;
#pragma pack(push, 1)
class UActorChannel : public UChannel {
public:
    AActor* Actor; // 0x68
    char pad_70[0xe8];
    TArray<UObject*> CreateSubObjects; // 0x158
    char pad_168[0x128];
    static UActorChannel* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
