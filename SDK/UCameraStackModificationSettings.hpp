#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UCameraStackOperationBase;
#pragma pack(push, 1)
class UCameraStackModificationSettings : public UDataAsset {
public:
    TArray<UCameraStackOperationBase*> StackOperations; // 0x30
    static UCameraStackModificationSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
