#pragma once
#include <cstdint>
#include "URPGAbilityEventListener.hpp"
#pragma pack(push, 1)
class URPGAbilityEventListener_OnMessage : public URPGAbilityEventListener {
public:
    FString HermesMessage; // 0x98
    static URPGAbilityEventListener_OnMessage* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
