#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USceneRigParameter : public UObject {
public:
    FString Name; // 0x28
    static USceneRigParameter* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
