#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UCompanionStatsTriggers : public UObject {
public:
    char pad_28[0x98];
    static UCompanionStatsTriggers* StaticClass();
    void OnStatChanged(FName StatID, int32_t Value, int32_t Delta);
}; // Size: 0xc0
#pragma pack(pop)
