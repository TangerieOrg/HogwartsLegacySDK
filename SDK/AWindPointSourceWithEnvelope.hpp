#pragma once
#include <cstdint>
#include "AInfo.hpp"
class UWindPointSourceWithEnvelopeComponent;
#pragma pack(push, 1)
class AWindPointSourceWithEnvelope : public AInfo {
public:
    UWindPointSourceWithEnvelopeComponent* Component; // 0x248
    static AWindPointSourceWithEnvelope* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
