#pragma once
#include <cstdint>
#include "UCompressedImageSequenceProtocol.hpp"
#pragma pack(push, 1)
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol {
public:
    static UImageSequenceProtocol_JPG* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
