#pragma once
#include <cstdint>
#include "FRCRequest.hpp"
#pragma pack(push, 1)
struct FSetPresetMetadataRequest : public FRCRequest {
    FString Value; // 0x68
}; // Size: 0x78
#pragma pack(pop)
