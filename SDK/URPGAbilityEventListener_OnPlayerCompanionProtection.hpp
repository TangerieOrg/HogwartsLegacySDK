#pragma once
#include <cstdint>
#include "URPGAbilityEventListener.hpp"
class UObject;
#pragma pack(push, 1)
class URPGAbilityEventListener_OnPlayerCompanionProtection : public URPGAbilityEventListener {
public:
    static URPGAbilityEventListener_OnPlayerCompanionProtection* StaticClass();
    void OnCastCompanionProtego(UObject* Caller);
}; // Size: 0x98
#pragma pack(pop)
