#pragma once
#include <cstdint>
#include "UInteractiveToolBuilder.hpp"
#pragma pack(push, 1)
class UGroupEdgeInsertionToolBuilder : public UInteractiveToolBuilder {
public:
    char pad_28[0x8];
    static UGroupEdgeInsertionToolBuilder* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
