#pragma once
#include <cstdint>
#include "UBroomRiderActionBase.hpp"
#pragma pack(push, 1)
class UBroomRiderAction_WaitForHermesMessage : public UBroomRiderActionBase {
public:
    FString MessageName; // 0x38
    bool bPauseWhileWaiting; // 0x48
    char pad_49[0xf];
    static UBroomRiderAction_WaitForHermesMessage* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
