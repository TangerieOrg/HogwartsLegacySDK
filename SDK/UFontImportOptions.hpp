#pragma once
#include <cstdint>
#include "FFontImportOptionsData.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UFontImportOptions : public UObject {
public:
    FFontImportOptionsData Data; // 0x28
    static UFontImportOptions* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
