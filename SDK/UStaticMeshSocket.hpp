#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UStaticMeshSocket : public UObject {
public:
    FName SocketName; // 0x28
    FVector RelativeLocation; // 0x30
    FRotator RelativeRotation; // 0x3c
    FVector RelativeScale; // 0x48
    char pad_54[0x4];
    FString Tag; // 0x58
    static UStaticMeshSocket* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
