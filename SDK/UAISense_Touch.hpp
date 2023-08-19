#pragma once
#include <cstdint>
#include "FAITouchEvent.hpp"
#include "UAISense.hpp"
#pragma pack(push, 1)
class UAISense_Touch : public UAISense {
public:
    TArray<FAITouchEvent> RegisteredEvents; // 0x80
    static UAISense_Touch* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
