#pragma once
#include <cstdint>
#include "AVolume.hpp"
class UClass;
#pragma pack(push, 1)
class ANavModifierVolume : public AVolume {
public:
    char pad_280[0x8];
    UClass* AreaClass; // 0x288
    bool bMaskFillCollisionUnderneathForNavmesh; // 0x290
    char pad_291[0x7];
    static ANavModifierVolume* StaticClass();
    void SetAreaClass(UClass* NewAreaClass);
}; // Size: 0x298
#pragma pack(pop)
