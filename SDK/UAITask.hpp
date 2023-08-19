#pragma once
#include <cstdint>
#include "UGameplayTask.hpp"
class AAIController;
#pragma pack(push, 1)
class UAITask : public UGameplayTask {
public:
    AAIController* OwnerController; // 0x68
    static UAITask* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
