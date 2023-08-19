#pragma once
#include <cstdint>
#include "FObjectStateData.hpp"
#include "UObjectStateDataContainerBase.hpp"
#pragma pack(push, 1)
class UObjectStateDataContainer : public UObjectStateDataContainerBase {
public:
    FObjectStateData Data; // 0x28
    static UObjectStateDataContainer* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
