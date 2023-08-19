#pragma once
#include <cstdint>
#include "FTimespan.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMediaTimeStampInfo : public UObject {
public:
    FTimespan Time; // 0x28
    int64_t SequenceIndex; // 0x30
    static UMediaTimeStampInfo* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
