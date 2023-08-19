#pragma once
#include <cstdint>
class UObject;
#pragma pack(push, 1)
struct FPreviewAttachedObjectPair {
    char pad_0[0x28];
    UObject* Object; // 0x28
    FName AttachedTo; // 0x30
}; // Size: 0x38
#pragma pack(pop)
