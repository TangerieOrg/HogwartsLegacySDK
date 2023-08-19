#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAcknowledgement : public UObject {
public:
    char pad_28[0x40];
    static UAcknowledgement* StaticClass();
    void EventExecute(bool bNewResult);
}; // Size: 0x68
#pragma pack(pop)
