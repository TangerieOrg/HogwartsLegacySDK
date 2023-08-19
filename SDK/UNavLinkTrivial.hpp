#pragma once
#include <cstdint>
#include "UNavLinkDefinition.hpp"
#pragma pack(push, 1)
class UNavLinkTrivial : public UNavLinkDefinition {
public:
    static UNavLinkTrivial* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
