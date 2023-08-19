#pragma once
#include <cstdint>
class UObject;
#pragma pack(push, 1)
struct FTestUninitializedScriptStructMembersTest {
    UObject* UninitializedObjectReference; // 0x0
    UObject* InitializedObjectReference; // 0x8
    float UnusedValue; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
