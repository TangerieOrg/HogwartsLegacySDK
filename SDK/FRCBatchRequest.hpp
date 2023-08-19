#pragma once
#include <cstdint>
#include "FRCRequest.hpp"
#include "FRCRequestWrapper.hpp"
#pragma pack(push, 1)
struct FRCBatchRequest : public FRCRequest {
    TArray<FRCRequestWrapper> Requests; // 0x68
}; // Size: 0x78
#pragma pack(pop)
