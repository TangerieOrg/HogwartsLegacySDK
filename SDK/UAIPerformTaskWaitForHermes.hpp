#pragma once
#include <cstdint>
#include "UAIPerformTaskBase.hpp"
class UObject;
#pragma pack(push, 1)
class UAIPerformTaskWaitForHermes : public UAIPerformTaskBase {
public:
    bool bOrientToPlayer; // 0xe0
    char pad_e1[0xf];
    static UAIPerformTaskWaitForHermes* StaticClass();
    void OnHermesMessageExecuted(UObject* i_caller);
}; // Size: 0xf0
#pragma pack(pop)
