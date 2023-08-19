#pragma once
#include <cstdint>
#include "FLerpVolumesTagEntry.hpp"
#include "ULerpVolumesPresistentContextDataBase.hpp"
#pragma pack(push, 1)
class ULerpVolumesFinalTagHistory : public ULerpVolumesPresistentContextDataBase {
public:
    FLerpVolumesTagEntry Current; // 0x28
    FLerpVolumesTagEntry Prior; // 0x40
    static ULerpVolumesFinalTagHistory* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
