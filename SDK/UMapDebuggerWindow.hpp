#pragma once
#include <cstdint>
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class UMapDebuggerWindow : public UObject {
public:
    TArray<AActor*> audioCueActors; // 0x28
    AActor* enterLeaveActor; // 0x38
    static UMapDebuggerWindow* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
