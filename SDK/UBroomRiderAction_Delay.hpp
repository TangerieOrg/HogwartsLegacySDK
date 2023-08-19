#pragma once
#include <cstdint>
#include "UBroomRiderActionBase.hpp"
#pragma pack(push, 1)
class UBroomRiderAction_Delay : public UBroomRiderActionBase {
public:
    float Delay; // 0x38
    char pad_3c[0xc];
    static UBroomRiderAction_Delay* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
