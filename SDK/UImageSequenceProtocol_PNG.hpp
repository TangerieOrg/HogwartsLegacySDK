#pragma once
#include <cstdint>
#include "UCompressedImageSequenceProtocol.hpp"
#pragma pack(push, 1)
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol {
public:
    static UImageSequenceProtocol_PNG* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
