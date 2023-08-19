#pragma once
#include <cstdint>
#include "UBTCompositeNode.hpp"
#pragma pack(push, 1)
class UBTComposite_Repeater : public UBTCompositeNode {
public:
    FName m_leafNodeBBKey; // 0x90
    static UBTComposite_Repeater* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
