#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_SanctuaryLoadZone : public USceneRigActionBase {
public:
    FName ZoneNameToLoad; // 0x88
    bool bIgnoreZoneLocks; // 0x90
    char pad_91[0x7];
    static USceneAction_SanctuaryLoadZone* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
