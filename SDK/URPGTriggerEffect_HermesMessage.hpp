#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_HermesMessage : public URPGTriggerEffect_Base {
public:
    FString HermesMessage; // 0x40
    static URPGTriggerEffect_HermesMessage* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
