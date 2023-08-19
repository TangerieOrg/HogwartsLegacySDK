#pragma once
#include <cstdint>
#include "UObject.hpp"
class UPerceptionIconData;
#pragma pack(push, 1)
class UPerceptionDrawQueueItem : public UObject {
public:
    char pad_28[0x30];
    UPerceptionIconData* perceptionData; // 0x58
    static UPerceptionDrawQueueItem* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
