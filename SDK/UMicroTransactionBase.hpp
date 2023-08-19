#pragma once
#include <cstdint>
#include "FPurchaseInfo.hpp"
#include "UPlatformInterfaceBase.hpp"
#pragma pack(push, 1)
class UMicroTransactionBase : public UPlatformInterfaceBase {
public:
    TArray<FPurchaseInfo> AvailableProducts; // 0x38
    FString LastError; // 0x48
    FString LastErrorSolution; // 0x58
    static UMicroTransactionBase* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
