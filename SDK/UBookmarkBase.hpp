#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UBookmarkBase : public UObject {
public:
    static UBookmarkBase* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
