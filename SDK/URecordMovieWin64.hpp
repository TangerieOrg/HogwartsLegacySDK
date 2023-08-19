#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class URecordMovieWin64 : public UObject {
public:
    char pad_28[0xe8];
    static URecordMovieWin64* StaticClass();
}; // Size: 0x110
#pragma pack(pop)
