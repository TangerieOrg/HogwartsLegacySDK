#pragma once
#include <cstdint>
#include "UBroomRiderActionBase.hpp"
#pragma pack(push, 1)
class UBroomRiderAction_SendHermesMessage : public UBroomRiderActionBase {
public:
    FString MessageName; // 0x38
    bool bOwned; // 0x48
    char pad_49[0x7];
    static UBroomRiderAction_SendHermesMessage* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
