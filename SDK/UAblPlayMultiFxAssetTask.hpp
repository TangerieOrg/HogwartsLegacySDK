#pragma once
#include <cstdint>
#include "UAblPlayMultiFxAssetBaseTask.hpp"
class UMultiFX2Asset;
#pragma pack(push, 1)
class UAblPlayMultiFxAssetTask : public UAblPlayMultiFxAssetBaseTask {
public:
    UMultiFX2Asset* FXAsset; // 0xa0
    static UAblPlayMultiFxAssetTask* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
