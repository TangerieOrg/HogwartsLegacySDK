#pragma once
#include <cstdint>
#include "ETaskResourceOverlapPolicy.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UGameplayTask : public UObject {
public:
    char pad_28[0x8];
    FName InstanceName; // 0x30
    char pad_38[0x2];
    ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3a
    char pad_3b[0x25];
    UGameplayTask* ChildTask; // 0x60
    static UGameplayTask* StaticClass();
    void ReadyForActivation();
    void GenericGameplayTaskDelegate__DelegateSignature();
    void EndTask();
}; // Size: 0x68
#pragma pack(pop)
