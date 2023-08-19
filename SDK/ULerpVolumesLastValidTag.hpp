#pragma once
#include <cstdint>
#include "FLerpVolumesTagEntry.hpp"
#include "ULerpVolumesPresistentContextDataBase.hpp"
#pragma pack(push, 1)
class ULerpVolumesLastValidTag : public ULerpVolumesPresistentContextDataBase {
public:
    FLerpVolumesTagEntry LastValid; // 0x28
    static ULerpVolumesLastValidTag* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
