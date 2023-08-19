#pragma once
#include <cstdint>
#include "FBaseArchitectMonolithicAsset_Connection.hpp"
#pragma pack(push, 1)
struct FBaseArchitectMonolithicAsset_Class {
    TArray<FName> Categories; // 0x0
    TArray<FBaseArchitectMonolithicAsset_Connection> ConnectionArray; // 0x10
}; // Size: 0x20
#pragma pack(pop)
