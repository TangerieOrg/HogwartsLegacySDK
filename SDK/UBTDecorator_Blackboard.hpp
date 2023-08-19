#pragma once
#include <cstdint>
#include "EBTBlackboardRestart\Type.hpp"
#include "UBTDecorator_BlackboardBase.hpp"
#pragma pack(push, 1)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase {
public:
    int32_t IntValue; // 0x90
    float FloatValue; // 0x94
    FString StringValue; // 0x98
    FString CachedDescription; // 0xa8
    uint8_t OperationType; // 0xb8
    EBTBlackboardRestart::Type NotifyObserver; // 0xb9
    char pad_ba[0x6];
    static UBTDecorator_Blackboard* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
