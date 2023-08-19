#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UMissionInteractionManager : public UObject {
public:
    char pad_28[0xd8];
    static UMissionInteractionManager* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
