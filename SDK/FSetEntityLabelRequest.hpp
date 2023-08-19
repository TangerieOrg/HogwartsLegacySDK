#pragma once
#include <cstdint>
#include "FRCRequest.hpp"
#pragma pack(push, 1)
struct FSetEntityLabelRequest : public FRCRequest {
    FString NewLabel; // 0x68
}; // Size: 0x78
#pragma pack(pop)
