#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
class UCurtainSubsystem;
class UObject;
#pragma pack(push, 1)
class URaiseCurtainAction : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x10];
    UCurtainSubsystem* CurtainSubsystem; // 0x40
    UObject* WhosAsking; // 0x48
    static URaiseCurtainAction* StaticClass();
    static URaiseCurtainAction* RaiseCurtain(UObject* WhosAsking);
    void OnCurtainRaised();
}; // Size: 0x50
#pragma pack(pop)
