#pragma once
#include <cstdint>
#include "UAnimCompress.hpp"
#pragma pack(push, 1)
class UAnimCompress_BitwiseCompressOnly : public UAnimCompress {
public:
    static UAnimCompress_BitwiseCompressOnly* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
