#pragma once
#include <cstdint>
#include "FIntPoint.hpp"
#include "UBookmarkBase.hpp"
#pragma pack(push, 1)
class UBookMark2D : public UBookmarkBase {
public:
    float Zoom2D; // 0x28
    FIntPoint Location; // 0x2c
    char pad_34[0x4];
    static UBookMark2D* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
