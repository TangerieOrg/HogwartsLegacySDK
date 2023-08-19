#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UBroomRiderActionBase : public UObject {
public:
    bool bActionEnabled; // 0x28
    char pad_29[0xb];
    bool bPauseBroomOnCompleteAction; // 0x34
    char pad_35[0x3];
    static UBroomRiderActionBase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
