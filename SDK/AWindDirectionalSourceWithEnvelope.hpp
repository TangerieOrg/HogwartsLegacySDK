#pragma once
#include <cstdint>
#include "AInfo.hpp"
class UWindDirectionalSourceWithEnvelopeComponent;
#pragma pack(push, 1)
class AWindDirectionalSourceWithEnvelope : public AInfo {
public:
    UWindDirectionalSourceWithEnvelopeComponent* Component; // 0x248
    static AWindDirectionalSourceWithEnvelope* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
