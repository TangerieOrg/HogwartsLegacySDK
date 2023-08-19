#pragma once
#include <cstdint>
#include "UGameplayTask.hpp"
#pragma pack(push, 1)
class UGameplayTask_WaitDelay : public UGameplayTask {
public:
    char pad_68[0x18];
    static UGameplayTask_WaitDelay* StaticClass();
    static void TaskWaitDelay();
    void TaskDelayDelegate__DelegateSignature();
}; // Size: 0x80
#pragma pack(pop)
