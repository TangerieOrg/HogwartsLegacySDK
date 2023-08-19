#include "FPurchaseInfo.hpp"
#include "UMicroTransactionBase.hpp"
#include "UPlatformInterfaceBase.hpp"
UMicroTransactionBase* UMicroTransactionBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MicroTransactionBase");
    return (UMicroTransactionBase*)res;
}
