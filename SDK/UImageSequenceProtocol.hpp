#pragma once
#include <cstdint>
#include "UFrameGrabberProtocol.hpp"
#pragma pack(push, 1)
class UImageSequenceProtocol : public UFrameGrabberProtocol {
public:
    char pad_68[0x70];
    static UImageSequenceProtocol* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
