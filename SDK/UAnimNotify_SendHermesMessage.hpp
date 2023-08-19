#pragma once
#include <cstdint>
#include "UAnimNotify.hpp"
#pragma pack(push, 1)
class UAnimNotify_SendHermesMessage : public UAnimNotify {
public:
    FName Message; // 0x38
    bool bExecuteAll; // 0x40
    char pad_41[0x7];
    static UAnimNotify_SendHermesMessage* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
