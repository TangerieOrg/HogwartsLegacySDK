#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FNavAgentProperties.hpp"
#include "FVector.hpp"
class UClass;
#pragma pack(push, 1)
struct FNavDataConfig : public FNavAgentProperties {
    FName Name; // 0x30
    FColor Color; // 0x38
    FVector DefaultQueryExtent; // 0x3c
    UClass* NavigationDataClass; // 0x48
    char pad_50[0x28];
}; // Size: 0x78
#pragma pack(pop)
