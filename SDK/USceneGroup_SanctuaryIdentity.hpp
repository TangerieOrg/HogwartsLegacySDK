#pragma once
#include <cstdint>
#include "ESanctuaryIdentity.hpp"
#include "UTimeRigGroup.hpp"
#pragma pack(push, 1)
class USceneGroup_SanctuaryIdentity : public UTimeRigGroup {
public:
    ESanctuaryIdentity Identity; // 0xa8
    char pad_a9[0x7];
    static USceneGroup_SanctuaryIdentity* StaticClass();
    void OnIdentityChanged(ESanctuaryIdentity OldIdentity, ESanctuaryIdentity NewIdentity);
}; // Size: 0xb0
#pragma pack(pop)
