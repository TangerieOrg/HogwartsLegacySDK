#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USceneRigShimDynamic : public UObject {
public:
    static USceneRigShimDynamic* StaticClass();
    void OnSaveGameLoaded();
    void OnGameToBeSaved();
}; // Size: 0x28
#pragma pack(pop)
