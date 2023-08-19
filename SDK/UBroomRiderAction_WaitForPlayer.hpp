#pragma once
#include <cstdint>
#include "UBroomRiderActionBase.hpp"
#pragma pack(push, 1)
class UBroomRiderAction_WaitForPlayer : public UBroomRiderActionBase {
public:
    float Distance; // 0x38
    char pad_3c[0xc];
    static UBroomRiderAction_WaitForPlayer* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
