#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UBase_Character_Interface : public UInterface {
public:
    static UBase_Character_Interface* StaticClass();
    void OnUnFreeze();
    void OnResetFullRagdoll();
    void OnFreeze();
    void OnEnableFullRagdoll();
    void OnAboutToDie();
}; // Size: 0x28
#pragma pack(pop)
