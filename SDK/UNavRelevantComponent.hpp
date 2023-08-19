#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UObject;
#pragma pack(push, 1)
class UNavRelevantComponent : public UActorComponent {
public:
    char pad_c8[0x24];
    uint8_t bAttachToOwnersRoot : 1; // 0xec
    uint8_t pad_bitfield_ec_1 : 7;
    char pad_ed[0x3];
    UObject* CachedNavParent; // 0xf0
    static UNavRelevantComponent* StaticClass();
    void SetNavigationRelevancy(bool bRelevant);
}; // Size: 0xf8
#pragma pack(pop)
