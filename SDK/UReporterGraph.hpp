#pragma once
#include <cstdint>
#include "UReporterBase.hpp"
#pragma pack(push, 1)
class UReporterGraph : public UReporterBase {
public:
    char pad_30[0x78];
    static UReporterGraph* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
