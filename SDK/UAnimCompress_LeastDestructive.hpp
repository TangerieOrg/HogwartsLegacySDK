#pragma once
#include <cstdint>
#include "UAnimCompress_BitwiseCompressOnly.hpp"
#pragma pack(push, 1)
class UAnimCompress_LeastDestructive : public UAnimCompress_BitwiseCompressOnly {
public:
    static UAnimCompress_LeastDestructive* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
