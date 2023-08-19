#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
class UWorld;
class UObject;
#pragma pack(push, 1)
class UWaitForNamedDoorToLoadNode : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x20];
    UWorld* World; // 0x50
    char pad_58[0x20];
    static UWaitForNamedDoorToLoadNode* StaticClass();
    static UWaitForNamedDoorToLoadNode* WaitForNamedDoorToLoad(UObject* WorldContextObject, FString DoorName, float TimeOutSeconds);
    void FindDoorOrQueue();
}; // Size: 0x78
#pragma pack(pop)
