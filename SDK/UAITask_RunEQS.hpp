#pragma once
#include <cstdint>
#include "UAITask.hpp"
class AAIController;
class UEnvQuery;
#pragma pack(push, 1)
class UAITask_RunEQS : public UAITask {
public:
    char pad_70[0x78];
    static UAITask_RunEQS* StaticClass();
    static UAITask_RunEQS* RunEQS(AAIController* Controller, UEnvQuery* QueryTemplate);
}; // Size: 0xe8
#pragma pack(pop)
