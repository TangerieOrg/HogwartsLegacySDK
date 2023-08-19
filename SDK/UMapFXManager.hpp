#pragma once
#include <cstdint>
#include "FMapFXItem.hpp"
#include "UObject.hpp"
class UMapFX;
class UMapFXChain;
#pragma pack(push, 1)
class UMapFXManager : public UObject {
public:
    TArray<FMapFXItem> FXList; // 0x28
    TArray<UMapFX*> FXActiveList; // 0x38
    TArray<UMapFXChain*> FXChainActiveList; // 0x48
    char pad_58[0x18];
    static UMapFXManager* StaticClass();
    void FXComplete(UMapFX* MapFX);
    void FXChainComplete(UMapFXChain* MapFXChain);
}; // Size: 0x70
#pragma pack(pop)
