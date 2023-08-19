#pragma once
#include <cstdint>
#include "FCharacterStateData.hpp"
#include "UObjectStateDataContainerBase.hpp"
#pragma pack(push, 1)
class UCharacterStateDataContainer : public UObjectStateDataContainerBase {
public:
    FCharacterStateData Data; // 0x28
    static UCharacterStateDataContainer* StaticClass();
}; // Size: 0x2a8
#pragma pack(pop)
