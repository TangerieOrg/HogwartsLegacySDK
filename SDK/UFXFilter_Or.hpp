#pragma once
#include <cstdint>
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_Or : public UFXFilter {
public:
    TArray<UFXFilter*> Filters; // 0x30
    static UFXFilter_Or* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
