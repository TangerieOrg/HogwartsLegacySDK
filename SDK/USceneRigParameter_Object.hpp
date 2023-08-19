#pragma once
#include <cstdint>
#include "USceneRigParameter.hpp"
class UObjectProvider;
#pragma pack(push, 1)
class USceneRigParameter_Object : public USceneRigParameter {
public:
    UObjectProvider* Value; // 0x38
    static USceneRigParameter_Object* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
