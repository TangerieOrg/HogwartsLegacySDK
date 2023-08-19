#pragma once
#include <cstdint>
#include "ERemoteControlEnum\Type.hpp"
#include "ERemoteControlEnumClass.hpp"
#include "FRemoteControlTestStructOuter.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class URemoteControlAPITestObject : public UObject {
public:
    int32_t CStyleIntArray[3]; // 0x28
    char pad_34[0x4];
    TArray<int32_t> IntArray; // 0x38
    TArray<FRemoteControlTestStructOuter> StructOuterArray; // 0x48
    char pad_58[0x140];
    TArray<FVector> ArrayOfVectors; // 0x198
    int8_t Int8Value; // 0x1a8
    char pad_1a9[0x1];
    int16_t Int16Value; // 0x1aa
    int32_t Int32Value; // 0x1ac
    float FloatValue; // 0x1b0
    char pad_1b4[0x4];
    double DoubleValue; // 0x1b8
    FRemoteControlTestStructOuter RemoteControlTestStructOuter; // 0x1c0
    FString StringValue; // 0x238
    FName NameValue; // 0x248
    char pad_250[0x18];
    bool bValue; // 0x268
    uint8_t ByteValue; // 0x269
    ERemoteControlEnum::Type RemoteControlEnumByteValue; // 0x26a
    ERemoteControlEnumClass RemoteControlEnumValue; // 0x26b
    FVector VectorValue; // 0x26c
    FRotator RotatorValue; // 0x278
    char pad_284[0x4];
    static URemoteControlAPITestObject* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
