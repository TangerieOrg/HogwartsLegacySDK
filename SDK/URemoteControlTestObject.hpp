#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class URemoteControlTestObject : public UObject {
public:
    int32_t CStyleIntArray[3]; // 0x28
    char pad_34[0x4];
    TArray<int32_t> IntArray; // 0x38
    TArray<float> FloatArray; // 0x48
    char pad_58[0x140];
    static URemoteControlTestObject* StaticClass();
}; // Size: 0x198
#pragma pack(pop)
