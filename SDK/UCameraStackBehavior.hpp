#pragma once
#include <cstdint>
#include "UObject.hpp"
struct FCameraData;
class ACameraStackActor;
class UCameraStack;
#pragma pack(push, 1)
class UCameraStackBehavior : public UObject {
public:
    char pad_28[0x1c];
    int32_t DisableCounter; // 0x44
    bool bPaused; // 0x48
    char pad_49[0x7];
    static UCameraStackBehavior* StaticClass();
    void SetPaused(bool bInPaused);
    void SetDisabled(bool bInDisabled, bool bForce);
    bool IsPaused();
    bool IsDisabled();
    bool IsActive();
    float GetSecondsActive();
    bool GetPreviousValues(FCameraData& OutData);
    ACameraStackActor* GetOwner();
    UCameraStack* GetBehaviorList();
    bool GetAllPreviousValues(FCameraData& OutData, bool bInUseUnblendedStackValues);
}; // Size: 0x50
#pragma pack(pop)
