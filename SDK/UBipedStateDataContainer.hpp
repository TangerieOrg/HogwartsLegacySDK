#pragma once
#include <cstdint>
#include "FBipedStateData.hpp"
#include "UObjectStateDataContainerBase.hpp"
#pragma pack(push, 1)
class UBipedStateDataContainer : public UObjectStateDataContainerBase {
public:
    FBipedStateData Data; // 0x28
    static UBipedStateDataContainer* StaticClass();
}; // Size: 0x2a8
#pragma pack(pop)
