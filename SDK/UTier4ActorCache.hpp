#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UTier4ActorCache : public UObject {
public:
    char pad_28[0x1b8];
    static UTier4ActorCache* StaticClass();
    static void SetTempMaxAllowedT4(float InTempMax);
    static UTier4ActorCache* Get();
    static void ClearTempMaxAllowedT4();
}; // Size: 0x1e0
#pragma pack(pop)
