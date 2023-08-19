#pragma once
#include <cstdint>
#include "FObjectArchitectAsset_Connection.hpp"
#include "UBaseArchitectAsset.hpp"
#pragma pack(push, 1)
class UObjectArchitectAsset : public UBaseArchitectAsset {
public:
    TArray<FObjectArchitectAsset_Connection> ConnectionArray; // 0xd0
    static UObjectArchitectAsset* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
