#pragma once
#include <cstdint>
#include "FRCRequest.hpp"
#pragma pack(push, 1)
struct FGetObjectThumbnailRequest : public FRCRequest {
    FString ObjectPath; // 0x68
}; // Size: 0x78
#pragma pack(pop)
